/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CDD_Data.c
* Module Description: Definition file for data communicated between Nexteer
*                      Complex Device Drivers (CDD)
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          13 %
 * %derived_by:       zz4r1x %
 * %date_modified:    Wed Dec  4 11:31:38 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 08/14/13  3        LWW       Removed unused data, added new data
 * 09/19/13  7        LWW       Added new data
 * 12/04/13  9        BWL       Removed Die1RevCntr per FDD 50A v4
 * 03/02/14  10       BWL       Removed unused signals per SVDrvr v4.0
 * 05/14/14  12       BWL       Update for combined DigMSB component.
 * 06/05/14  13       BWL       Change CDD_CumMechMtrPos_Rev_G_s15p16 to sint32 for A6846
 * 09/25/14  14       JWJ       Added GenPosTrajEnable for goto position service                                12491
 *                              Added ADC Offsets 1/2 for new CmMtrCurr component                               12485
 */

#include "Std_Types.h"
#include "CDD_Const.h"
#include "CDD_Data.h"

/**********************************************************************************************************************
 *  Ap_9
 *********************************************************************************************************************/
#define CDDDATA9_START_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */
/* EOL Global Data */
VAR(uint16, CDD_VAR) CDD_EOLCustWIRSelect_Cnt_G_u16;
VAR(uint16, CDD_VAR) CDD_EOLNxtrWIRSelect_Cnt_G_u16;
VAR(uint32, CDD_VAR) CDD_EOLSrlComSvcDft_Cnt_G_b32;
VAR(uint8, CDD_VAR) CDD_DemIdSnapshot_Cnt_G_u08;
VAR(boolean, CDD_VAR) CDD_DisableCEBusNormComm_Cnt_lgc;
VAR(boolean, CDD_VAR) CDD_BallNutTempEstDisableSvc_Cnt_G_lgc;
VAR(boolean, CDD_VAR) CDD_DisableHSBusNormComm_Cnt_lgc;
VAR(boolean, CDD_VAR) CDD_PullCompDisableSvc_Cnt_G_lgc;
VAR(boolean, CDD_VAR) CDD_PwrAsstModeSvc_Cnt_G_lgc;
VAR(boolean, CDD_VAR) CDD_SftEndStpDisableSvc_Cnt_G_lgc;
VAR(boolean, CDD_VAR) CDD_WIRDisableSvc_Cnt_G_lgc;
VAR(boolean, CDD_VAR) CDD_DftAsstTbl_Cnt_G_lgc;
VAR(boolean, CDD_VAR) CDD_GenPosTrajEnableFlag_Cnt_G_lgc;
VAR(float, CDD_VAR) CDD_DwnldAsstGain_Uls_G_f32;
#define CDDDATA9_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */

/**********************************************************************************************************************
 *  Ap_10
 *********************************************************************************************************************/
#define CDDDATA10_START_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */
/* Data Native to MtrCtrl Loop */
VAR(uint16,  CDD_VAR) CDD_CommOffset_Cnt_G_u16;
VAR(uint16,  CDD_VAR) CDD_ePWM4CMPB_Cnt_G_u16;
VAR(uint16,  CDD_VAR) CDD_SysCVSwitchADC_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_ADC1OffsetComp_Cnt_G_u8p8;
VAR(uint16, CDD_VAR) CDD_ADC2OffsetComp_Cnt_G_u8p8;
#define CDDDATA10_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */

#define CDDDATA10_START_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */
VAR(float32, CDD_VAR) CDD_MtrCurrQax_Amp_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurrDax_Amp_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MRFMtrVel_MtrRadpS_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_CorrMtrCurrPosition_Rev_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurrK1_Amps_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurrK2_Amps_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurr1_Volts_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurr2_Volts_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_Vecu_Volt_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16,CDD_VAR)   CDD_ModIdxSrlComSvcDft_Cnt_G_u16;
VAR(sint8,CDD_VAR)	CDD_MtrElecPol_Cnt_G_s8;
VAR(Rte_ModeType_StaMd_Mode, CDD_VAR) CDD_SysState_Cnt_G_Enum;
VAR(float32, CDD_VAR) CDD_MtrCurr1TempOffset_Volt_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurr2TempOffset_Volt_G_f32[D_APPCDDBFRSIZE_CNT_U16];


VAR(uint16,CDD_VAR) CDD_MtrCurrOffComOffset_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint32, CDD_VAR) CDD_PWMDutyCycleASum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint32, CDD_VAR) CDD_PWMDutyCycleBSum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint32, CDD_VAR) CDD_PWMDutyCycleCSum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint32, CDD_VAR) CDD_PWMPeriodSum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];

/* Data Native to Application Loop */
VAR(uint32, CDD_VAR) CDD_ModIdxFinal_Uls_G_u16p16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_PhaseAdvFinal_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(boolean, CDD_VAR) CDD_PwmDisable_Cnt_G_lgc[D_APPCDDBFRSIZE_CNT_U16];
VAR(float32, CDD_VAR) CDD_MtrCurrQaxFinalRef_Amp_G_f32[D_APPCDDBFRSIZE_CNT_U16];
VAR(sint8,   CDD_VAR) CDD_MtrPosPolarity_Cnt_G_s08[D_APPCDDBFRSIZE_CNT_U16];
VAR(sint8,   CDD_VAR) CDD_AssistAssemblyPolarity_Cnt_G_s08[D_APPCDDBFRSIZE_CNT_U16];

/* Data Consistancy Buffer Access Variables */
VAR(uint16, CDD_VAR) CDD_AppDataFwdPthAccessBfr_Cnt_G_u16;
VAR(uint16, CDD_VAR) CDD_AppDataFbkPthAccessBfr_Cnt_G_u16;
VAR(uint16, CDD_VAR) CDD_CDDDataAccessBfr_Cnt_G_u16;

/* ePWM Globals */
VAR(uint16, CDD_VAR) CDD_DCPhsComp_Cnt_G_u16[3];
VAR(uint16, CDD_VAR) CDD_PWMPeriod_Cnt_G_u16;


/* Data written by DigMSB */
VAR(uint16, CDD_VAR) CDD_MechMtrPos1_Rev_G_u0p16;
VAR(uint16, CDD_VAR) CDD_SysCorrectedElecMtrPos_Rev_G_u0p16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint32, CDD_VAR) CDD_MechMtrPos1TimeStamp_uSec_G_u32[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint32, CDD_VAR) CDD_MechMtrPos2TimeStamp_uSec_G_u32[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_CorrectedElecMtrPos_Rev_G_u0p16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_UncorrMechMtrPos1_Rev_G_u0p16[D_APPCDDBFRSIZE_CNT_U16];
VAR(sint32, CDD_VAR) CDD_CumMechMtrPos_Rev_G_s15p16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_Die1RxError_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_Die2RxError_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_Die1RxRevCtr_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_Die2RxRevCtr_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_Die1RxMtrPos_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_Die2RxMtrPos_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_RxMtrPos1ParityAccum_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
VAR(uint16, CDD_VAR) CDD_RxMtrPos1UnderVoltgFltAccum_Cnt_u16[D_APPCDDBFRSIZE_CNT_U16];

#define CDDDATA10_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */
