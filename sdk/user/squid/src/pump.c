/*
 * $Id: pump.c,v 1.1.1.1 2003/08/18 05:40:24 kaohj Exp $
 *
 * DEBUG: section 61    PUMP handler
 * AUTHOR: Kostas Anagnostakis
 *
 * SQUID Internet Object Cache  http://squid.nlanr.net/Squid/
 * ----------------------------------------------------------
 *
 *  Squid is the result of efforts by numerous individuals from the
 *  Internet community.  Development is led by Duane Wessels of the
 *  National Laboratory for Applied Network Research and funded by the
 *  National Science Foundation.  Squid is Copyrighted (C) 1998 by
 *  the Regents of the University of California.  Please see the
 *  COPYRIGHT file for full details.  Squid incorporates software
 *  developed and/or copyrighted by other sources.  Please see the
 *  CREDITS file for full details.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 */

#include "squid.h"

#define PUMP_MAXBUFFER 2*SQUID_UDP_SO_SNDBUF

struct _PumpStateData {
    FwdState *fwd;
    request_t *req;
    int c_fd;			/* client fd */
    int s_fd;			/* server end */
    int rcvd;			/* bytes received from client */
    int sent;			/* bytes sent to server */
    StoreEntry *request_entry;	/* the request entry */
    StoreEntry *reply_entry;	/* the reply entry */
    CWCB *callback;		/* what to do when we finish sending */
    void *cbdata;		/* callback data passed to callback func */
    struct {
	int closing:1;
    } flags;
    struct _PumpStateData *next;
};

#define PUMP_FLAG_CLOSING	0x01

typedef struct _PumpStateData PumpStateData;

static PumpStateData *pump_head = NULL;

static PF pumpReadFromClient;
static STCB pumpServerCopy;
static CWCB pumpServerCopyComplete;
static PF pumpFree;
static PF pumpTimeout;
static PF pumpServerClosed;
static DEFER pumpReadDefer;
static void pumpClose(void *data);

void
pumpInit(int fd, request_t * r, char *uri)
{
    request_flags flags;
    LOCAL_ARRAY(char, new_key, MAX_URL + 8);
    PumpStateData *p = xcalloc(1, sizeof(PumpStateData));
    debug(61, 3) ("pumpInit: FD %d, uri=%s\n", fd, uri);
    /*
     * create a StoreEntry which will buffer the data 
     * to be pumped
     */
    assert(fd > -1);
    assert(uri != NULL);
    assert(r != NULL);
    /* we shouldn't have gotten this far if content-length is invalid */
    assert(r->content_length >= 0);
    debug(61, 4) ("pumpInit: Content-Length=%d.\n", r->content_length);
    flags = null_request_flags;
    flags.nocache = 1;
    snprintf(new_key, MAX_URL + 5, "%s|Pump", uri);
    cbdataAdd(p, cbdataXfree, 0);
    p->request_entry = storeCreateEntry(new_key, new_key, flags, r->method);
    storeClientListAdd(p->request_entry, p);
    EBIT_SET(p->request_entry->flags, ENTRY_DONT_LOG);
#if DELAY_POOLS
    delaySetStoreClient(p->request_entry, p, delayClient(r));
#endif
    /*
     * initialize data structure
     */
    p->c_fd = fd;
    p->s_fd = -1;
    p->req = requestLink(r);
    p->callback = NULL;
    p->cbdata = NULL;
    p->next = pump_head;
    pump_head = p;
    comm_add_close_handler(p->c_fd, pumpFree, p);
    commSetSelect(fd, COMM_SELECT_READ, NULL, NULL, 0);
    debug(61, 4) ("pumpInit: FD %d, Created %p\n", fd, p);
}

void
pumpStart(int s_fd, FwdState * fwd, CWCB * callback, void *cbdata)
{
    PumpStateData *p = NULL;
    request_t *r = fwd->request;
    size_t copy_sz;
    debug(61, 3) ("pumpStart: FD %d, key %s\n",
	s_fd, storeKeyText(fwd->entry->key));
    /*
     * find state data generated by pumpInit in linked list
     */
    for (p = pump_head; p && p->req != r; p = p->next);
    assert(p != NULL);
    assert(p->request_entry);
    assert(p->c_fd > -1);
    assert(r == p->req);
    /*
     * fill in the rest of data needed by the pump
     */
    p->fwd = fwd;
    p->s_fd = s_fd;
    p->reply_entry = fwd->entry;
    p->callback = callback;
    p->cbdata = cbdata;
    cbdataLock(p->cbdata);
    storeLockObject(p->reply_entry);
    comm_add_close_handler(p->s_fd, pumpServerClosed, p);
    /*
     * see if part of the body is in the request
     */
    if (p->rcvd < p->req->content_length && r->body_sz > 0) {
	assert(p->request_entry->store_status == STORE_PENDING);
	assert(r->body != NULL);
	assert(r->body_sz <= p->req->content_length);
	copy_sz = XMIN(r->body_sz, p->req->content_length);
	debug(61, 3) ("pumpStart: Appending %d bytes from r->body\n", copy_sz);
	storeAppend(p->request_entry, r->body, copy_sz);
	p->rcvd = copy_sz;
    }
    /*
     * Do we need to read more data from the client?
     */
    if (p->rcvd < p->req->content_length) {
	assert(p->request_entry->store_status == STORE_PENDING);
	commSetSelect(p->c_fd, COMM_SELECT_READ, pumpReadFromClient, p, 0);
	commSetTimeout(p->c_fd, Config.Timeout.read, pumpTimeout, p);
	commSetDefer(p->c_fd, pumpReadDefer, p);
    }
    p->sent = 0;
    if (p->sent == p->req->content_length) {
	pumpServerCopyComplete(p->s_fd, NULL, 0, DISK_OK, p);
    } else {
	storeClientCopy(p->request_entry, p->sent, p->sent, 4096,
	    memAllocate(MEM_4K_BUF),
	    pumpServerCopy, p);
    }
}

static void
pumpServerCopy(void *data, char *buf, ssize_t size)
{
    PumpStateData *p = data;
    debug(61, 5) ("pumpServerCopy: called with size=%d\n", size);
    if (size < 0) {
	debug(61, 5) ("pumpServerCopy: freeing and returning\n");
	memFree(buf, MEM_4K_BUF);
	return;
    }
    if (size == 0) {
	debug(61, 5) ("pumpServerCopy: done, finishing\n", size);
	pumpServerCopyComplete(p->s_fd, NULL, 0, DISK_OK, p);
	memFree(buf, MEM_4K_BUF);
	return;
    }
    debug(61, 5) ("pumpServerCopy: to FD %d, %d bytes\n", p->s_fd, size);
    comm_write(p->s_fd, buf, size, pumpServerCopyComplete, p, memFree4K);
}

static void
pumpServerCopyComplete(int fd, char *bufnotused, size_t size, int errflag, void *data)
{
    PumpStateData *p = data;
    int sfd;
    debug(61, 5) ("pumpServerCopyComplete: called with size=%d (%d,%d)\n",
	size, p->sent + size, p->req->content_length);
    if (errflag == COMM_ERR_CLOSING)
	return;
    if (errflag != 0) {
	debug(61, 5) ("pumpServerCopyComplete: aborted, errflag %d\n", errflag);
	pumpClose(p);
	return;
    }
    if (EBIT_TEST(p->request_entry->flags, ENTRY_ABORTED)) {
	debug(61, 5) ("pumpServerCopyComplete: ENTRY_ABORTED\n");
	pumpClose(p);
	return;
    }
    p->sent += size;
    assert(p->sent <= p->req->content_length);
    if (p->sent < p->req->content_length) {
	storeClientCopy(p->request_entry, p->sent, p->sent, 4096,
	    memAllocate(MEM_4K_BUF),
	    pumpServerCopy, p);
	return;
    }
    debug(61, 5) ("pumpServerCopyComplete: Done!\n", size);
    /*
     * we don't care what happens on the server side now
     */
    sfd = p->s_fd;
    comm_remove_close_handler(p->s_fd, pumpServerClosed, p);
    p->s_fd = -1;
    if (cbdataValid(p->cbdata))
	p->callback(sfd, NULL, p->sent, 0, p->cbdata);
    cbdataUnlock(p->cbdata);
    storeUnlockObject(p->reply_entry);
    p->reply_entry = NULL;
}


static void
pumpReadFromClient(int fd, void *data)
{
    PumpStateData *p = data;
    StoreEntry *req = p->request_entry;
    LOCAL_ARRAY(char, buf, SQUID_TCP_SO_RCVBUF);
    int bytes_to_read = XMIN(p->req->content_length - p->rcvd, SQUID_TCP_SO_RCVBUF);
    int len = 0;
    errno = 0;
    Counter.syscalls.sock.reads++;
    len = read(fd, buf, bytes_to_read);
    fd_bytes(fd, len, FD_READ);
    debug(61, 5) ("pumpReadFromClient: FD %d: len %d.\n", fd, len);
    if (len > 0) {
	(void) 0;		/* continue */
    } else if (len < 0) {
	debug(61, 2) ("pumpReadFromClient: FD %d: read failure: %s.\n",
	    fd, xstrerror());
	if (ignoreErrno(errno)) {
	    debug(61, 5) ("pumpReadFromClient: FD %d: len %d and ignore!\n",
		fd, len);
	    commSetSelect(fd,
		COMM_SELECT_READ,
		pumpReadFromClient,
		p,
		Config.Timeout.read);
	} else {
	    debug(61, 2) ("pumpReadFromClient: aborted.\n");
	    pumpClose(p);
	}
	return;
    } else if (req->mem_obj->inmem_hi == 0) {
	debug(61, 2) ("pumpReadFromClient: FD %d: failed.\n", fd);
	pumpClose(p);
	return;
    } else if (p->rcvd < p->req->content_length) {
	debug(61, 4) ("pumpReadFromClient: FD %d, incomplete request\n", fd);
	pumpClose(p);
	return;
    }
    if (len > 0) {
	int delta = p->rcvd + len - p->req->content_length;
	if (delta > 0 && p->req->flags.proxy_keepalive) {
	    debug(61, delta == 2 ? 3 : 1) ("pumpReadFromClient: Warning: read %d bytes past content-length, truncating\n", delta);
	    len = p->req->content_length - p->rcvd;
	}
	storeAppend(req, buf, len);
	p->rcvd += len;
    }
    if (p->rcvd < p->req->content_length) {
	/* We need more data */
	commSetSelect(fd, COMM_SELECT_READ, pumpReadFromClient,
	    p, Config.Timeout.read);
	return;
    }
    /* all done! */
    if (p->req->flags.proxy_keepalive)
	assert(p->rcvd == p->req->content_length);
    debug(61, 2) ("pumpReadFromClient: finished!\n");
    storeComplete(req);
    commSetDefer(p->c_fd, NULL, NULL);
    commSetTimeout(p->c_fd, -1, NULL, NULL);
}

static int
pumpReadDefer(int fd, void *data)
{
    PumpStateData *p = data;
    assert(p->rcvd >= p->sent);
    if ((p->rcvd - p->sent) < PUMP_MAXBUFFER)
	return 0;
    debug(61, 5) ("pumpReadDefer: deferring, rcvd=%d, sent=%d\n",
	p->rcvd, p->sent);
    return 1;
}

static void
pumpClose(void *data)
{
    PumpStateData *p = data;
    StoreEntry *req = p->request_entry;
    StoreEntry *rep = p->reply_entry;
    cbdataLock(p);
    debug(61, 3) ("pumpClose: %p Server FD %d, Client FD %d\n",
	p, p->s_fd, p->c_fd);
    /* double-call detection */
    assert(!p->flags.closing);
    p->flags.closing = 1;
    if (req != NULL && req->store_status == STORE_PENDING) {
	storeUnregister(req, p);
    }
    if (rep != NULL && rep->store_status == STORE_PENDING) {
	ErrorState *err = errorCon(ERR_READ_ERROR, HTTP_INTERNAL_SERVER_ERROR);
	fwdFail(p->fwd, err);
    }
    if (p->s_fd > -1) {
	comm_close(p->s_fd);
	p->s_fd = -1;
    }
    if (p->c_fd > -1) {
	comm_close(p->c_fd);
    }
    /* This tests that pumpFree() got called somewhere */
    assert(0 == cbdataValid(p));
    cbdataUnlock(p);
}

static void
pumpFree(int fd, void *data)
{
    PumpStateData *p = NULL;
    PumpStateData *q = NULL;
    StoreEntry *req;
    StoreEntry *rep;
    debug(61, 3) ("pumpFree: FD %d, releasing %p!\n", fd, data);
    for (p = pump_head; p && p != data; q = p, p = p->next);
    if (p == NULL) {
	debug(61, 1) ("pumpFree: p=%p not found?\n", p);
	return;
    }
    if (q)
	q->next = p->next;
    else
	pump_head = p->next;
    assert(fd == p->c_fd);
    p->c_fd = -1;
    req = p->request_entry;
    rep = p->reply_entry;
    if (req != NULL) {
	storeUnregister(req, p);
	storeUnlockObject(req);
	p->request_entry = NULL;
    }
    if (rep != NULL) {
	debug(61, 3) ("pumpFree: did the server-side FD (%d) get closed?\n", p->s_fd);
	storeUnlockObject(rep);
	p->reply_entry = NULL;
    }
    requestUnlink(p->req);
    if (p->s_fd > -1) {
	assert(!fd_table[p->s_fd].flags.open);
	p->s_fd = -1;
    }
    cbdataFree(p);
}

static void
pumpTimeout(int fd, void *data)
{
    PumpStateData *p = data;
    debug(61, 3) ("pumpTimeout: FD %d\n", p->c_fd);
    pumpClose(p);
}

/*
 *This is called only if the client connect closes unexpectedly
 */
static void
pumpServerClosed(int fd, void *data)
{
    PumpStateData *p = data;
    debug(61, 3) ("pumpServerClosed: FD %d\n", fd);
    /*
     * we have been called from comm_close for the server side, so
     * just need to clean up the client side
     */
    assert(p->s_fd == fd);
    p->s_fd = -1;
    if (p->flags.closing)
	return;
    if (p->c_fd > -1)
	comm_close(p->c_fd);
}

/*
 * This function returns True if we can submit this request again.
 * The request may have been pipelined, but the connection got
 * closed before we got a reply.  If we still have the whole
 * request in memory then we can send it again.  If we want to
 * be able to restart very large requests, then we'll have to
 * swap them out to disk.
 */
int
pumpRestart(request_t * r)
{
    PumpStateData *p;
    MemObject *mem;
    for (p = pump_head; p && p->req != r; p = p->next);
    if (p == NULL) {
	debug(61, 3) ("pumpRestart: NO: Can't find pumpState!\n");
	return 0;
    }
    mem = p->request_entry->mem_obj;
    if (mem == NULL) {
	debug(61, 3) ("pumpRestart: NO: request_entry->mem_obj == NULL!\n");
	return 0;
    }
    if (mem->inmem_lo > 0) {
	debug(61, 3) ("pumpRestart: NO: mem->inmem_lo == %d\n",
	    (int) mem->inmem_lo);
	return 0;
    }
    debug(61, 3) ("pumpRestart: YES!\n");
    return 1;
}