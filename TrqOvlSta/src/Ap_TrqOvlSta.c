/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Ap_TrqOvlSta.c
 *     Workspace:  C:/Sankar/Synergy/Working/TrqOvlSta-pznywf/TrqOvlSta/autosar
 *     SW-C Type:  Ap_TrqOvlSta
 *  Generated at:  Thu Mar 19 15:27:59 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  C-Code implementation template for SW-C <Ap_TrqOvlSta>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
 * Copyright 2014 Nexteer
 * Nexteer Confidential
 *
 * Module File Name: Ap_TrqOvlSta.c
 * Module Description: Implementation of CF09
 * Project           : CBD
 * Author            : Selva Sengottaiyan
*****************************************************************************
 * Version Control:
 * Date Created:      Thu Jan 15 14:23:51 2014
 * %version:          9 %
 * %derived_by:       pznywf %
 * %date_modified:    Wed Feb 26 17:51:22 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 01/20/14  1        Selva       Initial version                                                            10959
 * 02/26/14  2        BWL         Remove Type H memory per A6287. Since the FDD has not been updated the     11517
 *                                    change was performed under A6405. 
 * 04/21/14  3        Selva       A6475 fixed. Added absolute value in HwTrqFilt_HwNm_T_f32                  11746
 *								  Corrected the output TrqOscFreq_Hz_f32				
 * 07/16/14  4        SB        Implemented CF-09 GM Torque Overlay State Handler v002						 12181
 * 08/06/14	 5		  SB		Removed Per Instance Memory data											 12248
 * 10/15/14	 6,7	  SB		Implemented CF-09 GM Torque Overlay State Handler v003						 12540
 * 01/20/15  8		  KK		A7535 fixed 																 12777
 * 02/20/15  9        SV		Implemented CF-09 GM Torque Overlay State Handler v004						 EA3#448
 */              

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Operation Prototypes:
 =====================
  DtrmnElapsedTime_mS_u16 of Port Interface SystemTime
    Nexteer SystemTime Service


 Mode Declaration Groups:
 ========================
  StaMd_Mode
    EPS System State mode declaration

 *********************************************************************************************************************/

#include "Rte_Ap_TrqOvlSta.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Ap_TrqOvlSta_Cfg.h"
#include "CalConstants.h"
#include "GlobalMacro.h"
#include "filters.h"
#include "Interpolation.h"
#include "GlobalMacro.h"
#include "fixmath.h"
#include <float.h>

/* PRQA S 3218 EOF
* MISRA-C:2004 Rule 8.7: Deviation required for the display variables and filter constants because of memory map */

/* MISRA-C:2004 Rule 19.1: Deviation required for the AUTOSAR Compliance */

#define TRQOVLSTA_START_SEC_VAR_CLEARED_8
#include "MemMap.h" /* PRQA S 5087 */
STATIC  VAR(uint8, AUTOMATIC)   TrqOvlSta_LKAPermFault_Cnt_M_u08;

#define TRQOVLSTA_STOP_SEC_VAR_CLEARED_8
#include "MemMap.h" /* PRQA S 5087 */

#define TRQOVLSTA_START_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h" /* PRQA S 5087 */
STATIC	VAR(boolean, AUTOMATIC)   TrqOvlSta_LKAPermFault_Cnt_M_lgc;
STATIC	VAR(boolean, AUTOMATIC) 	 TrqOvlSta_LKAFault_Cnt_M_lgc;
STATIC volatile	VAR(boolean, AUTOMATIC) 	TrqOvlSta_StandstillTime_Cnt_D_lgc;
STATIC volatile VAR(boolean, AUTOMATIC) 	TrqOvlSta_ShiftLevRevTime_Cnt_D_lgc;
STATIC	VAR(boolean, AUTOMATIC) 	TrqOvlSta_ReadytoPulse_Cnt_M_lgc;
#define TRQOVLSTA_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h" /* PRQA S 5087 */

#define TRQOVLSTA_START_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */
STATIC	VAR(float32, AUTOMATIC)   TrqOvlSta_Haptictime_Sec_M_f32;
STATIC	VAR(float32, AUTOMATIC)   TrqOvlSta_ElapsedShiftLevRevTime_Sec_M_f32;
STATIC	VAR(float32, AUTOMATIC)   TrqOvlSta_ElapsedAPAMaxHwTrqTime_Sec_M_f32;
STATIC	VAR(float32, AUTOMATIC)   TrqOvlSta_ElapsedStandstillTime_Sec_M_f32;
STATIC	VAR(float32, AUTOMATIC)   TrqOvlSta_PosSrvoHwAngle_HwDeg_M_f32;
#define TRQOVLSTA_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */

#define TRQOVLSTA_START_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */
STATIC	VAR(uint16, AUTOMATIC)   TrqOvlSta_Hapticdur_Cnt_M_u16;

#define TRQOVLSTA_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */

#define TRQOVLSTA_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
STATIC	VAR(LPF32KSV_Str, AUTOMATIC)   		TrqOvlSta_HwTorqueSV_HwNm_M_Str;
STATIC	VAR(APA_State_enum, AUTOMATIC) 		TrqOvlSta_APAState_State_M_enum;
STATIC	VAR(Haptic_State_enum, AUTOMATIC) 	TrqOvlSta_HapticState_State_M_enum;	/* REQ: CF09 #146 I : Default state is 'Inactive'. Defined in RTE */
STATIC	VAR(LKA_State_enum, AUTOMATIC) 		TrqOvlSta_LKAState_State_M_enum;	/* REQ: CF09 #129 I : Default state is 'Inactive'. Defined in RTE */
STATIC	VAR(ESC_State_enum, AUTOMATIC) 		TrqOvlSta_ESCState_State_M_enum;    /* REQ: CF09 #130 I : Default state is 'Inactive'. Defined in RTE */
#define TRQOVLSTA_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */




/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean (standard type)
 * Float: Real in interval ]-FLT_MAX...FLT_MAX[ with single precision (standard type)
 * UInt16: Integer in interval [0...65535] (standard type)
 * UInt32: Integer in interval [0...4294967295] (standard type)
 *
 * Enumeration Types:
 * ==================
 * APA_State_enum: Enumeration of integer in interval [0...4] with enumerators
 *   APA_TempInhibit (0u)
 *   APA_AvailCntrl (1u)
 *   APA_Active (2u)
 *   APA_PermanentlyFailed (3u)
 *   APA_ManufacturingDisable (4u)
 * ESC_State_enum: Enumeration of integer in interval [0...4] with enumerators
 *   ESC_Inactive (0u)
 *   ESC_Active (1u)
 *   ESC_TemporarilyLimited (2u)
 *   ESC_PermanentlyFailed (3u)
 *   ESC_ManufacturingDisable (4u)
 * FltInjectionLocType: Enumeration of integer in interval [0...255] with enumerators
 *   FLTINJ_ASSIST (1u)
 *   FLTINJ_RETURN (2u)
 *   FLTINJ_DAMPING (3u)
 *   FLTINJ_ASSTSUMNLMT (4u)
 *   FLTINJ_AVGFRICLRN (7u)
 *   FLTINJ_VECU_BATTERYVOLTAGE (8u)
 *   FLTINJ_HYSTCOMP (12u)
 *   FLTINJ_INERTIACOMP (14u)
 *   FLTINJ_EOTDAMPING_ETDMPFW (27u)
 *   FLTINJ_STABILITYCOMP (29u)
 *   FLTINJ_TRQBASEDINRTCOMP (30u)
 *   FLTINJ_SRLCOMVEHSPD_SGNLCOND (33u)
 *   FLTINJ_ASSTFIREWALL (34u)
 *   FLTINJ_ASSTEOTGAIN_LMTCOD (38u)
 *   FLTINJ_DIGHWTRQSENT_T1FAULT (41u)
 *   FLTINJ_DIGHWTRQSENT_T2FAULT (42u)
 *   FLTINJ_TRQOVLSTA_LKAFAULT (91u)
 *   FLTINJ_TRQARBLIM_LKACMD (101u)
 *   FLTINJ_DDASTFACTRQST_DRVDYNCTRL (150u)
 *   FLTINJ_DDDMPFACTRQST_DRVDYNCTRL (151u)
 *   FLTINJ_DDRTNFACTRQST_DRVDYNCTRL (152u)
 *   FLTINJ_OUTPUTRAMPMULT_LMTCOD (153u)
 *   FLTINJ_ASSTEOTLIMIT_LMTCOD (154u)
 *   FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND (155u)
 *   FLTINJ_ANAHWTORQUE (156u)
 *   FLTINJ_MTRVEL (160u)
 *   FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD (200u)
 *   FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR (201u)
 * Haptic_State_enum: Enumeration of integer in interval [0...2] with enumerators
 *   Haptic_Inactive (0u)
 *   Haptic_Active (1u)
 *   Haptic_Waiting (2u)
 * LKA_State_enum: Enumeration of integer in interval [0...4] with enumerators
 *   LKA_Inactive (0u)
 *   LKA_Active (1u)
 *   LKA_TemporarilyLimited (2u)
 *   LKA_PermanentlyFailed (3u)
 *   LKA_ManufacturingDisable (4u)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Defined Constants
 *
 **********************************************************************************************************************
 *
 * Primitive Type Constants:
 * =========================
 * Boolean: D_FALSE_CNT_LGC = FALSE
 * Float: D_2MS_SEC_F32 = 0.002
 * Float: D_ZERO_ULS_F32 = 0
 *
 *********************************************************************************************************************/


#define RTE_START_SEC_AP_TRQOVLSTA_APPL_CODE
#include "MemMap.h"  /* PRQA S 5087 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqOvlSta_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TRQOVLSTA_APPL_CODE) TrqOvlSta_Init(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TrqOvlSta_Init
 *********************************************************************************************************************/
	


	LPF_Init_f32_m(D_ZERO_ULS_F32, k_APAHwTrqLPFKn_Hz_f32, (float32)D_2MS_SEC_F32, &TrqOvlSta_HwTorqueSV_HwNm_M_Str);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqOvlSta_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *     and not in Mode(s) <OFF, DISABLE, WARMINIT>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Boolean Rte_IRead_TrqOvlSta_Per1_APANonRecoverableFaults_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_APARecoverableFaults_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_APARequest_Cnt_lgc(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_CCWPosition_HwDeg_f32(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_CWPosition_HwDeg_f32(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_ESCFault_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_ESCIsLimited_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_ESCRequest_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_GMOSH_APAMfgEnable_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_GMOSH_ESCMfgEnable_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_GMOSH_LKAMfgEnable_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_HapticRequest_Cnt_lgc(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_HwTorque_HwNm_f32(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_LKAFault_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_LKAInhibit_Cnt_lgc(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_LKARequest_Cnt_lgc(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_MaxSecureVehicleSpeed_Kph_f32(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_MinSecureVehicleSpeed_Kph_f32(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_PosTrajEnable_Cnt_lgc(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_PosTrajHwAngle_HwDeg_f32(void)
 *   Float Rte_IRead_TrqOvlSta_Per1_SWARTrgtAngRequest_HwDeg_f32(void)
 *   Boolean Rte_IRead_TrqOvlSta_Per1_ShiftLeverIsInReverse_Cnt_lgc(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_APAState_State_enum(APA_State_enum data)
 *   APA_State_enum *Rte_IWriteRef_TrqOvlSta_Per1_APAState_State_enum(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_ESCState_State_enum(ESC_State_enum data)
 *   ESC_State_enum *Rte_IWriteRef_TrqOvlSta_Per1_ESCState_State_enum(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_GMOSHOscillateState_State_enum(Haptic_State_enum data)
 *   Haptic_State_enum *Rte_IWriteRef_TrqOvlSta_Per1_GMOSHOscillateState_State_enum(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_LKAState_State_enum(LKA_State_enum data)
 *   LKA_State_enum *Rte_IWriteRef_TrqOvlSta_Per1_LKAState_State_enum(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_PosServEnable_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TrqOvlSta_Per1_PosServEnable_Cnt_lgc(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32(Float data)
 *   Float *Rte_IWriteRef_TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc(void)
 *   void Rte_IWrite_TrqOvlSta_Per1_TrqOscFreq_Hz_f32(Float data)
 *   Float *Rte_IWriteRef_TrqOvlSta_Per1_TrqOscFreq_Hz_f32(void)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TRQOVLSTA_APPL_CODE) TrqOvlSta_Per1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TrqOvlSta_Per1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) MaxSecureVehicleSpeed_Kph_T_f32;
	VAR(float32, AUTOMATIC) MinSecureVehicleSpeed_Kph_T_f32;
	VAR(boolean, AUTOMATIC) APARequest_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) APARecoverableFaults_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) APANonRecoverableFaults_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) HapticRequest_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) ShiftLeverIsInReverse_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) HwTorque_HwNm_T_f32;
	VAR(boolean, AUTOMATIC) LKARequest_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) LKAFault_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) LKAInhibit_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) ESCRequest_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) ESCFault_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) ESCIsLimited_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) PosTrajHwAngle_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) SWARTrgtAng_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) SWARTrgtAngRequest_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) PosTrajEnable_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) CWPosition_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) CCWPosition_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) GMOSH_APAMfgEnable_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) GMOSH_LKAMfgEnable_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) GMOSH_ESCMfgEnable_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) HwTrqFilt_HwNm_T_f32;
	VAR(boolean, AUTOMATIC) ShiftLevRevTime_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) StandstillTime_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) HapticReqDurExceeded_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) APAIntervention_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) TrqOscEnable_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) PosEnable_Cnt_T_lgc;

#if (STD_ON == BC_TRQOVLSTA_FAULTINJECTIONPOINT)
	VAR(float32, AUTOMATIC) LKARequest_Cnt_T_f32;
#endif

	(void)Rte_Call_TrqOvlSta_Per1_CP0_CheckpointReached();
	/*** Read the inputs***/
	
	MaxSecureVehicleSpeed_Kph_T_f32	=	Rte_IRead_TrqOvlSta_Per1_MaxSecureVehicleSpeed_Kph_f32();/* REQ: CF09 #41 I */
	MinSecureVehicleSpeed_Kph_T_f32	=	Rte_IRead_TrqOvlSta_Per1_MinSecureVehicleSpeed_Kph_f32();/* REQ: CF09 #27 I */
	APARequest_Cnt_T_lgc			=	Rte_IRead_TrqOvlSta_Per1_APARequest_Cnt_lgc( );			/* REQ: CF09 #42 I */
	APANonRecoverableFaults_Cnt_T_lgc	= 	Rte_IRead_TrqOvlSta_Per1_APANonRecoverableFaults_Cnt_lgc( );/* REQ: CF09 #47 I */
	APARecoverableFaults_Cnt_T_lgc	= 	Rte_IRead_TrqOvlSta_Per1_APARecoverableFaults_Cnt_lgc( );		/* REQ: CF09 #46 I */
	HapticRequest_Cnt_T_lgc			= 	Rte_IRead_TrqOvlSta_Per1_HapticRequest_Cnt_lgc( );		/* REQ: CF09 #43 I */
	ShiftLeverIsInReverse_Cnt_T_lgc = 	Rte_IRead_TrqOvlSta_Per1_ShiftLeverIsInReverse_Cnt_lgc( );/* REQ: CF09 #44 I */
	HwTorque_HwNm_T_f32             = 	Rte_IRead_TrqOvlSta_Per1_HwTorque_HwNm_f32( );			/* REQ: CF09 #45 I */
	LKAFault_Cnt_T_lgc              = 	Rte_IRead_TrqOvlSta_Per1_LKAFault_Cnt_lgc( );			/* REQ: CF09 #49 I */
	LKAInhibit_Cnt_T_lgc            = 	Rte_IRead_TrqOvlSta_Per1_LKAInhibit_Cnt_lgc( );			/* REQ: CF09 #50 I */
	ESCRequest_Cnt_T_lgc            = 	Rte_IRead_TrqOvlSta_Per1_ESCRequest_Cnt_lgc( );			/* REQ: CF09 #51 I */
	ESCFault_Cnt_T_lgc              = 	Rte_IRead_TrqOvlSta_Per1_ESCFault_Cnt_lgc( );			/* REQ: CF09 #52 I */
	ESCIsLimited_Cnt_T_lgc			=	Rte_IRead_TrqOvlSta_Per1_ESCIsLimited_Cnt_lgc();		/* REQ: CF09 #53 I */
	PosTrajHwAngle_HwDeg_T_f32		=	Rte_IRead_TrqOvlSta_Per1_PosTrajHwAngle_HwDeg_f32();	/* REQ: CF09 #61 I */
	SWARTrgtAngRequest_HwDeg_T_f32	=	Rte_IRead_TrqOvlSta_Per1_SWARTrgtAngRequest_HwDeg_f32();/* REQ: CF09 #59 I */
	PosTrajEnable_Cnt_T_lgc			=	Rte_IRead_TrqOvlSta_Per1_PosTrajEnable_Cnt_lgc();		/* REQ: CF09 #60 I */
	CWPosition_HwDeg_T_f32			=	Rte_IRead_TrqOvlSta_Per1_CWPosition_HwDeg_f32();		/* REQ: CF09 #57 I */
	CCWPosition_HwDeg_T_f32			=	Rte_IRead_TrqOvlSta_Per1_CCWPosition_HwDeg_f32();		/* REQ: CF09 #58 I */
	GMOSH_APAMfgEnable_Cnt_T_lgc	=	Rte_IRead_TrqOvlSta_Per1_GMOSH_APAMfgEnable_Cnt_lgc();	/* REQ: CF09 #54 I */
	GMOSH_LKAMfgEnable_Cnt_T_lgc	=	Rte_IRead_TrqOvlSta_Per1_GMOSH_LKAMfgEnable_Cnt_lgc();	/* REQ: CF09 #55 I */
	GMOSH_ESCMfgEnable_Cnt_T_lgc	=	Rte_IRead_TrqOvlSta_Per1_GMOSH_ESCMfgEnable_Cnt_lgc();	/* REQ: CF09 #56 I */
	 

	#if (STD_ON == BC_TRQOVLSTA_FAULTINJECTIONPOINT)
		(void)Rte_Call_FaultInjection_SCom_FltInjection(&LKARequest_Cnt_T_f32,FLTINJ_TRQOVLSTA_LKAFAULT);
		if (LKARequest_Cnt_T_f32 > D_ZERO_ULS_F32)
			{
				LKARequest_Cnt_T_lgc =TRUE;
			}
		else
			{
				LKARequest_Cnt_T_lgc =FALSE;
			}
	#else
	      LKARequest_Cnt_T_lgc            = 	Rte_IRead_TrqOvlSta_Per1_LKARequest_Cnt_lgc( );	/* REQ: CF09 #48 I */
	#endif
	
	/* REQ: CF09 #92 I */
	if(HapticRequest_Cnt_T_lgc == TRUE)
	{
			if(TrqOvlSta_Haptictime_Sec_M_f32 >= (k_MaxHapticReqTime_Sec_f32))
			{			
				HapticReqDurExceeded_Cnt_T_lgc = TRUE;
			}
			else
			{
				TrqOvlSta_Haptictime_Sec_M_f32 = TrqOvlSta_Haptictime_Sec_M_f32 + D_2MS_SEC_F32  ;
				HapticReqDurExceeded_Cnt_T_lgc = FALSE;
			}
		
	}
	else
	{
				TrqOvlSta_Haptictime_Sec_M_f32 = D_ZERO_ULS_F32;
				HapticReqDurExceeded_Cnt_T_lgc = FALSE;
			
	}
	/* ENDREQ: CF09 #92 */
	
	/* REQ: CF09 #93 I */
	if(ShiftLeverIsInReverse_Cnt_T_lgc == TRUE)
	{
		if(TrqOvlSta_ElapsedShiftLevRevTime_Sec_M_f32 > (k_ShiftLevRevTime_Sec_f32)) 
		{	
		
			ShiftLevRevTime_Cnt_T_lgc = TRUE;
		}
		else
		{
			TrqOvlSta_ElapsedShiftLevRevTime_Sec_M_f32 += D_2MS_SEC_F32;
			ShiftLevRevTime_Cnt_T_lgc = FALSE;
		}
	}
	else
	{
		TrqOvlSta_ElapsedShiftLevRevTime_Sec_M_f32 = D_ZERO_ULS_F32;
		ShiftLevRevTime_Cnt_T_lgc = FALSE;
		
	}

	TrqOvlSta_ShiftLevRevTime_Cnt_D_lgc = ShiftLevRevTime_Cnt_T_lgc;
	/* ENDREQ: CF09 #93 */
	
	/* REQ: CF09 #78 I */
	if(MaxSecureVehicleSpeed_Kph_T_f32 <= k_StandstillThresh_Kph_f32)	/* REQ: CF09 #77 I */
	{
		if(TrqOvlSta_ElapsedStandstillTime_Sec_M_f32 >= k_StandstillTime_Sec_f32)
		{
	
			StandstillTime_Cnt_T_lgc = TRUE;
		}
		else
		{
			TrqOvlSta_ElapsedStandstillTime_Sec_M_f32+=D_2MS_SEC_F32;
			StandstillTime_Cnt_T_lgc = FALSE;
		}
	}
	else
	{
			TrqOvlSta_ElapsedStandstillTime_Sec_M_f32=D_ZERO_ULS_F32;
			StandstillTime_Cnt_T_lgc = FALSE;
	}
	
	TrqOvlSta_StandstillTime_Cnt_D_lgc = StandstillTime_Cnt_T_lgc;
	/* ENDREQ: CF09 #78 */
	
	
	if (TrqOvlSta_HapticState_State_M_enum != Haptic_Inactive)
	{
	    HwTrqFilt_HwNm_T_f32=D_ZERO_ULS_F32;
	}
	else
	{
		HwTrqFilt_HwNm_T_f32 = LPF_OpUpdate_f32_m(HwTorque_HwNm_T_f32, &TrqOvlSta_HwTorqueSV_HwNm_M_Str);	/* REQ: CF09 #79 I */
	}
	
	/* REQ: CF09 #81 I */
	if((float32)Abs_f32_m(HwTrqFilt_HwNm_T_f32) >= k_APAMaxHwTrq_HwNm_f32)		/* REQ: CF09 #80 I */
	{
		if(TrqOvlSta_ElapsedAPAMaxHwTrqTime_Sec_M_f32 >= ((k_APAMaxHwTrqTime_Sec_f32)))
		{
		
			APAIntervention_Cnt_T_lgc = TRUE;
		}
		else
		{
			TrqOvlSta_ElapsedAPAMaxHwTrqTime_Sec_M_f32+=D_2MS_SEC_F32;
			APAIntervention_Cnt_T_lgc = FALSE;
		}
		
	}
	else
	{
			TrqOvlSta_ElapsedAPAMaxHwTrqTime_Sec_M_f32 =D_ZERO_ULS_F32;
			APAIntervention_Cnt_T_lgc = FALSE;
	}
	/* REQ: CF09 #81 I */
	
	if ((LKAFault_Cnt_T_lgc == TRUE) && (TrqOvlSta_LKAPermFault_Cnt_M_lgc == FALSE) && (TrqOvlSta_LKAFault_Cnt_M_lgc == FALSE))
	{
		TrqOvlSta_LKAPermFault_Cnt_M_u08 ++;

		/* REQ: CF09 #173 I */
		if (TrqOvlSta_LKAPermFault_Cnt_M_u08 >= 3U)
		{
			TrqOvlSta_LKAPermFault_Cnt_M_lgc = TRUE;
		}
		/* ENDREQ: CF09 #173 */
	}
	
	TrqOvlSta_LKAFault_Cnt_M_lgc = LKAFault_Cnt_T_lgc;

	if(GMOSH_APAMfgEnable_Cnt_T_lgc == FALSE)
		{
			TrqOvlSta_APAState_State_M_enum = APA_ManufacturingDisable;
		}
	if(GMOSH_LKAMfgEnable_Cnt_T_lgc == FALSE)
		{
			TrqOvlSta_LKAState_State_M_enum = LKA_ManufacturingDisable;
		}
	if(GMOSH_ESCMfgEnable_Cnt_T_lgc == FALSE)
		{
			TrqOvlSta_ESCState_State_M_enum = ESC_ManufacturingDisable;
		}

	/* APA State */
	switch (TrqOvlSta_APAState_State_M_enum)
	{
	case(APA_TempInhibit):	/* REQ: CF09 #133 I */
		if(APANonRecoverableFaults_Cnt_T_lgc ==TRUE)	/* REQ: CF09 #160 I */
			{
				TrqOvlSta_APAState_State_M_enum = APA_PermanentlyFailed;
			}
		/* REQ: CF09 #86 I */
		/* REQ: CF09 #134 I */
		else if((MaxSecureVehicleSpeed_Kph_T_f32 <= k_APAMaxVehSpd_Kph_f32) && (APARequest_Cnt_T_lgc ==FALSE) && (HapticRequest_Cnt_T_lgc==FALSE) && (APARecoverableFaults_Cnt_T_lgc==FALSE))
			{
				TrqOvlSta_APAState_State_M_enum = APA_AvailCntrl;
			}
		else
			{
			/*Do nothing*/
			}			
		break;

	case(APA_AvailCntrl):	/* REQ: CF09 #133 I */
		/* REQ: CF09 #144 I */
		/* REQ: CF09 #201 I */
		if(APANonRecoverableFaults_Cnt_T_lgc ==TRUE)
			{
				TrqOvlSta_APAState_State_M_enum = APA_PermanentlyFailed;
				TrqOvlSta_HapticState_State_M_enum= Haptic_Inactive;
			}
		/* REQ: CF09 #86 I */
		/* REQ: CF09 #140 I */
		/* REQ: CF09 #154 I */
		else if ((MaxSecureVehicleSpeed_Kph_T_f32 > k_APAMaxVehSpd_Kph_f32) ||(APARecoverableFaults_Cnt_T_lgc==TRUE)||((HapticRequest_Cnt_T_lgc==TRUE)&&(HapticReqDurExceeded_Cnt_T_lgc==TRUE)))
			{
				TrqOvlSta_APAState_State_M_enum = APA_TempInhibit;
				TrqOvlSta_HapticState_State_M_enum = Haptic_Inactive;
			}	
		else
			{
			/* REQ: CF09 #85 I */
			/* REQ: CF09 #146 I */
			 if (k_APAIncludeHaptic_Cnt_lgc == FALSE)
				{
				if ((StandstillTime_Cnt_T_lgc==TRUE) && (APARequest_Cnt_T_lgc ==TRUE)&&(ShiftLevRevTime_Cnt_T_lgc==TRUE))	/* REQ: CF09 #145 I */
					{
						TrqOvlSta_HapticState_State_M_enum = Haptic_Inactive;	/* REQ: CF09 #139 I */
						TrqOvlSta_APAState_State_M_enum = APA_Active;
					}
				}
			else
				{
				/* Haptice State */
				switch(TrqOvlSta_HapticState_State_M_enum)
					{
					case(Haptic_Inactive):
						/* "TrqOvlSta_ReadytoPulse_Cnt_M_lgc" to introduced a loop delay*/
						if ((HapticRequest_Cnt_T_lgc==FALSE) && (TrqOvlSta_ReadytoPulse_Cnt_M_lgc==FALSE))	/* REQ: CF09 #150 I */
							{
							  TrqOvlSta_ReadytoPulse_Cnt_M_lgc= TRUE;		/* REQ: CF09 #139 I */
							}
						else if ( TrqOvlSta_ReadytoPulse_Cnt_M_lgc== TRUE)
							{
							 /* REQ: CF09 #150 I */
							 if ((StandstillTime_Cnt_T_lgc==TRUE) && (APARequest_Cnt_T_lgc ==TRUE)&&(HapticRequest_Cnt_T_lgc==TRUE)&&(ShiftLevRevTime_Cnt_T_lgc==TRUE))
								{
									TrqOvlSta_HapticState_State_M_enum = Haptic_Active;
									TrqOvlSta_Hapticdur_Cnt_M_u16= 0u;
								}
							 else if (HapticRequest_Cnt_T_lgc==TRUE)	/* REQ: CF09 #150 I */
								{
									TrqOvlSta_ReadytoPulse_Cnt_M_lgc= FALSE;	/* REQ: CF09 #139 I */
								}
							 else
								{
									/** do nothing**/
								}
							}
						else
							{
							TrqOvlSta_HapticState_State_M_enum = Haptic_Inactive;
							}
						break;
					case(Haptic_Active):	/* REQ: CF09 #139 I */
						/* REQ: CF09 #150 I */
						if ((StandstillTime_Cnt_T_lgc==FALSE) || (APARequest_Cnt_T_lgc ==FALSE)|| (ShiftLevRevTime_Cnt_T_lgc==FALSE))
								{
									TrqOvlSta_HapticState_State_M_enum = Haptic_Inactive;
									TrqOvlSta_Hapticdur_Cnt_M_u16 = 0u;
								}
						/* REQ: CF09 #88 I */
						/* REQ: CF09 #201 I */
						else if(TrqOvlSta_Hapticdur_Cnt_M_u16 > (uint16)(uint32)(float32)(k_HapticDuration_Sec_f32/D_2MS_SEC_F32))
								{
									TrqOvlSta_HapticState_State_M_enum = Haptic_Waiting;
									TrqOvlSta_Hapticdur_Cnt_M_u16 = 0u;
								}
						else
								{
									TrqOvlSta_Hapticdur_Cnt_M_u16++;
								}
						break;
					case(Haptic_Waiting):	/* REQ: CF09 #139 I */
						/* REQ: CF09 #150 I */
						if ((StandstillTime_Cnt_T_lgc==FALSE) || (APARequest_Cnt_T_lgc ==FALSE)|| (ShiftLevRevTime_Cnt_T_lgc==FALSE))
								{
									TrqOvlSta_HapticState_State_M_enum = Haptic_Inactive;
									TrqOvlSta_Hapticdur_Cnt_M_u16 = 0u;
								}
						/* REQ: CF09 #145 I */
						/* REQ: CF09 #150 I */
						else if(TrqOvlSta_Hapticdur_Cnt_M_u16 > (uint16)(uint32)(float32)(k_HapticReacttime_Sec_f32/D_2MS_SEC_F32))
								{
									TrqOvlSta_APAState_State_M_enum = APA_Active;
									TrqOvlSta_HapticState_State_M_enum = Haptic_Inactive;
									TrqOvlSta_Hapticdur_Cnt_M_u16 = 0u;
								}
						else
								{
									TrqOvlSta_Hapticdur_Cnt_M_u16++;
								}
						break;
					default:
						    break;
					
					}
				}
			}
		break;

	case(APA_Active):	/* REQ: CF09 #133 I */

		if(APANonRecoverableFaults_Cnt_T_lgc ==TRUE)
			{
				TrqOvlSta_APAState_State_M_enum = APA_PermanentlyFailed;
			}
		else if(APARequest_Cnt_T_lgc ==FALSE)	/* REQ: CF09 #155 I */
			{
				TrqOvlSta_APAState_State_M_enum = APA_AvailCntrl;
			}
	    /* APARequest_Cnt_T_lgc if false it will go to AvailCntrl */
		/* REQ: CF09 #86 I */
		else if ((MaxSecureVehicleSpeed_Kph_T_f32 > k_APAMaxVehSpd_Kph_f32) ||(APARecoverableFaults_Cnt_T_lgc==TRUE)||(HapticRequest_Cnt_T_lgc==TRUE)||(APAIntervention_Cnt_T_lgc==TRUE))
			{
				TrqOvlSta_APAState_State_M_enum = APA_TempInhibit;
			}
		else
			{
			/*Do nothing*/
			}				
		break;

	case(APA_PermanentlyFailed):	/* REQ: CF09 #133 I */
		break;
	/* REQ: CF09 #119 I */
	/* REQ: CF09 #133 I */
	case(APA_ManufacturingDisable):
		break;

	default:
		break;
	}

	/* LKA State */
	switch (TrqOvlSta_LKAState_State_M_enum)
	{
	case (LKA_Inactive):
	    if (TrqOvlSta_LKAPermFault_Cnt_M_lgc == TRUE)	/* REQ: CF09 #172 I */
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_PermanentlyFailed;
		}
		else if ((MinSecureVehicleSpeed_Kph_T_f32 < k_LKAMinVehSpd_Kph_f32) || (MaxSecureVehicleSpeed_Kph_T_f32 > k_LKAMaxVehSpd_Kph_f32))
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_Inactive;
		}
		/* REQ: CF09 #175 I */
		else if ((LKARequest_Cnt_T_lgc == TRUE) && ((LKAFault_Cnt_T_lgc == TRUE) || (LKAInhibit_Cnt_T_lgc == TRUE) || (TrqOvlSta_ESCState_State_M_enum == ESC_Active) || (TrqOvlSta_ESCState_State_M_enum == ESC_TemporarilyLimited)))
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_TemporarilyLimited;
		}
		else if (LKARequest_Cnt_T_lgc == TRUE)	/* REQ: CF09 #174 I */
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_Active;
		}
		else
		{
		/* do nothing*/
		}
	break;
		
	case (LKA_Active):
	    if (TrqOvlSta_LKAPermFault_Cnt_M_lgc == TRUE)	/* REQ: CF09 #176 I */
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_PermanentlyFailed;
		}
		/* REQ: CF09 #90 I */
		/* REQ: CF09 #91 I */
		/* REQ: CF09 #176 I */
	    else if ((MinSecureVehicleSpeed_Kph_T_f32 < k_LKAMinVehSpd_Kph_f32) || (MaxSecureVehicleSpeed_Kph_T_f32 > k_LKAMaxVehSpd_Kph_f32) ||(LKARequest_Cnt_T_lgc == FALSE))
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_Inactive;
		}
		/* REQ: CF09 #176 I */
	    else if ((LKAInhibit_Cnt_T_lgc == TRUE) || (LKAFault_Cnt_T_lgc == TRUE) || (TrqOvlSta_ESCState_State_M_enum == ESC_Active) || (TrqOvlSta_ESCState_State_M_enum == ESC_TemporarilyLimited))
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_TemporarilyLimited;
		}
		else
		{
		 /* do nothing*/
		}
	   break;
	   
	case (LKA_TemporarilyLimited):
		if (TrqOvlSta_LKAPermFault_Cnt_M_lgc == TRUE)	/* REQ: CF09 #176 I */
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_PermanentlyFailed;
		}
		else if (LKARequest_Cnt_T_lgc == FALSE)		/* REQ: CF09 #192 I */
		{
		  TrqOvlSta_LKAState_State_M_enum = LKA_Inactive;
		}
		else
		{
		/* do nothing*/
		}
		break;

	case (LKA_ManufacturingDisable):	/* REQ: CF09 #129 I */
	break;

	default:
		break;
	}

	/* ESC State */
	switch (TrqOvlSta_ESCState_State_M_enum)
		{
		case (ESC_Inactive):
		    if (ESCFault_Cnt_T_lgc == TRUE)		/* REQ: CF09 #155 I */
			{
			  TrqOvlSta_ESCState_State_M_enum = ESC_PermanentlyFailed;
			}
		    /* REQ: CF09 #94 I */
		    /* REQ: CF09 #161 I */
		    else if((ESCRequest_Cnt_T_lgc == TRUE) && (MaxSecureVehicleSpeed_Kph_T_f32 <= k_ESCMaxVehSpd_Kph_f32))
		    {
		    	TrqOvlSta_ESCState_State_M_enum = ESC_Active;
		    }
		    else
		    {
		    	/* do nothing*/
		    }
		break;

		case (ESC_Active):
				if (ESCFault_Cnt_T_lgc == TRUE )	/* REQ: CF09 #166 I */
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_PermanentlyFailed;
				}
	    		/* REQ: CF09 #94 I */
	    		/* REQ: CF09 #163 I */
				else if ((ESCRequest_Cnt_T_lgc == FALSE) || (MaxSecureVehicleSpeed_Kph_T_f32 > k_ESCMaxVehSpd_Kph_f32))
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_Inactive;
				}
				else if (ESCIsLimited_Cnt_T_lgc == TRUE)	/* REQ: CF09 #165 I */
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_TemporarilyLimited;
				}
				else
				{
					/* do nothing */
				}
		break;

		case (ESC_TemporarilyLimited):
				if (ESCRequest_Cnt_T_lgc == FALSE)	/* REQ: CF09 #165 I */
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_Inactive;
				}
				else if (ESCFault_Cnt_T_lgc == TRUE)	/* REQ: CF09 #169 I */
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_PermanentlyFailed;
				}
				else if (ESCIsLimited_Cnt_T_lgc == FALSE)	/* REQ: CF09 #171 I */
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_Active;
				}
				else
				{
					/* do nothing */
				}
		break;

		case (ESC_PermanentlyFailed):
				if((ESCRequest_Cnt_T_lgc == FALSE) && (ESCFault_Cnt_T_lgc == FALSE))		/* REQ: CF09 #170 I */
				{
					TrqOvlSta_ESCState_State_M_enum = ESC_Inactive;
				}
				else
				{
					/* do nothing */
				}
		break;

		case ( ESC_ManufacturingDisable):	/* REQ: CF09 #130 I */
		break;

		default:
				break;
			}

	if(TrqOvlSta_HapticState_State_M_enum==Haptic_Active)
		{
			TrqOscEnable_Cnt_T_lgc =TRUE;
		}
		else
		{
			TrqOscEnable_Cnt_T_lgc =FALSE;
		}

	/* SWAR Limiter */
	/* REQ: CF09 #131 I */
	/* REQ: CF09 #84 I */
	SWARTrgtAng_HwDeg_T_f32	=	Limit_m(SWARTrgtAngRequest_HwDeg_T_f32, (CCWPosition_HwDeg_T_f32 + k_SWARLimiter_HwDeg_f32), (CWPosition_HwDeg_T_f32 - k_SWARLimiter_HwDeg_f32));

	/* PosServ */
	/* REQ: CF09 #132 I */
	if((TrqOvlSta_APAState_State_M_enum == APA_Active) && (PosTrajEnable_Cnt_T_lgc == TRUE ))
	{
		PosEnable_Cnt_T_lgc = FALSE;
	}
	else if((TrqOvlSta_APAState_State_M_enum != APA_Active) && (PosTrajEnable_Cnt_T_lgc == TRUE ))
	{
		PosEnable_Cnt_T_lgc = TRUE;
		TrqOvlSta_PosSrvoHwAngle_HwDeg_M_f32 = PosTrajHwAngle_HwDeg_T_f32;
	}
	else if((TrqOvlSta_APAState_State_M_enum == APA_Active) && (PosTrajEnable_Cnt_T_lgc == FALSE ))
	{
		PosEnable_Cnt_T_lgc = TRUE;
		TrqOvlSta_PosSrvoHwAngle_HwDeg_M_f32 = SWARTrgtAng_HwDeg_T_f32;
	}
	else
	{
		PosEnable_Cnt_T_lgc = FALSE;		
	}
	/* ENDREQ: CF09 #132 */

	/* Write outputs */
	(void)Rte_IWrite_TrqOvlSta_Per1_APAState_State_enum(TrqOvlSta_APAState_State_M_enum );				/* REQ: CF09 #28 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc(APAIntervention_Cnt_T_lgc );	/* REQ: CF09 #63 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_LKAState_State_enum(TrqOvlSta_LKAState_State_M_enum);				/* REQ: CF09 #62 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_ESCState_State_enum(TrqOvlSta_ESCState_State_M_enum);				/* REQ: CF09 #64 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc(TrqOscEnable_Cnt_T_lgc);						/* REQ: CF09 #65 I */

	/* REQ: CF09 #66 I */
	/* REQ: CF09 #82 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32(k_HapticAmplitude_MtrNm_f32 );

	/* REQ: CF09 #67 I */
	/* REQ: CF09 #83 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_TrqOscFreq_Hz_f32(k_HapticFreq_Hz_f32);

	(void)Rte_IWrite_TrqOvlSta_Per1_GMOSHOscillateState_State_enum(TrqOvlSta_HapticState_State_M_enum );/* REQ: CF09 #68 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_PosServEnable_Cnt_lgc(PosEnable_Cnt_T_lgc );						/* REQ: CF09 #69 I */
	(void)Rte_IWrite_TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32(TrqOvlSta_PosSrvoHwAngle_HwDeg_M_f32 );	/* REQ: CF09 #70 I */

	
	(void)Rte_Call_TrqOvlSta_Per1_CP1_CheckpointReached();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RTE_STOP_SEC_AP_TRQOVLSTA_APPL_CODE
#include "MemMap.h"  /* PRQA S 5087 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*


*/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
