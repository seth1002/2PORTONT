/*!
*	\file
*	\brief
*	\Author		kelbch
*
*	@(#)	%filespec: -1 %
*
*******************************************************************************
*	\par	History
*	\n==== History ============================================================\n
*	date			name		version	 action                                          \n
*	----------------------------------------------------------------------------\n
*******************************************************************************
*	COPYRIGHT DOSCH & AMAND RESEARCH GMBH & CO.KG
*	DOSCH & AMAND RESEARCH GMBH & CO.KG Confidential
*
*******************************************************************************/

#if	!defined( APPSRV_H )
#define	APPSRV_H


#if defined( __cplusplus )
extern "C"
{
#endif

E_CMBS_RC      app_SrvHandsetDelete ( char * psz_Handsets );
E_CMBS_RC      app_SrvHandsetPage( char * psz_Handsets );
E_CMBS_RC      app_SrvSubscriptionOpen( void );
E_CMBS_RC      app_SrvSubscriptionClose( void );
//E_CMBS_RC      app_SrvPINCodeGet( u32 u32_Token );
E_CMBS_RC      app_SrvPINCodeSet( char * psz_PIN );
//E_CMBS_RC      app_SrvRFPIGet( u32 u32_Token );
E_CMBS_RC      app_SrvTestModeGet( u32 u32_Token );
E_CMBS_RC      app_SrvTestModeSet( void );
E_CMBS_RC      app_SrvFWVersionGet( u32 u32_Token );
E_CMBS_RC      app_SrvLogBufferRead( u32 u32_Token );
E_CMBS_RC      app_SrvSystemReboot( void );
E_CMBS_RC      app_SrvParamGet( E_CMBS_PARAM e_Param, u16 u16_Pos, u16 u16_Length, u32 u32_Token );
E_CMBS_RC      app_SrvParamSet( E_CMBS_PARAM e_Param, u16 u16_Pos, u16 u16_Length, u8* pu8_Data, u32 u32_Token );

int            app_ServiceEntity( void * pv_AppRef, E_CMBS_EVENT_ID e_EventID, void * pv_EventData );


#if defined( __cplusplus )
}
#endif

#endif	//APPSRV	_H
//*/
