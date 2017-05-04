#include <soc.h>
#include <lplr_sections.h>

#ifndef SECTION_LPLR_BASIC_IO
    #define SECTION_LPLR_BASIC_IO SECTION_SOC_STRU 
#endif

extern void writeback_invalidate_dcache_all(void);
extern void writeback_invalidate_dcache_range(u32_t base_addr, u32_t end_addr);
extern void invalidate_icache_all(void);
extern void invalidate_icache_range(u32_t base_addr, u32_t end_addr);

extern init_table_entry_t start_of_init_func_table, end_of_init_func_table;
extern symbol_table_entry_t start_of_symble_table, end_of_symble_table;
soc_t _lplr_soc_structure SECTION_LPLR_BASIC_IO = {
    .bios = {
        .header= {
            .signature=SIGNATURE_LPLR,
            .version=LPLR_VERSION,
            .export_symb_list=&start_of_symble_table,
            .end_of_export_symb_list=&end_of_symble_table,
            .init_func_list=&start_of_init_func_table,
            .end_of_init_func_list=&end_of_init_func_table,
        },
        .dcache_writeback_invalidate_all= &writeback_invalidate_dcache_all,
        .dcache_writeback_invalidate_range=&writeback_invalidate_dcache_range,
        .icache_invalidate_all=&invalidate_icache_all,
        .icache_invalidate_range=&invalidate_icache_range
    },
    .cid = LPLR_CID,
};