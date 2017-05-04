#ifndef __RTK_RTL9601B_TABLE_STRUCT_H__
#define __RTK_RTL9601B_TABLE_STRUCT_H__

/*
 * Include Files
 */
#include <common/rt_autoconf.h>

/* Superset Table Enum */
typedef enum rtk_rtl9601b_table_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLEt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLEt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATAt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLEt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATAt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASKt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DSt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_USt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASKt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34t,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULEt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCEDt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSLt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UCt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSLt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_VLANt,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_EPON_GRANTt,
#endif

    RTL9601B_TABLE_LIST_END,
} rtk_rtl9601b_table_list_t;


/* Internal Table Enum */
typedef enum rtk_int_rtl9601b_table_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_HSB_DATA_TABLE_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_HSA_DATA_TABLE_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_HSA_DEBUG_DATA_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_ACL_ACTION_TABLE_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_ACL_DATA_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_ACL_MASK_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_CF_ACTION_DS_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_CF_ACTION_US_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_CF_MASK_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_CF_MASK_L34_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_CF_RULE_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_CF_RULE_ENHANCED_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_L2_MC_DSL_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_L2_UC_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_L3_MC_DSL_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_VLAN_RTL9601B,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    INT_RTL9601B_EPON_GRANT_RTL9601B,
#endif

    INT_RTL9601B_TABLE_LIST_END,
} rtk_int_rtl9601b_table_list_t;


typedef enum rtk_rtl9601b_hsb_data_tableField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_SPAtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_15tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_14tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_13tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_12tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_11tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_10tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_9tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_8tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_7tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_6tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_5tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_4tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_FIELD_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_USER_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_IGMP_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_UDP_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_TCP_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_DIPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_SIPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_TOS_DSCPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_IP_RSV_MC_ADDRtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_IP_TYPEtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_OMAPDUtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_RLDP_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_LLC_OTHERtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_PPPOE_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_SNAP_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_ETHER_TYPEtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CTAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CTAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_STAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_STAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_TXPMSKtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_PRISELtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_KEEPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_DISLRNtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_PSELtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_PON_SIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_CPUTAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_SAtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_DAtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_PON_IDXtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSB_DATA_TABLE_PKT_LENtf,
#endif

    RTL9601B_HSB_DATA_TABLEFIELD_LIST_END,
} rtk_rtl9601b_hsb_data_tableField_list_t;


typedef enum rtk_rtl9601b_hsa_data_tableField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_OMCI_PKTLENtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_ENDSCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_BGDSCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_QIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_FLOODPKTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_IPMCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_CPUPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_FWDRSNtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_PON_SIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_DPMtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_SPAtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAB_PKTLENtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_ORG_CVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_ORG_CPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_ORG_CFItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_CACT_TAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_UNTAGSETtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_CTAG_PONACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_CTAG_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_VIDZEROtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_PRITAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_CTAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_PONVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_CACT_NOPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_PONPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAC_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_MDY_SVID_PONtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_MDY_SVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_STAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_DEI_PONtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_DEItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_UNTAGSETtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_STAG_TYPEtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_FRCTAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_FRCTAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_PONSVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_SVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_PKT_SPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_PONSPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAS_SPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_CPUTAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_USER_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_1P_REM_PONtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_1P_REM_EN_PONtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_DSCP_REM_PONtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_DSCP_REM_EN_PONtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_1P_REMtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_1P_REM_ENtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_DSCP_REMtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAM_DSCP_REM_ENtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_REGEN_CRCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_CPUKEEPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_KEEPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_TCPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_UDPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_IPV4tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_IPV6tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_RFC1042tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DATA_TABLE_RNG_NHSAF_PPPOE_IFtf,
#endif

    RTL9601B_HSA_DATA_TABLEFIELD_LIST_END,
} rtk_rtl9601b_hsa_data_tableField_list_t;


typedef enum rtk_rtl9601b_hsa_debug_dataField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_PKT_CHANGEDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_TCPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_UDPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_PADGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_SV_DEItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_STYPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_PKTLEN_ORItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_QIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_STDSCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_CPUPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_SPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_TXINStf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_CVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_CFItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_REGENCRCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_PPPOEtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_RFC1042tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_IPV6tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA1_IPV4tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_RSVtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_REMDSCP_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_CTAG_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_REMDSCP_ENtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_SVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_STAG_INStf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_PKTLENGTH_MDYtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_SPAtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_DPCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_PONSIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_HSA_DEBUG_DATA_TXHSA0_TRPRSNtf,
#endif

    RTL9601B_HSA_DEBUG_DATAFIELD_LIST_END,
} rtk_rtl9601b_hsa_debug_dataField_list_t;


typedef enum rtk_rtl9601b_acl_action_tableField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_HITtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_ACLINTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_ACLPRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_FWDACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_POLICACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_METER_IDXtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_RMK_DSCPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_ACTION_TABLE_RMK_1Ptf,
#endif

    RTL9601B_ACL_ACTION_TABLEFIELD_LIST_END,
} rtk_rtl9601b_acl_action_tableField_list_t;


typedef enum rtk_rtl9601b_acl_dataField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD7tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD6tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD5tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD4tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_FIELD0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_RSVtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_PMSKtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_TAGStf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_DATA_TYPEtf,
#endif

    RTL9601B_ACL_DATAFIELD_LIST_END,
} rtk_rtl9601b_acl_dataField_list_t;


typedef enum rtk_rtl9601b_acl_maskField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD7tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD6tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD5tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD4tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_FIELD0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_RSVtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_PMSKtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_TAGStf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_ACL_MASK_TYPEtf,
#endif

    RTL9601B_ACL_MASKFIELD_LIST_END,
} rtk_rtl9601b_acl_maskField_list_t;


typedef enum rtk_rtl9601b_cf_action_dsField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_UNI_PMSKtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_UNI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_DSCP_REMARKtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CF_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CFPRI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CPRI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CVID_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_C_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_C_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CSPRI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CSVID_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CS_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CS_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_DS_CSACTtf,
#endif

    RTL9601B_CF_ACTION_DSFIELD_LIST_END,
} rtk_rtl9601b_cf_action_dsField_list_t;


typedef enum rtk_rtl9601b_cf_action_usField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_DROPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_ASSIGN_IDXtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_SID_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_DSCP_REMARKtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CF_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CFPRI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CPRI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CVID_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_C_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_C_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CSPRI_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CSVID_ACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CS_PRItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CS_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CACTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_ACTION_US_CSACTtf,
#endif

    RTL9601B_CF_ACTION_USFIELD_LIST_END,
} rtk_rtl9601b_cf_action_usField_list_t;


typedef enum rtk_rtl9601b_cf_maskField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_ETH_TYPE_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_U_D_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_TOS_GEMIDX_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_VID_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_INTER_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_STAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_CTAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_UNI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_U_D_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_TOS_GEMIDX_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_VID_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_INTER_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_STAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_CTAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_UNI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_U_D_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_TOS_GEMIDX_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_VID_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_INTER_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_STAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_CTAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_UNI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_U_D_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_TOS_GEMIDX_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_VID_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_INTER_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_STAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_IF_CTAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_UNI_3tf,
#endif

    RTL9601B_CF_MASKFIELD_LIST_END,
} rtk_rtl9601b_cf_maskField_list_t;


typedef enum rtk_rtl9601b_cf_mask_l34Field_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_INNER_TAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_U_D_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_ACL_HITtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_DEItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_VID_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_INTER_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_STAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_CTAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_UNI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_U_D_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_TOS_GEMIDX_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_VID_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_INTER_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_STAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_CTAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_UNI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_U_D_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_TOS_GEMIDX_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_VID_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_INTER_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_STAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_CTAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_UNI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_U_D_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_TOS_GEMIDX_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_VID_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_INTER_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_STAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_IF_CTAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_MASK_L34_UNI_3tf,
#endif

    RTL9601B_CF_MASK_L34FIELD_LIST_END,
} rtk_rtl9601b_cf_mask_l34Field_list_t;


typedef enum rtk_rtl9601b_cf_ruleField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ETH_TYPE_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_U_D_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_TOS_GEMIDX_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_VID_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_INTER_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_STAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_CTAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_UNI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_U_D_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_TOS_GEMIDX_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_VID_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_INTER_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_STAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_CTAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_UNI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_U_D_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_TOS_GEMIDX_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_VID_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_INTER_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_STAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_CTAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_UNI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_U_D_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_TOS_GEMIDX_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_VID_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_INTER_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_STAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_IF_CTAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_UNI_3tf,
#endif

    RTL9601B_CF_RULEFIELD_LIST_END,
} rtk_rtl9601b_cf_ruleField_list_t;


typedef enum rtk_rtl9601b_cf_rule_enhancedField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_INNER_TAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_U_D_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_ACL_HITtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_DEItf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_VID_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_INTER_PRI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_STAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_CTAG_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_UNI_0tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_U_D_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_TOS_GEMIDX_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_VID_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_INTER_PRI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_STAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_CTAG_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_UNI_1tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_U_D_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_TOS_GEMIDX_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_VID_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_INTER_PRI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_STAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_CTAG_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_UNI_2tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_U_D_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_TOS_GEMIDX_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_VID_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_INTER_PRI_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_STAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_IF_CTAG_3tf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_CF_RULE_ENHANCED_UNI_3tf,
#endif

    RTL9601B_CF_RULE_ENHANCEDFIELD_LIST_END,
} rtk_rtl9601b_cf_rule_enhancedField_list_t;


typedef enum rtk_rtl9601b_l2_mc_dslField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_STATICtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_MBRtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_L2IVLtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_L3LOOKUPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_VID_FIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_MC_DSL_MACtf,
#endif

    RTL9601B_L2_MC_DSLFIELD_LIST_END,
} rtk_rtl9601b_l2_mc_dslField_list_t;


typedef enum rtk_rtl9601b_l2_ucField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_STATICtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_CTAG_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_CTAG_IFtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_AGEtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_SPAtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_L2IVLtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_L3LOOKUPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_CVIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L2_UC_MACtf,
#endif

    RTL9601B_L2_UCFIELD_LIST_END,
} rtk_rtl9601b_l2_ucField_list_t;


typedef enum rtk_rtl9601b_l3_mc_dslField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSL_VALIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSL_STATICtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSL_MBRtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSL_L3LOOKUPtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSL_VIDtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_L3_MC_DSL_GIPtf,
#endif

    RTL9601B_L3_MC_DSLFIELD_LIST_END,
} rtk_rtl9601b_l3_mc_dslField_list_t;


typedef enum rtk_rtl9601b_vlanField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_VLAN_IVL_SVLtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_VLAN_ENSVLANHASHtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_VLAN_UNTAGtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_VLAN_MBRtf,
#endif

    RTL9601B_VLANFIELD_LIST_END,
} rtk_rtl9601b_vlanField_list_t;


typedef enum rtk_rtl9601b_epon_grantField_list_e
{
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_EPON_GRANT_IS_FORCE_REPORTtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_EPON_GRANT_LLIDIDXtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_EPON_GRANT_IS_DISCtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_EPON_GRANT_GRANT_LENtf,
#endif
#if defined(CONFIG_SDK_RTL9601B)
    RTL9601B_EPON_GRANT_GRANT_STARTtf,
#endif

    RTL9601B_EPON_GRANTFIELD_LIST_END,
} rtk_rtl9601b_epon_grantField_list_t;

extern rtk_table_t rtk_rtl9601b_table_list[];


#endif    /* __RTK_RTL9601B_TABLE_STRUCT_H__ */