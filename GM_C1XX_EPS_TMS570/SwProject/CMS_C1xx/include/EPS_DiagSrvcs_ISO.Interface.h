/***********************************************************************************************************************
* Copyright 2013 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EPS_DiagSrvcs_ISO.Interface.h file
* Module Description: Common Manufacturing services
* Product           : Gen II Plus - EA3.0
* Author            : czgng4
*
* Notes:
* This file contains configurations for ISO services.
*
***********************************************************************************************************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                 DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          EA3#22 %
 * %derived_by:       fz9hxm %
 * %date_modified:    Fri Oct 25 13:48:07 2013 %
 * --------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                           SCR #
 * --------  -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 08/30/13  4        LWW       Manual updates for DigMSB calibration
 * 08/30/13  5        BWL       Remove Make EcuReset call trusted
 * 09/12/13  6        LWW       Added new customer specific nexteer services
 * 09/30/13  8        LWW       Updates per new CMS configuration
 * 03/18/14  9        BWL       Update the version of the CMS generator.
 * 03/18/14  10       BWL       Change HW pos trim functions to Nexteer specific versions.
 * 04/03/14  11       BWL       CM_DigHwTrqSENT_SCom_ReadTrim changed to component version.
 * 05/14/14  12       BWL       Updates for combined DigMSB component.
 * 10/10/14  15       JWJ       A7414: Added missing function prototype for goto position service               12531
 * 11/20/14  16       JWJ       Implemented XCP PIDs as per DSR rev 001H                                        12661
 * 01/26/15  17       Jared     Added second, system calibration set to FD01                                    12892
 * 04/12/16  18       CP        Integrated CMS_Common_10.B1 and added CM_CyberSecNexteerLocked_Cnt_lgc to
 *                              Fix anomaly EA3#2978                                                            5491
 * 05/21/16  19       CP        Integrated CMS_Common_10C.0 to fix EA3#5733, EA3#5805
 */
/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                   DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include area >>                         DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/
#include "EPS_DiagSrvcs_CommonData.h"
#include "EPS_DiagSrvcs_SrvcLUTbl.h"

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include area >>                           DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

#ifndef EPS_DIAGSRVCS_ISO_INTERFACE_H
#define EPS_DIAGSRVCS_ISO_INTERFACE_H

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom include area >>                  DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

#include "CalConstants.h"
#include "desc.h"					/* Required for interfacing with the CAN transport layer */
#include "Dem_Cfg.h"
#include "Dem_Types.h"
#include "Lnk_Symbols.h"
#include "Ap_DiagMgr.h"
#include "NtWrap.h"
#include "Interrupts.h"
#include "Ap_ApXcp.h"

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom include area >>                    DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom define area >>                   DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

/* --- Common Defines --- */
#define CM_DIAGBUFFLEN_CNT_U16                      kDescPrimBufferLen
#define NEXTEER_SESSION								kDescStateDiagnostic_ModeNexteer_Mode
#define CM_NumHeaderBytes_Cnt_u16					2u
#define CM_NumRIDHeaderBytes_Cnt_u16				3u
#define CM_NumLIDHeaderBytes_Cnt_u16				CDD_DiagSrvcsUnusedVar_Cnt_M_u16
#define CM_MsgBufferType							DescMsg
#define CM_MsgLenType								DescMsgLen
#define CM_Std_ReturnType							Std_ReturnType
#define CM_RESP_OK									RTE_E_OK
#define CM_NULL										NULL
#define CM_SrlComHwPos_HwDeg_f32					Rte_AbsHwPos_HandwheelPosition_HwDeg_f32

/* No Error Response (Positive Codes) */
#define D_EPSNRCNOERROR_CNT_U8						kDescNrcNone

/* offsets for the data buffers for diag request/responses */
#define D_REQMSG_PID_OFFSET_CNT_U16			2U
#define D_REQMSG_RID_OFFSET_CNT_U16			3U
#define D_REQMSG_IOC_OFFSET_CNT_U16			3U
#define D_REQMSG_RESET_OFFSET_CNT_U16				0U
#define D_RESPMSG_OFFSET_CNT_U16					0U

/* Negative Response Codes */
#define D_EPSNRCNOTNEXTEERPROD_CNT_U08    D_EPSNRCSERVICENOTSUPPORTED_CNT_U16
#define D_EPSNRCSERVICEMISSING_CNT_U08    D_EPSNRCSERVICENOTSUPPORTED_CNT_U16

#define CM_GetCurrentDiagnosticMode(mode) (*mode = DescGetStateDiagnostic_Mode())
#define NVM_BLOCK_NXTRWIRSELECT		NVM_BLOCK_CMS_NXTRWIRSELECT
#define NVM_BLOCK_EPSDEFEATS		NVM_BLOCK_CMS_EPSDEFEATS
#define Rte_NvmBlock_Polarity_EOLCtrlPolarity	Rte_NvmBlock_Polarity_Polarity_Cnt_Str
/* Condition to enable services when cyber security is necessary */
#define CM_CyberSecNexteerLocked_Cnt_lgc (boolean) ((NxtrMEC_Uls_G_enum == ProductionMode) && \
                                                    (DescGetStateSecurity_Access() != kDescStateSecurity_AccessNexteer_Unlock))
/***********************************************************************************************************************
 * --- RTE GLOBAL DATA START ---
 *
 * This section is for variables that are external references to RTE variables. (Formally found in the RTE_GlobalData.h)
 **********************************************************************************************************************/

extern VAR(Float, RTE_VAR_INIT) Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
extern VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsDefVehSpd_Cnt_lgc;
extern VAR(boolean, RTE_SRLCOMINPUT_VAR) Rte_SrlComInput_VehicleSpeedValid_Cnt_lgc;
extern VAR(Float, RTE_VAR_INIT) Rte_Sa_DigHwTrqSENT_HwTorque_HwNm_f32;
extern VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_INIT) Rte_ModeMachine_StaMd_SystemState_Mode;
extern VAR(Float, RTE_VAR_INIT) Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32;
extern VAR(Float, RTE_VAR_INIT) Rte_Sa_DigMSB_CumMechMtrPosMRF_Deg_f32;
extern VAR(uint8, AUTOMATIC) NvMP_Rte_Sa_DigMSB_DigMSBEOLData[4102];
extern VAR(float32, RTE_VAR_INIT) Rte_Cd_Nhet1_DigHwTrqT1_HwNm_f32;
extern VAR(float32, RTE_VAR_INIT) Rte_Cd_Nhet1_DigHwTrqT2_HwNm_f32;
extern VAR(float32, AUTOMATIC) Rte_BatteryVoltage_Vecu_Volt_f32;
extern VAR(float32, AUTOMATIC) Rte_Ap_PwrLmtFuncCr_MRFMtrTrqCmd_MtrNm_f32;
extern VAR(float32, AUTOMATIC) Rte_Sa_MtrVel_MotorVelMRF_MtrRadpS_f32;
extern VAR(float32, AUTOMATIC) Rte_CtrlTemp_FiltMeasTemp_DegC_f32;
extern VAR(float32, AUTOMATIC) Rte_CDDInterface_ModIdxFinal_Uls_f32;
extern VAR(float32, AUTOMATIC) Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32;
extern VAR(float32, AUTOMATIC) Rte_SrlComInput_SrlComEngineSpeed_Rpm_f32;
extern VAR(float32, AUTOMATIC) Rte_CDDInterface_MtrCurrK1_Amp_f32;
extern VAR(float32, AUTOMATIC) Rte_CDDInterface_MtrCurrK2_Amp_f32;
extern VAR(float32, AUTOMATIC) Rte_CDDInterface_MtrCurrQax_Amp_f32;
extern VAR(float32, AUTOMATIC) Rte_CurrCmd_MtrCurrDaxRef_Amp_f32;
extern VAR(float32, AUTOMATIC) Rte_DigColPs_I2CHwAbsPos_HwDeg_f32;
extern VAR(float32, AUTOMATIC) Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32;
extern VAR(boolean, AUTOMATIC) Rte_CDDInterface_WIRMfgEnabled_Cnt_lgc;

/***********************************************************************************************************************
 * --- RTE GLOBAL DATA END ---
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * --- SERIAL COMM FUNCTION START ---
 *
 * This section is for functions that are external references to system functions. (Formally found in the SComm_Func.h)
 **********************************************************************************************************************/

/* 0x22 and 0x2E Services */
extern FUNC(void, RTE_AP_POLARITY_APPL_CODE) Polarity_SCom_ReadPolarity(P2VAR(UInt8, AUTOMATIC, RTE_AP_POLARITY_APPL_VAR) Polarity_Ptr_T_b08);
extern FUNC(void, RTE_SA_CMMTRCURR_APPL_CODE) CmMtrCurr_SCom_ReadMtrCurrCals(P2VAR(PhaseCurrCal_DataType, AUTOMATIC, RTE_SA_CMMTRCURR_APPL_VAR) ShCurrCalPtr);
extern FUNC(void, RTE_AP_DIAGMGR_APPL_CODE) DiagMgr_SCom_ReadStrgArray(void);
extern FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_SCom_ManualVehSpd(Float VehSpd_Kph_f32);
extern FUNC(void, RTE_AP_BATTERYVOLTAGE_APPL_CODE) BatteryVoltage_SCom_ReadTransOvData(P2VAR(UInt16, AUTOMATIC, RTE_AP_BATTERYVOLTAGE_APPL_VAR) OvervoltageCounter_Cnt_u16, P2VAR(Float, AUTOMATIC, RTE_AP_BATTERYVOLTAGE_APPL_VAR) MaxBattVoltage_Volts_f32);
extern FUNC(void, RTE_AP_TRQCMDSCL_APPL_CODE) TrqCmdScl_SCom_Get(P2VAR(Float, AUTOMATIC, RTE_AP_TRQCMDSCL_APPL_VAR) Par_f32);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_SetSelect(Boolean EnableFricLearning_Cnt_lgc, Boolean EnableOffsetOutput_Cnt_lgc, UInt8 OpMode_Uls_u08);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_GetSelect(P2VAR(Boolean, AUTOMATIC, RTE_AP_AVGFRICLRN_APPL_VAR) EnableFricLearning_Cnt_lgc, P2VAR(Boolean, AUTOMATIC, RTE_AP_AVGFRICLRN_APPL_VAR) EnableOffsetOutput_Cnt_lgc, P2VAR(UInt8, AUTOMATIC, RTE_AP_AVGFRICLRN_APPL_VAR) OpMode_Uls_u08);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_SetOffsetOutputDefeat(Boolean DefeatOffsetOutput_Cnt_lgc);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_GetOffsetOutputDefeat(P2VAR(Boolean, AUTOMATIC, RTE_AP_AVGFRICLRN_APPL_VAR) DefeatOffsetOutput_Cnt_lgc);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_SetEOLFric(Float EOLFric_HwNm_f32);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_GetEOLFric(P2VAR(Float, AUTOMATIC, RTE_AP_AVGFRICLRN_APPL_VAR) EOLFric_HwNm_f32);
extern FUNC(void, RTE_AP_TRQCANC_APPL_CODE) TrqCanc_Scom_ReadCogTrqCal(P2VAR(CoggingCancTrq, AUTOMATIC, RTE_AP_TRQCANC_APPL_VAR) CogTrqCalPtr, UInt16 ID);
extern FUNC(void, RTE_AP_ACTIVEPULL_APPL_CODE) ActivePull_SCom_SetSTComp(Float STComp_HwNm_f32);
extern FUNC(void, RTE_AP_ACTIVEPULL_APPL_CODE) ActivePull_SCom_ReadParam(P2VAR(Float, AUTOMATIC, RTE_AP_ACTIVEPULL_APPL_VAR) PullCompCmd_HwNm_f32, P2VAR(Float, AUTOMATIC, RTE_AP_ACTIVEPULL_APPL_VAR) STComp_HwNm_f32, P2VAR(Float, AUTOMATIC, RTE_AP_ACTIVEPULL_APPL_VAR) LTComp_HwNm_f32, P2VAR(Boolean, AUTOMATIC, RTE_AP_ACTIVEPULL_APPL_VAR) EnableLearn_Cnt_lgc);
extern FUNC(void, RTE_AP_CURRPARAMCOMP_APPL_CODE) SCom_EOLNomMtrParam_Get(P2VAR(Float, AUTOMATIC, RTE_AP_CURRPARAMCOMP_APPL_VAR) NomKe_VpRadpS_f32, P2VAR(Float, AUTOMATIC, RTE_AP_CURRPARAMCOMP_APPL_VAR) NomRmtr_Ohm_f32);
extern FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_WriteData(Float HwTrqTrim_HwNm_f32);

/* 0x31 Services */
extern FUNC(void, RTE_AP_ACTIVEPULL_APPL_CODE) ActivePull_SCom_SetLTComp(Float LTComp_HwNm_f32);
extern FUNC(void, RTE_AP_LRNEOT_APPL_CODE) LrnEOT_Scom_ResetEOT(void);
extern FUNC(void, RTE_AP_DIAGMGR_APPL_CODE) DiagMgr_SCom_ResetNTCStatus(void);
extern FUNC(void, RTE_AP_DIAGMGR_APPL_CODE) DiagMgr_SCom_ClearBlackBox(void);
extern FUNC(Dem_ReturnClearDTCType, DEM_CODE) Dem_ClearDTC( Dem_DTCType DTC, Dem_DTCKindType DTCKind, Dem_DTCOriginType DTCOrigin);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_InitLearnedTables(void);
extern FUNC(void, RTE_AP_AVGFRICLRN_APPL_CODE) AvgFricLrn_SCom_ResetToZero(void);
extern FUNC(void, RTE_AP_BATTERYVOLTAGE_APPL_CODE) BatteryVoltage_SCom_ClearTransOvData(void);
extern FUNC(void, RTE_AP_DIAGMGR_APPL_CODE) DiagMgr_SCom_GetNTCInfo(VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Param_Ptr_T_u08, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08, P2VAR(uint8, AUTOMATIC, AUTOMATIC) AgingCounter_Ptr_T_u08);
extern FUNC(void, RTE_SA_CMMTRCURR_APPL_CODE) CmMtrCurr_SCom_MtrCurrOffReadStatus(P2VAR(MtrCurrOffProcessFlag, AUTOMATIC, RTE_SA_CMMTRCURR_APPL_VAR) CurrOffStatus);
extern void Call_ProcessF0FF(P2VAR(uint8, AUTOMATIC, AUTOMATIC) t_SrvcData_Cnt_T_u08, VAR(uint16, AUTOMATIC) RequestDataIdx_Cnt_T_u16);

/* 0x2F services */
/* << DEFINE AND EXTERNALLY REFERENCED FUNCTIONS FOR TYPE 0x2F SERVICES HERE >> */

/* 0x11 Reset services */
extern FUNC(void, RTE_AP_STAMD_APPL_CODE) StaMd_SCom_EcuReset( void );

/* F00F */
extern VAR(Float, RTE_VAR_INIT) Rte_AbsHwPos_HandwheelPosition_HwDeg_f32;
extern FUNC(void, AUTOMATIC) NtWrapC_GeneratePosTraj_SCom_SetInputParam(Float PosServHwAngle_HwDeg_f32, Float TargetVelocity_HwDegpSec_f32, Float TargetAcceleration_HwDegpSecSqr_f32);
extern VAR(float32, AUTOMATIC) Rte_AbsHwPos_HandwheelAuthority_Uls_f32;
extern VAR(Boolean, AUTOMATIC) Rte_SrlComInput_VehicleSpeedValid_Cnt_lgc;

/* Defines for global services */
#define D_ALLDTC_MASK_CNT_U32 			0xFFFFFFU
#define CM_VehicleSpeed_Kph_f32			Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32
#define CM_DiagStsDefVehSpd_Cnt_lgc		Rte_DiagMgr_DiagStsDefVehSpd_Cnt_lgc
#define CM_VehicleSpeedValid_Cnt_lgc	Rte_SrlComInput_VehicleSpeedValid_Cnt_lgc
#define CM_HwTrq_HwNm_f32				Rte_Sa_DigHwTrqSENT_HwTorque_HwNm_f32
#define CM_k_TrimVehSpdLimit_Kph_f32    k_SrvcVehSpdLimit_Kph_f32
#define CM_k_TrimHwTrqLimit_HwNm_f32    k_SrvcHwTrqLimit_HwNm_f32
#define CM_RTE_MODE_StaMd_Mode_OPERATE	RTE_MODE_StaMd_Mode_OPERATE
/***********************************************************************************************************************
 * --- SERIAL COMM FUNCTION END ---
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * --- Common Manufacturing Services Selection ---
 *
 * This block of defines control which services are to be included for the program at the time of build. Unused or not
 * defined services should be set to D_DIAGSRVC_DISABLED.
 **********************************************************************************************************************/
/****************************** BEGIN CMS GENERATION - DO NOT CHANGE/REMOVE THIS COMMENT ******************************/
#define D_EPSDIAGSRVPID0000_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0001_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0002_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0003_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0004_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0005_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0006_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0007_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0008_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0009_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP000A_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP000B_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP000C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP000D_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP000E_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP000F_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0010_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0011_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0012_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0013_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0014_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0015_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0016_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0017_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0018_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0019_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP001A_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP001B_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP001C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP001D_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP001E_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP001F_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0020_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0021_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0022_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0023_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0024_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0025_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0026_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0027_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0028_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0029_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP002A_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP002B_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP002C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP002D_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP002E_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP002F_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0030_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0031_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0032_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0033_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0034_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0035_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0036_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0037_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0038_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0039_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP003A_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP003B_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP003C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP003D_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP003E_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP003F_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0040_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0041_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0042_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0043_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0044_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0045_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0046_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0047_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0048_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0049_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0050_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0051_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0052_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0053_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP00FF_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0100_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0101_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0102_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP0103_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0104_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0105_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0106_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0107_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0108_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP0109_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP010A_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP010B_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP010C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVXCP010D_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP010E_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVXCP010F_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRESET1160_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF000_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF001_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF002_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF003_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF004_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF005_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF006_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF007_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF008_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF009_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF00A_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF00B_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF00C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF00D_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF00E_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF00F_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDF010_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF011_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF012_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF013_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF014_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF015_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF016_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF018_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVRIDF0FF_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVRIDFCE0_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD01_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD02_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD03_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD04_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD05_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD06_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD07_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD08_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD09_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD0A_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD0B_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD0C_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVIOCFD0D_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD0E_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD0F_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD10_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVIOCFD11_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD12_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD13_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD14_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD15_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD16_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD17_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD18_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD19_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD1A_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD1B_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD1C_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD1D_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD1E_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD1F_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD20_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD21_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD22_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD23_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD24_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD25_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD26_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD27_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD28_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD29_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD30_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD31_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFD32_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD33_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFD41_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDA0_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDA1_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDA2_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDA3_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDA4_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDA5_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDA7_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDA8_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDA9_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDAC_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDAD_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDAE_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDAF_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB0_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB1_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB2_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB3_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB4_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB5_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB6_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB7_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFDB8_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDB9_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDBA_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDBB_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDBC_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDBD_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDBE_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDBF_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC0_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC1_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC2_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC3_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC4_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC5_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC6_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC7_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC8_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDC9_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDCA_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDCB_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDCC_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFDCD_CNT_ENUM	D_DIAGSRVC_DISABLED
#define D_EPSDIAGSRVPIDFEE0_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE1_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE2_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE3_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE4_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE5_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE6_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE7_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEE8_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEEA_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEEB_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEEC_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEED_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEEF_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEF1_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEF3_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEF4_CNT_ENUM	D_DIAGSRVC_ENABLED
#define D_EPSDIAGSRVPIDFEF5_CNT_ENUM	D_DIAGSRVC_ENABLED

/* -----[ Begin XCP Variables ]----- */
#define CM_ModeMachine_StaMd_SystemState_Mode    &Rte_ModeMachine_StaMd_SystemState_Mode
#define CM_BatteryVoltage_Vecu_Volts_f32         &Rte_BatteryVoltage_Vecu_Volt_f32
#define CM_ScaledMtrPos_HwDeg_M_f32              NULL_PTR
#define CM_MtrTrqLmt_MRFMtrTrqCmd_MtrNm_f32      &Rte_Ap_PwrLmtFuncCr_MRFMtrTrqCmd_MtrNm_f32
#define CM_MtrPos_MRFCumMtrPos_Deg_f32           &Rte_Sa_DigMSB_CumMechMtrPosMRF_Deg_f32
#define CM_MtrVel_MRFMtrVel_MtrRadpS_f32         &Rte_Sa_MtrVel_MotorVelMRF_MtrRadpS_f32
#define CM_VehicleSpeed_VehSpd_Kph_f32           &Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32
#define CM_k_TbarStiff_NmpDeg_F32                &k_CmnTbarStiff_NmpDeg_f32
#define CM_CtrlTemp_FiltMeasTemp_DegC_f32        &Rte_CtrlTemp_FiltMeasTemp_DegC_f32
#define CM_QaxCurrFiltSV_Amp_M_s11p20            NULL_PTR
#define CM_VltgCtrl_ModIdx_Uls_f32               &Rte_CDDInterface_ModIdxFinal_Uls_f32
#define CM_TemperatureADC_Volt_f32               &Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32
#define CM_MtrCurrMeas_Amp_f32                   &Rte_CurrCmd_MtrCurrDaxRef_Amp_f32
#define CM_SrlComEngineSpeed_Rpm_f32             &Rte_SrlComInput_SrlComEngineSpeed_Rpm_f32
#define CM_RawCurrFiltered1_Amp_f32              &Rte_CDDInterface_MtrCurrK1_Amp_f32
#define CM_RawCurrFiltered2_Amp_f32              &Rte_CDDInterface_MtrCurrK2_Amp_f32
#define CM_MtrCurrQax_Amp_f32                    &Rte_CDDInterface_MtrCurrQax_Amp_f32
#define CM_MtrCurrDax_Amp_f32                    &Rte_CurrCmd_MtrCurrDaxRef_Amp_f32
#define CM_DigColPs_VernDiagError_Deg_D_F32      NULL_PTR
#define CM_Rte_Cd_Nhet_DigHwTrqT1_HwNm_f32       &Rte_Cd_Nhet1_DigHwTrqT1_HwNm_f32
#define CM_Rte_Cd_Nhet_DigHwTrqT2_HwNm_f32       &Rte_Cd_Nhet1_DigHwTrqT2_HwNm_f32
#define CM_Rte_Sa_DigColPs_I2CHwAbsPos_HwDeg_f32 &Rte_DigColPs_I2CHwAbsPos_HwDeg_f32
#define CM_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32   &Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32
#define CM_Rte_DigMSB_DigMSBEOLData              NvMP_Rte_Sa_DigMSB_DigMSBEOLData
/* -----[ End XCP Variables ]----- */

#if (D_EPSDIAGSRVRESET1160_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_StaMd_SCom_EcuReset                  StaMd_SCom_EcuReset
#endif

#if (D_EPSDIAGSRVRIDF000_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_F000NMEC_CNT_LGC                      TRUE
	#define D_F000IGNCNTR_CNT_LGC                   TRUE
	#define D_F000LEARNEDEOT_CNT_LGC                TRUE
	#define D_F000ACTIVEPULLCOMP_CNT_LGC            TRUE
	#define D_F000NXTRDTCTBL_CNT_LGC                TRUE
	#define D_F000NXTRDTCBLACKBOX_CNT_LGC           TRUE
	#define D_F000CUSTDTCTBL_CNT_LGC                TRUE
	#define D_F000FRICTIONDETECTPARAM_CNT_LGC       TRUE
	#define D_F000INITLRNDTBLS_CNT_LGC              TRUE
	#define D_F000TRANSOVDATA_CNT_LGC               TRUE
	#define CM_Reset_LrnEOT_Scom_ResetEOT           LrnEOT_Scom_ResetEOT
	#define CM_Reset_ActivePull_SCom_SetLTComp      ActivePull_SCom_SetLTComp
	#define CM_Reset_ClearNTCs_SComm                DiagMgr_SCom_ResetNTCStatus
	#define CM_DiagMgr_SCom_ClearBlackBox           DiagMgr_SCom_ClearBlackBox
	#define CM_Reset_ClearCustDTCs_SComm            Dem_ClearDTC
	#define CM_AvgFricLrn_SCom_ResetToZero          AvgFricLrn_SCom_ResetToZero
	#define CM_AvgFricLrn_SCom_InitLearnedTables    AvgFricLrn_SCom_InitLearnedTables
	#define CM_BatteryVoltage_SCom_ClearTransOvData BatteryVoltage_SCom_ClearTransOvData
#endif

#if (D_EPSDIAGSRVRIDF001_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ClearNTCs_SComm                      DiagMgr_SCom_ResetNTCStatus
	#define CM_DiagMgr_SCom_ClearBlackBox           DiagMgr_SCom_ClearBlackBox
	#define CM_ClearCustDTCs_SComm                  Dem_ClearDTC
#endif

#if (D_EPSDIAGSRVRIDF002_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F002 */
#endif

#if (D_EPSDIAGSRVRIDF003_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_F003CLRTRIMNORET_CNT_LGC              TRUE
	#define CM_HwPos_SCom_ClrHwPosTrim              NtWrapC_DigColPs_SCom_NxtClrTrim
	#define CM_HwPos_SCom_SetHwPosTrim              NtWrapC_DigColPs_SCom_NxtSetTrim
	#define D_F003DISABLELRNTRIM_CNT_LGC            TRUE
#endif

#if (D_EPSDIAGSRVRIDF004_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_SENTBASEDSENSOR_CNT_LGC               TRUE
	#define CM_DigHwTrq_SCom_ClrHwTrqTrim           NtWrapC_DigHwTrqSENT_SCom_ClrTrqTrim
	#define CM_DigHwTrq_SCom_ClrHwTrqScale          DiagSrvNullFunc
	#define CM_DigHwTrq_SCom_SetHwTrqTrim           NtWrapC_DigHwTrqSENT_SCom_SetTrqTrim
#endif

#if (D_EPSDIAGSRVRIDF005_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_DiagMgr_SCom_GetNTCInfo              DiagMgr_SCom_GetNTCInfo
#endif

#if (D_EPSDIAGSRVRIDF006_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F006 */
#endif

#if (D_EPSDIAGSRVRIDF007_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F007 */
#endif

#if (D_EPSDIAGSRVRIDF008_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_CmMtrCurr_SCom_CalGain               NtWrapC_CmMtrCurr_SCom_CalGain
#endif

#if (D_EPSDIAGSRVRIDF009_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_CmMtrCurr_SCom_MtrCurrOffReadStatus  CmMtrCurr_SCom_MtrCurrOffReadStatus
	#define CM_CmMtrCurr_SCom_CalOffset             NtWrapC_CmMtrCurr_SCom_CalOffset
	#define MtrCurrOffProcessFlag                   MtrCurrOffProcessFlag
	#define D_RIDF009SVCDFTBITSSET_CNT_U16          0x301
	#define D_RIDF009SVCDFTBITSCLR_CNT_U16          (~D_RIDF009SVCDFTBITSSET_CNT_U16)
#endif

#if (D_EPSDIAGSRVRIDF00A_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F00A */
#endif

#if (D_EPSDIAGSRVRIDF00B_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F00B */
#endif

#if (D_EPSDIAGSRVRIDF00C_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F00C */
#endif

#if (D_EPSDIAGSRVRIDF00D_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F00D */
#endif

#if (D_EPSDIAGSRVRIDF00E_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_RIDF00ESVCDFTBITSSET_CNT_U16          0x301
#endif

#if (D_EPSDIAGSRVRIDF00F_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_k_SComTrqPosPol_Cnt_s08              k_SComTrqPosPol_Cnt_s08
	#define CM_Rte_AbsHwPos_SrlComHwPos_HwDeg_f32   Rte_AbsHwPos_HandwheelPosition_HwDeg_f32
	#define CM_HandwheelAuthority_Uls_f32           Rte_AbsHwPos_HandwheelAuthority_Uls_f32
	#define CM_VehSpdValid_Cnt_lgc                  Rte_SrlComInput_VehicleSpeedValid_Cnt_lgc
	#define CM_GenPosTraj_SCom_SetInputParam        NtWrapC_GeneratePosTraj_SCom_SetInputParam
#endif

#if (D_EPSDIAGSRVRIDF010_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F010 */
#endif

#if (D_EPSDIAGSRVRIDF011_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F011 */
#endif

#if (D_EPSDIAGSRVRIDF012_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F012 */
#endif

#if (D_EPSDIAGSRVRIDF013_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F013 */
#endif

#if (D_EPSDIAGSRVRIDF014_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F014 */
#endif

#if (D_EPSDIAGSRVRIDF015_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F015 */
#endif

#if (D_EPSDIAGSRVRIDF016_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F016 */
#endif

#if (D_EPSDIAGSRVRIDF018_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: F018 */
#endif

#if (D_EPSDIAGSRVRIDF0FF_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_EnableTestMode_Cnt_lgc               EnableTestMode_Cnt_lgc
	#define CM_ProcessF0FF                          Call_ProcessF0FF
	#define CM_WdgM_CheckpointReached               WdgM_CheckpointReached
	#define CM_DisableSysTickInterrupt              DisableSysTickInterrupt
	#define CM_EnableSysTickInterrupt               EnableSysTickInterrupt
	#define CM_GetAlarm                             GetAlarm
	#define CM_CancelAlarm                          CancelAlarm
	#define CM_SetRelAlarm                          SetRelAlarm
#endif

#if (D_EPSDIAGSRVRIDFCE0_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to RID: FCE0 */
#endif

#if (D_EPSDIAGSRVPIDFD01_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_SwRelNum_Cnt_u08                     k_SWRelNum_Cnt_u8
	#define CM_CalRelNums_Cnt_u08                   k_CalRelNum_Cnt_u8, k_Cal2RelNum_Cnt_u8
	#define CM_BootRelNum_Cnt_u08                   Lnk_BootRelNum_Addr
	#define D_NUMCALSECTIONS_CNT_U08                2
	#define D_MAXCALREVLENGTH_CNT_U08               12
#endif

#if (D_EPSDIAGSRVPIDFD02_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_SrlComSvcDft_Cnt_b32                 CDD_EOLSrlComSvcDft_Cnt_G_b32
#endif

#if (D_EPSDIAGSRVPIDFD03_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD03 */
#endif

#if (D_EPSDIAGSRVPIDFD04_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_MtrPosCal_DataType                   MtrPosCal_DataType
	#define D_HARTBLSIZE_CNT_U16                    144
#endif

#if (D_EPSDIAGSRVPIDFD05_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD05 */
#endif

#if (D_EPSDIAGSRVPIDFD06_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD06 */
#endif

#if (D_EPSDIAGSRVPIDFD07_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_FD07_USE8BITPOLARITY_CNT_LGC          TRUE
	#define CM_Polarity_SCom_SetPolarity            NtWrapC_Polarity_SCom_SetPolarity
	#define CM_Polarity_SCom_ReadPolarity           Polarity_SCom_ReadPolarity
#endif

#if (D_EPSDIAGSRVPIDFD08_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD08 */
#endif

#if (D_EPSDIAGSRVPIDFD09_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD09 */
#endif

#if (D_EPSDIAGSRVPIDFD0A_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD0A */
#endif

#if (D_EPSDIAGSRVPIDFD0B_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_WIRSel_Cnt_u16                       CDD_EOLNxtrWIRSelect_Cnt_G_u16
#endif

#if (D_EPSDIAGSRVPIDFD0C_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_PIDFD0CIGNORELPARAM_CNT_LGC           TRUE
#endif

#if (D_EPSDIAGSRVIOCFD0D_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_MtrTrqLmt_SCom_ManualTrqCmd          NtWrapC_AssistLmtFunc_Scom_ManualTrqCmd
#endif

#if (D_EPSDIAGSRVPIDFD0E_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_MtrTrqCmd_MtrNm_f32                  Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32
	#define CM_CumMtrPos_Deg_f32                    Rte_Sa_DigMSB_CumMechMtrPosMRF_Deg_f32
#endif

#if (D_EPSDIAGSRVPIDFD0F_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD0F */
#endif

#if (D_EPSDIAGSRVPIDFD10_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD10 */
#endif

#if (D_EPSDIAGSRVIOCFD11_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_DFTASSTTBL_CNT_LGC                   CDD_DftAsstTbl_Cnt_G_lgc
	#define CM_DWNLDASSTGAIN_ULS_F32                CDD_DwnldAsstGain_Uls_G_f32
#endif

#if (D_EPSDIAGSRVPIDFD12_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_PhaseCurrCal_DataType                PhaseCurrCal_DataType
	#define CM_CmMtrCurr_SCom_SetMtrCurrCals        NtWrapC_CmMtrCurr_SCom_SetMtrCurrCals
	#define CM_CmMtrCurr_SCom_ReadMtrCurrCals       CmMtrCurr_SCom_ReadMtrCurrCals
#endif

#if (D_EPSDIAGSRVPIDFD13_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_DiagMgr_SCom_ReadStrgArray           DiagMgr_SCom_ReadStrgArray
	#define CM_DTCMaxStorage_Cnt_u16                D_MAXDTCSTORAGE_CNT_U16
	#define CM_NTCStrgArray_Type                    NTCStrgArray
	#define CM_DiagMgr_SCom_GetNTCInfo              DiagMgr_SCom_GetNTCInfo
#endif

#if (D_EPSDIAGSRVPIDFD14_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD14 */
#endif

#if (D_EPSDIAGSRVPIDFD15_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_HwTrqTrim_Datatype                   CM_HwTrqTrim_Datatype
#endif

#if (D_EPSDIAGSRVPIDFD16_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD16 */
#endif

#if (D_EPSDIAGSRVPIDFD17_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD17 */
#endif

#if (D_EPSDIAGSRVPIDFD18_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD18 */
#endif

#if (D_EPSDIAGSRVPIDFD19_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_NxtrMEC_Cnt_G_u8                     Nvm_NMEC_Cnt_u8
#endif

#if (D_EPSDIAGSRVPIDFD1A_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_Rte_ModeType_StaMd_Mode              Rte_ModeType_StaMd_Mode
	#define CM_SystemState_Cnt_enum                 Rte_ModeMachine_StaMd_SystemState_Mode
#endif

#if (D_EPSDIAGSRVPIDFD1B_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ManualVehSpd_SCom                    SrlComInput_SCom_ManualVehSpd
	#define D_FD1BFREEZEONMEC_CNT_LGC               TRUE
#endif

#if (D_EPSDIAGSRVPIDFD1C_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD1C */
#endif

#if (D_EPSDIAGSRVPIDFD1D_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD1D */
#endif

#if (D_EPSDIAGSRVPIDFD1E_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_MfgDiagInhibit_Cnt_lgc               MfgDiagInhibit_Uls_G_lgc
#endif

#if (D_EPSDIAGSRVPIDFD1F_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD1F */
#endif

#if (D_EPSDIAGSRVPIDFD20_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_BatteryVoltage_SCom_ReadTransOvData  BatteryVoltage_SCom_ReadTransOvData
#endif

#if (D_EPSDIAGSRVPIDFD21_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_TUNINGSETMAXLIM_CNT_U08               1
#endif

#if (D_EPSDIAGSRVPIDFD22_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_TcPartNumType                        TcPartNumType
	#define D_PIDFD22STRLEN_CNT_U08                 D_TcPNArraySize_Cnt_U16
#endif

#if (D_EPSDIAGSRVPIDFD23_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_Vsm_OperatingModeType                Vsm_OperatingModeType
#endif

#if (D_EPSDIAGSRVPIDFD24_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_EOLTurnsCntrCals_Datatype            EOLTurnsCntrCals_Datatype
#endif

#if (D_EPSDIAGSRVPIDFD25_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_TrqCmdScl_SCom_Set                   NtWrapC_TrqCmdScl_SCom_Set
	#define CM_TrqCmdScl_SCom_Get                   TrqCmdScl_SCom_Get
#endif

#if (D_EPSDIAGSRVPIDFD26_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_AvgFricLrn_SCom_SetSelect            AvgFricLrn_SCom_SetSelect
	#define CM_AvgFricLrn_SCom_GetSelect            AvgFricLrn_SCom_GetSelect
#endif

#if (D_EPSDIAGSRVPIDFD27_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_AvgFricLrn_SCom_SetOffsetOutputDefeat AvgFricLrn_SCom_SetOffsetOutputDefeat
	#define CM_AvgFricLrn_SCom_GetOffsetOutputDefeat AvgFricLrn_SCom_GetOffsetOutputDefeat
#endif

#if (D_EPSDIAGSRVPIDFD28_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD28 */
#endif

#if (D_EPSDIAGSRVPIDFD29_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_AvgFricLrn_SCom_SetEOLFric           AvgFricLrn_SCom_SetEOLFric
	#define CM_AvgFricLrn_SCom_GetEOLFric           AvgFricLrn_SCom_GetEOLFric
#endif

#if (D_EPSDIAGSRVPIDFD30_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_DigHwTrqSENT_SCom_ReadTrim           DigHwTrqSENT_SCom_TrimData
	#define CM_DigHwTrqSENT_SCom_WriteTrim          NtWrapC_DigHwTrqSENT_SCom_WriteData
#endif

#if (D_EPSDIAGSRVPIDFD31_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_Rte_Sa_DigHwTrqSENT_HwTorque_HwNm_f32 Rte_Sa_DigHwTrqSENT_HwTorque_HwNm_f32
	#define CM_Rte_Cd_Nhet1_DigHwTrqT1_HwNm_f32     Rte_Cd_Nhet1_DigHwTrqT1_HwNm_f32
	#define CM_Rte_Cd_Nhet1_DigHwTrqT2_HwNm_f32     Rte_Cd_Nhet1_DigHwTrqT2_HwNm_f32
#endif

#if (D_EPSDIAGSRVPIDFD32_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD32 */
#endif

#if (D_EPSDIAGSRVPIDFD33_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD33 */
#endif

#if (D_EPSDIAGSRVPIDFD41_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FD41 */
#endif

#if (D_EPSDIAGSRVPIDFDA0_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDA0 */
#endif

#if (D_EPSDIAGSRVPIDFDA1_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ECUSerialNumber                      Nvm_EcuSrlNum_Cnt_u8
#endif

#if (D_EPSDIAGSRVPIDFDA2_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_EPSSerialNumber                      Nvm_EpsSrlNum_Cnt_u8
#endif

#if (D_EPSDIAGSRVPIDFDA3_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ECUHardwarePN                        Nvm_EcuHwPn_Cnt_u8
#endif

#if (D_EPSDIAGSRVPIDFDA4_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDA4 */
#endif

#if (D_EPSDIAGSRVPIDFDA5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ShCurrCal_DataType                   ShCurrCal_DataType
#endif

#if (D_EPSDIAGSRVPIDFDA7_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_HwPosRelCal_DataType                 HwPosRelCal_DataType
#endif

#if (D_EPSDIAGSRVPIDFDA8_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDA8 */
#endif

#if (D_EPSDIAGSRVPIDFDA9_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDA9 */
#endif

#if (D_EPSDIAGSRVPIDFDAC_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_MfgScratchPad_Cnt_G_u8               Nvm_NxtrManfScrpd_Cnt_u8
#endif

#if (D_EPSDIAGSRVPIDFDAD_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ActivePull_SCom_ReadParam            ActivePull_SCom_ReadParam
#endif

#if (D_EPSDIAGSRVPIDFDAE_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDAE */
#endif

#if (D_EPSDIAGSRVPIDFDAF_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDAF */
#endif

#if (D_EPSDIAGSRVPIDFDB0_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_IPMCoggingCancTrq                    CoggingCancTrq
	#define CM_IPMTrqCanc_Scom_SetCogTrqCal         NtWrapC_TrqCanc_Scom_SetCogTrqCal
	#define CM_IPMTrqCanc_Scom_ReadCogTrqCal        TrqCanc_Scom_ReadCogTrqCal
#endif

#if (D_EPSDIAGSRVPIDFDB1_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDB1 */
#endif

#if (D_EPSDIAGSRVPIDFDB2_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDB2 */
#endif

#if (D_EPSDIAGSRVPIDFDB3_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDB3 */
#endif

#if (D_EPSDIAGSRVPIDFDB4_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define D_RANDKESUPPORTONLY_CNT_LGC             TRUE
	#define CM_SCom_EOLNomMtrParam_Set_FDB4         NtWrapC_SCom_EOLNomMtrParam_Set
	#define CM_SCom_EOLNomMtrParam_Get_FDB4         SCom_EOLNomMtrParam_Get
#endif

#if (D_EPSDIAGSRVPIDFDB5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ActivePull_SCom_SetSTComp            ActivePull_SCom_SetSTComp
#endif

#if (D_EPSDIAGSRVPIDFDB6_CNT_ENUM == D_DIAGSRVC_ENABLED)
	#define CM_ActivePull_SCom_SetLTComp            ActivePull_SCom_SetLTComp
#endif

#if (D_EPSDIAGSRVPIDFDB7_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDB7 */
#endif

#if (D_EPSDIAGSRVPIDFDB8_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDB8 */
#endif

#if (D_EPSDIAGSRVPIDFDB9_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDB9 */
#endif

#if (D_EPSDIAGSRVPIDFDBA_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDBA */
#endif

#if (D_EPSDIAGSRVPIDFDBB_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDBB */
#endif

#if (D_EPSDIAGSRVPIDFDBC_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDBC */
#endif

#if (D_EPSDIAGSRVPIDFDBD_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDBD */
#endif

#if (D_EPSDIAGSRVPIDFDBE_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDBE */
#endif

#if (D_EPSDIAGSRVPIDFDBF_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDBF */
#endif

#if (D_EPSDIAGSRVPIDFDC0_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC0 */
#endif

#if (D_EPSDIAGSRVPIDFDC1_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC1 */
#endif

#if (D_EPSDIAGSRVPIDFDC2_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC2 */
#endif

#if (D_EPSDIAGSRVPIDFDC3_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC3 */
#endif

#if (D_EPSDIAGSRVPIDFDC4_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC4 */
#endif

#if (D_EPSDIAGSRVPIDFDC5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC5 */
#endif

#if (D_EPSDIAGSRVPIDFDC6_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC6 */
#endif

#if (D_EPSDIAGSRVPIDFDC7_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC7 */
#endif

#if (D_EPSDIAGSRVPIDFDC8_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC8 */
#endif

#if (D_EPSDIAGSRVPIDFDC9_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDC9 */
#endif

#if (D_EPSDIAGSRVPIDFDCA_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDCA */
#endif

#if (D_EPSDIAGSRVPIDFDCB_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDCB */
#endif

#if (D_EPSDIAGSRVPIDFDCC_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDCC */
#endif

#if (D_EPSDIAGSRVPIDFDCD_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FDCD */
#endif

#if (D_EPSDIAGSRVPIDFEE0_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE0 */
#endif

#if (D_EPSDIAGSRVPIDFEE1_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE1 */
#endif

#if (D_EPSDIAGSRVPIDFEE2_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE2 */
#endif

#if (D_EPSDIAGSRVPIDFEE3_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE3 */
#endif

#if (D_EPSDIAGSRVPIDFEE4_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE4 */
#endif

#if (D_EPSDIAGSRVPIDFEE5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE5 */
#endif

#if (D_EPSDIAGSRVPIDFEE6_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE6 */
#endif

#if (D_EPSDIAGSRVPIDFEE7_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE7 */
#endif

#if (D_EPSDIAGSRVPIDFEE8_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEE8 */
#endif

#if (D_EPSDIAGSRVPIDFEEA_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEEA */
#endif

#if (D_EPSDIAGSRVPIDFEEB_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEEB */
#endif

#if (D_EPSDIAGSRVPIDFEEC_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEEC */
#endif

#if (D_EPSDIAGSRVPIDFEED_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEED */
#endif

#if (D_EPSDIAGSRVPIDFEEF_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEEF */
#endif

#if (D_EPSDIAGSRVPIDFEF1_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEF1 */
#endif

#if (D_EPSDIAGSRVPIDFEF3_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEF3 */
#endif

#if (D_EPSDIAGSRVPIDFEF4_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEF4 */
#endif

#if (D_EPSDIAGSRVPIDFEF5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	/* Defines specific to PID: FEF5 */
#endif

/******************************* END CMS GENERATION - DO NOT CHANGE/REMOVE THIS COMMENT *******************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom define area >>                     DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

#endif /* EPS_DIAGSRVCS_ISO_INTERFACE_H */
