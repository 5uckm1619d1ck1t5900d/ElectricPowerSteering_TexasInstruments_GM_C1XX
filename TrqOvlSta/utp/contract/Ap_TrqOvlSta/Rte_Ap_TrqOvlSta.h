/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_TrqOvlSta.h
 *     Workspace:  C:/Sankar/Synergy/Working/TrqOvlSta-pznywf/TrqOvlSta/autosar
 *     SW-C Type:  Ap_TrqOvlSta
 *  Generated at:  Thu Mar 19 15:28:03 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_TrqOvlSta> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_TRQOVLSTA_H
# define _RTE_AP_TRQOVLSTA_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_TrqOvlSta, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_APADrvrInterventionDetected_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_APANonRecoverableFaults_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_APARecoverableFaults_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_APARequest_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_APAState_State_enum ((APA_State_enum)0u)
# define Rte_InitValue_CCWPosition_HwDeg_f32 ((Float)0)
# define Rte_InitValue_CWPosition_HwDeg_f32 ((Float)0)
# define Rte_InitValue_ESCFault_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_ESCIsLimited_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_ESCRequest_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_ESCState_State_enum ((ESC_State_enum)0u)
# define Rte_InitValue_GMOSHOscillateState_State_enum ((Haptic_State_enum)1u)
# define Rte_InitValue_GMOSH_APAMfgEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_GMOSH_ESCMfgEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_GMOSH_LKAMfgEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_HapticRequest_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_HwTorque_HwNm_f32 ((Float)0)
# define Rte_InitValue_LKAFault_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_LKAInhibit_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_LKARequest_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_LKAState_State_enum ((LKA_State_enum)0u)
# define Rte_InitValue_MaxSecureVehicleSpeed_Kph_f32 ((Float)0)
# define Rte_InitValue_MinSecureVehicleSpeed_Kph_f32 ((Float)0)
# define Rte_InitValue_PosServEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PosSrvoHwAngle_HwDeg_f32 ((Float)0)
# define Rte_InitValue_PosTrajEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PosTrajHwAngle_HwDeg_f32 ((Float)0)
# define Rte_InitValue_SWARTrgtAngRequest_HwDeg_f32 ((Float)0)
# define Rte_InitValue_ShiftLeverIsInReverse_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TrqOscAmp_MtrNm_f32 ((Float)0)
# define Rte_InitValue_TrqOscEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TrqOscFreq_Hz_f32 ((Float)0)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_TrqOvlSta_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TrqOvlSta_FaultInjection_SCom_FltInjection(P2VAR(Float, AUTOMATIC, RTE_AP_TRQOVLSTA_APPL_VAR) SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TrqOvlSta_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_TRQOVLSTA_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TrqOvlSta_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_TRQOVLSTA_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_TrqOvlSta_Per1_APANonRecoverableFaults_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APANonRecoverableFaults_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_APARecoverableFaults_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APARecoverableFaults_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_APARequest_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APARequest_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_CCWPosition_HwDeg_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_CCWPosition_HwDeg_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_CWPosition_HwDeg_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_CWPosition_HwDeg_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_ESCFault_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_ESCFault_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_ESCIsLimited_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_ESCIsLimited_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_ESCRequest_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_ESCRequest_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_GMOSH_APAMfgEnable_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_GMOSH_APAMfgEnable_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_GMOSH_ESCMfgEnable_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_GMOSH_ESCMfgEnable_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_GMOSH_LKAMfgEnable_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_GMOSH_LKAMfgEnable_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_HapticRequest_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_HapticRequest_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_HwTorque_HwNm_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_HwTorque_HwNm_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_LKAFault_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_LKAFault_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_LKAInhibit_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_LKAInhibit_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_LKARequest_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_LKARequest_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_MaxSecureVehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_MaxSecureVehicleSpeed_Kph_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_MinSecureVehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_MinSecureVehicleSpeed_Kph_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_PosTrajEnable_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_PosTrajEnable_Cnt_lgc->value)

# define Rte_IRead_TrqOvlSta_Per1_PosTrajHwAngle_HwDeg_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_PosTrajHwAngle_HwDeg_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_SWARTrgtAngRequest_HwDeg_f32() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_SWARTrgtAngRequest_HwDeg_f32->value)

# define Rte_IRead_TrqOvlSta_Per1_ShiftLeverIsInReverse_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_ShiftLeverIsInReverse_Cnt_lgc->value)

# define Rte_IWrite_TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APADrvrInterventionDetected_Cnt_lgc->value)

# define Rte_IWrite_TrqOvlSta_Per1_APAState_State_enum(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APAState_State_enum->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_APAState_State_enum() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_APAState_State_enum->value)

# define Rte_IWrite_TrqOvlSta_Per1_ESCState_State_enum(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_ESCState_State_enum->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_ESCState_State_enum() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_ESCState_State_enum->value)

# define Rte_IWrite_TrqOvlSta_Per1_GMOSHOscillateState_State_enum(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_GMOSHOscillateState_State_enum->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_GMOSHOscillateState_State_enum() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_GMOSHOscillateState_State_enum->value)

# define Rte_IWrite_TrqOvlSta_Per1_LKAState_State_enum(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_LKAState_State_enum->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_LKAState_State_enum() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_LKAState_State_enum->value)

# define Rte_IWrite_TrqOvlSta_Per1_PosServEnable_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_PosServEnable_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_PosServEnable_Cnt_lgc() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_PosServEnable_Cnt_lgc->value)

# define Rte_IWrite_TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_PosSrvoHwAngle_HwDeg_f32->value)

# define Rte_IWrite_TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_TrqOscAmp_MtrNm_f32->value)

# define Rte_IWrite_TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_TrqOscEnable_Cnt_lgc->value)

# define Rte_IWrite_TrqOvlSta_Per1_TrqOscFreq_Hz_f32(data) \
  ( \
  Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_TrqOscFreq_Hz_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqOvlSta_Per1_TrqOscFreq_Hz_f32() \
  (&Rte_Inst_Ap_TrqOvlSta->TrqOvlSta_Per1_TrqOscFreq_Hz_f32->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_TrqOvlSta_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FaultInjection_SCom_FltInjection Rte_Call_Ap_TrqOvlSta_FaultInjection_SCom_FltInjection
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_TrqOvlSta_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_TrqOvlSta_SystemTime_GetSystemTime_mS_u32




# define RTE_START_SEC_AP_TRQOVLSTA_APPL_CODE
# include "MemMap.h"


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

FUNC(void, RTE_AP_TRQOVLSTA_APPL_CODE) TrqOvlSta_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqOvlSta_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *     and not in Mode(s) <DISABLE, WARMINIT, OFF>
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

FUNC(void, RTE_AP_TRQOVLSTA_APPL_CODE) TrqOvlSta_Per1(void);

# define RTE_STOP_SEC_AP_TRQOVLSTA_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1426784307
#    error "The magic number of the generated file <C:/Sankar/Synergy/Working/TrqOvlSta-pznywf/TrqOvlSta/utp/contract/Ap_TrqOvlSta/Rte_Ap_TrqOvlSta.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1426784307
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_TRQOVLSTA_H */
