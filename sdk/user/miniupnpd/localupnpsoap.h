/* $Id: localupnpsoap.h,v 1.3 2008/05/23 09:06:59 adsmt Exp $ */
/* MiniUPnP project
 * http://miniupnp.free.fr/ or http://miniupnp.tuxfamily.org/
 * (c) 2006 Thomas Bernard
 * This software is subject to the conditions detailed
 * in the LICENCE file provided within the distribution */

#ifndef __UPNPSOAP_H__
#define __UPNPSOAP_H__

/* ExecuteSoapAction():
 * this method executes the requested Soap Action */
void ExecuteSoapAction(struct upnphttp *, const char *, int);

/* SoapError():
 * sends a correct SOAP error with an UPNPError code and
 * description */
void SoapError(struct upnphttp * h, int errCode, const char * errDesc);

void BuildSendAndCloseSoapResp(struct upnphttp * h, const char * body, int bodylen);
#endif
