/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CDD_Data.h
* Module Description: Header file for data communicated between Nexteer
*                      Complex Device Drivers (CDD)
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          16 %
 * %derived_by:       CZ8L9T %
 * %date_modified:    Wed Dec  4 11:32:36 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/26/13  1        LWW       Initial C1xx Synergy Version
 * 08/14/13  3        LWW       Removed unused data, added new data
 * 09/10/13  7        LWW       Changes for optimized DEM stored data
 * 09/19/13  8        LWW       Added new data
 * 12/04/13  10       BWL       Removed Die1RevCntr per FDD 50A v4
 * 03/02/14  11       BWL       Removed unused signals per SVDrvr v4.0
 * 05/14/14  13       BWL       Updates for combined DigMSB
 * 06/05/14  14       BWL       Change CDD_CumMechMtrPos_Rev_G_s15p16 to sint32 for A6846
 * 09/25/14  15       JWJ       Added GenPosTrajEnable for goto position service                                12491
 *                              Added ADC Offsets 1/2 for new CmMtrCurr component                               12485
 */

#ifndef CDD_DATA_H
#define CDD_DATA_H

#include "Std_Types.h"
#include "CDD_Const.h"
#include "Dem.h"
#include "Dem_Lcfg.h"
#include "Rte_Type.h"
#include "Ap_DemIf.h"

extern VAR(boolean, AP_SRLCOMOUTPUT_VAR) DTCTriggeredFlag_Cnt_M_lgc[D_NUMOFDEMEVENTS_CNT_U08 + 1U];
extern VAR(boolean, APPDESC_VAR_NOINIT) ECUResetPerformed_Cnt_G_lgc;
extern VAR(uint8, AUTOMATIC) RespMsgBuffer[D_CANRESPLMT_CNT_U8];

extern VAR(uint16,  CDD_VAR) CDD_CommOffset_Cnt_G_u16;
extern VAR(uint8, CDD_VAR) CDD_DemIdSnapshot_Cnt_G_u08;
extern VAR(boolean, CDD_VAR) CDD_DisableCEBusNormComm_Cnt_lgc;
extern VAR(boolean, CDD_VAR) CDD_BallNutTempEstDisableSvc_Cnt_G_lgc;
extern VAR(boolean, CDD_VAR) CDD_DisableHSBusNormComm_Cnt_lgc;
extern VAR(boolean, CDD_VAR) CDD_PullCompDisableSvc_Cnt_G_lgc;
extern VAR(boolean, CDD_VAR) CDD_PwrAsstModeSvc_Cnt_G_lgc;
extern VAR(boolean, CDD_VAR) CDD_SftEndStpDisableSvc_Cnt_G_lgc;
extern VAR(boolean, CDD_VAR) CDD_GenPosTrajEnableFlag_Cnt_G_lgc;

extern VAR(float32, CDD_VAR) CDD_MtrCurrQax_Amp_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurrDax_Amp_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16,  CDD_DATA_VAR) CDD_SysCVSwitchADC_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MRFMtrVel_MtrRadpS_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_CorrMtrCurrPosition_Rev_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurrK1_Amps_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurrK2_Amps_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurr1_Volts_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurr2_Volts_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_Vecu_Volt_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16,CDD_VAR)	CDD_ModIdxSrlComSvcDft_Cnt_G_u16;
extern VAR(sint8,CDD_VAR)	CDD_MtrElecPol_Cnt_G_s8;
extern VAR(Rte_ModeType_StaMd_Mode, CDD_VAR) CDD_SysState_Cnt_G_Enum;
extern VAR(float32, CDD_VAR) CDD_MtrCurr1TempOffset_Volt_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurr2TempOffset_Volt_G_f32[D_APPCDDBFRSIZE_CNT_U16];

extern VAR(uint16,CDD_VAR) CDD_MtrCurrOffComOffset_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint32, CDD_VAR) CDD_PWMDutyCycleASum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint32, CDD_VAR) CDD_PWMDutyCycleBSum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint32, CDD_VAR) CDD_PWMDutyCycleCSum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint32, CDD_VAR) CDD_PWMPeriodSum_Cnt_G_u32[D_APPCDDBFRSIZE_CNT_U16];

/* Data Native to Application Loop */
extern VAR(uint32, CDD_VAR) CDD_ModIdxFinal_Uls_G_u16p16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR) CDD_PhaseAdvFinal_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(boolean, CDD_VAR) CDD_PwmDisable_Cnt_G_lgc[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(float32, CDD_VAR) CDD_MtrCurrQaxFinalRef_Amp_G_f32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(sint8,   CDD_DATA_VAR) CDD_MtrPosPolarity_Cnt_G_s08[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(sint8,   CDD_DATA_VAR) CDD_AssistAssemblyPolarity_Cnt_G_s08[D_APPCDDBFRSIZE_CNT_U16];

/* Data Consistancy Buffer Access Variables */
extern VAR(uint16, CDD_VAR) CDD_AppDataFwdPthAccessBfr_Cnt_G_u16;
extern VAR(uint16, CDD_VAR) CDD_AppDataFbkPthAccessBfr_Cnt_G_u16;
extern VAR(uint16, CDD_VAR) CDD_CDDDataAccessBfr_Cnt_G_u16;

/* EOL Global Data */
extern VAR(uint16, CDD_VAR) CDD_EOLCustWIRSelect_Cnt_G_u16;
extern VAR(uint16, CDD_VAR) CDD_EOLNxtrWIRSelect_Cnt_G_u16;
extern VAR(uint16, CDD_VAR) CDD_ADC1OffsetComp_Cnt_G_u8p8;
extern VAR(uint16, CDD_VAR) CDD_ADC2OffsetComp_Cnt_G_u8p8;
extern VAR(uint32, CDD_VAR) CDD_EOLSrlComSvcDft_Cnt_G_b32;

extern VAR(boolean, CDD_VAR) CDD_WIRDisableSvc_Cnt_G_lgc;
extern VAR(boolean, CDD_VAR) CDD_DftAsstTbl_Cnt_G_lgc;
extern VAR(float32, CDD_VAR) CDD_DwnldAsstGain_Uls_G_f32;

/* ePWM Globals */
extern VAR(uint16, CDD_VAR_NOINT) CDD_DCPhsComp_Cnt_G_u16[3];
extern VAR(uint16, CDD_VAR_NOINT) CDD_PWMPeriod_Cnt_G_u16;
extern VAR(uint16, CDD_VAR_NOINT) CDD_ePWM4CMPB_Cnt_G_u16;

/* Data written by DigMSB */
extern VAR(uint16, CDD_VAR_NOINT) CDD_MechMtrPos1_Rev_G_u0p16;
extern VAR(uint16, CDD_VAR_NOINT) CDD_SysCorrectedElecMtrPos_Rev_G_u0p16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint32, CDD_VAR_NOINT) CDD_MechMtrPos1TimeStamp_uSec_G_u32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint32, CDD_VAR_NOINT) CDD_MechMtrPos2TimeStamp_uSec_G_u32[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_CorrectedElecMtrPos_Rev_G_u0p16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_UncorrMechMtrPos1_Rev_G_u0p16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(sint32, CDD_VAR_NOINT) CDD_CumMechMtrPos_Rev_G_s15p16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_Die1RxError_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_Die2RxError_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_Die1RxRevCtr_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_Die2RxRevCtr_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_Die1RxMtrPos_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_Die2RxMtrPos_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR_NOINT) CDD_RxMtrPos1ParityAccum_Cnt_G_u16[D_APPCDDBFRSIZE_CNT_U16];
extern VAR(uint16, CDD_VAR) CDD_RxMtrPos1UnderVoltgFltAccum_Cnt_u16[D_APPCDDBFRSIZE_CNT_U16];

#endif
