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
 *          File:  Rte_Ap_TSMit.h
 *     Workspace:  C:/Workspace/SF47_TSMit_Implementation-CBD_TSMit/SF47/SF47_TSMit_Implementation/autosar
 *     SW-C Type:  Ap_TSMit
 *  Generated at:  Wed Sep  3 10:01:25 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_TSMit> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_TSMIT_H
# define _RTE_AP_TSMIT_H

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

typedef P2CONST(struct Rte_CDS_Ap_TSMit, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HandwheelAuthority_Uls_f32 ((Float)0)
# define Rte_InitValue_HandwheelPosition_HwDeg_f32 ((Float)0)
# define Rte_InitValue_HandwheelVelocity_HwRadpS_f32 ((Float)0)
# define Rte_InitValue_HwTorque_HwNm_f32 ((Float)0)
# define Rte_InitValue_PreLimitMtrTrqCmd_MtrNm_f32 ((Float)0)
# define Rte_InitValue_SrlComABSActive_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_SrlComESCActive_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_SrlComTCSActive_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_SrlComTransmissionTrq_TransNm_f32 ((Float)0)
# define Rte_InitValue_SrlComYawRate_DegpS_f32 ((Float)0)
# define Rte_InitValue_TSMitCommand_MtrNm_f32 ((Float)0)
# define Rte_InitValue_TSMitDefeat_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TSMitLearningEnabled_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_VehicleSpeed_Kph_f32 ((Float)0)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_TSMIT_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_TSMIT_APPL_VAR) CurrentTime);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_TSMitDisableEOL_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_TSMIT_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_TSMitDisableEOL_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_TSMIT_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_TSMitGainLrn_SetRamBlockStatus(Boolean RamBlockStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_TSMitGainLrn_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_TSMIT_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TSMit_TSMitGainLrn_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_TSMIT_APPL_DATA) DstPtr);
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_TSMit_Per1_HandwheelAuthority_Uls_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_HandwheelAuthority_Uls_f32->value)

# define Rte_IRead_TSMit_Per1_HandwheelPosition_HwDeg_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_HandwheelPosition_HwDeg_f32->value)

# define Rte_IRead_TSMit_Per1_HandwheelVelocity_HwRadpS_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_HandwheelVelocity_HwRadpS_f32->value)

# define Rte_IRead_TSMit_Per1_HwTorque_HwNm_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_HwTorque_HwNm_f32->value)

# define Rte_IRead_TSMit_Per1_PreLimitMtrTrqCmd_MtrNm_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_PreLimitMtrTrqCmd_MtrNm_f32->value)

# define Rte_IRead_TSMit_Per1_SrlComABSActive_Cnt_lgc() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_SrlComABSActive_Cnt_lgc->value)

# define Rte_IRead_TSMit_Per1_SrlComESCActive_Cnt_lgc() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_SrlComESCActive_Cnt_lgc->value)

# define Rte_IRead_TSMit_Per1_SrlComTCSActive_Cnt_lgc() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_SrlComTCSActive_Cnt_lgc->value)

# define Rte_IRead_TSMit_Per1_SrlComTransmissionTrq_TransNm_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_SrlComTransmissionTrq_TransNm_f32->value)

# define Rte_IRead_TSMit_Per1_SrlComYawRate_DegpS_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_SrlComYawRate_DegpS_f32->value)

# define Rte_IRead_TSMit_Per1_TSMitDefeat_Cnt_lgc() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_TSMitDefeat_Cnt_lgc->value)

# define Rte_IRead_TSMit_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_TSMit->TSMit_Per1_VehicleSpeed_Kph_f32->value)

# define Rte_IWrite_TSMit_Per1_TSMitCommand_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_TSMit->TSMit_Per1_TSMitCommand_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TSMit_Per1_TSMitCommand_MtrNm_f32() \
  (&Rte_Inst_Ap_TSMit->TSMit_Per1_TSMitCommand_MtrNm_f32->value)

# define Rte_IWrite_TSMit_Per1_TSMitLearningEnabled_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_TSMit->TSMit_Per1_TSMitLearningEnabled_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_TSMit_Per1_TSMitLearningEnabled_Cnt_lgc() \
  (&Rte_Inst_Ap_TSMit->TSMit_Per1_TSMitLearningEnabled_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_TSMit_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_TSMit_SystemTime_GetSystemTime_mS_u32
# define Rte_Call_TSMitDisableEOL_WriteBlock Rte_Call_Ap_TSMit_TSMitDisableEOL_WriteBlock
# define Rte_Call_TSMitGainLrn_SetRamBlockStatus Rte_Call_Ap_TSMit_TSMitGainLrn_SetRamBlockStatus
# define Rte_Call_TSMitGainLrn_WriteBlock Rte_Call_Ap_TSMit_TSMitGainLrn_WriteBlock


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_TSMitDisableEOL() (Rte_Inst_Ap_TSMit->Pim_TSMitDisableEOL)

# define Rte_Pim_TSMitGainLrn() (Rte_Inst_Ap_TSMit->Pim_TSMitGainLrn)




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   TSMit_Disable_Type *Rte_Pim_TSMitDisableEOL(void)
 *   TSMit_Gain_Type *Rte_Pim_TSMitGainLrn(void)
 *
 *********************************************************************************************************************/


# define RTE_START_SEC_AP_TSMIT_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TSMitGainLrn_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Float Rte_IRead_TSMit_Per1_HandwheelAuthority_Uls_f32(void)
 *   Float Rte_IRead_TSMit_Per1_HandwheelPosition_HwDeg_f32(void)
 *   Float Rte_IRead_TSMit_Per1_HandwheelVelocity_HwRadpS_f32(void)
 *   Float Rte_IRead_TSMit_Per1_HwTorque_HwNm_f32(void)
 *   Float Rte_IRead_TSMit_Per1_PreLimitMtrTrqCmd_MtrNm_f32(void)
 *   Boolean Rte_IRead_TSMit_Per1_SrlComABSActive_Cnt_lgc(void)
 *   Boolean Rte_IRead_TSMit_Per1_SrlComESCActive_Cnt_lgc(void)
 *   Boolean Rte_IRead_TSMit_Per1_SrlComTCSActive_Cnt_lgc(void)
 *   Float Rte_IRead_TSMit_Per1_SrlComTransmissionTrq_TransNm_f32(void)
 *   Float Rte_IRead_TSMit_Per1_SrlComYawRate_DegpS_f32(void)
 *   Boolean Rte_IRead_TSMit_Per1_TSMitDefeat_Cnt_lgc(void)
 *   Float Rte_IRead_TSMit_Per1_VehicleSpeed_Kph_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_TSMit_Per1_TSMitCommand_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_TSMit_Per1_TSMitCommand_MtrNm_f32(void)
 *   void Rte_IWrite_TSMit_Per1_TSMitLearningEnabled_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TSMit_Per1_TSMitLearningEnabled_Cnt_lgc(void)
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

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_GainReset
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GainReset> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TSMitGainLrn_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TSMitGainLrn_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_GainReset(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_GainReset(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_GetFcnDefeat
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetFcnDefeat> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_GetFcnDefeat(Boolean *FunctionDefeat_Cnt_lgc)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_GetFcnDefeat(P2VAR(Boolean, AUTOMATIC, RTE_AP_TSMIT_APPL_VAR) FunctionDefeat_Cnt_lgc);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_GetLongTermGains
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetLongTermGains> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_GetLongTermGains(Float *LTPosTransGain_HwNmpTransNm_f32, Float *LTNegTransGain_HwNmpTransNm_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_GetLongTermGains(P2VAR(Float, AUTOMATIC, RTE_AP_TSMIT_APPL_VAR) LTPosTransGain_HwNmpTransNm_f32, P2VAR(Float, AUTOMATIC, RTE_AP_TSMIT_APPL_VAR) LTNegTransGain_HwNmpTransNm_f32);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_GetLrnDefeat
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetLrnDefeat> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_GetLrnDefeat(Boolean *LearningDefeat_Cnt_lgc)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_GetLrnDefeat(P2VAR(Boolean, AUTOMATIC, RTE_AP_TSMIT_APPL_VAR) LearningDefeat_Cnt_lgc);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_SetFcnDefeat
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetFcnDefeat> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TSMitDisableEOL_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TSMitDisableEOL_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_SetFcnDefeat(Boolean FunctionDefeat_Cnt_lgc)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_SetFcnDefeat(Boolean FunctionDefeat_Cnt_lgc);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_SetLongTermGains
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetLongTermGains> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TSMitGainLrn_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TSMitGainLrn_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_SetLongTermGains(Float LTPosTransGain_HwNmpTransNm_f32, Float LTNegTransGain_HwNmpTransNm_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_SetLongTermGains(Float LTPosTransGain_HwNmpTransNm_f32, Float LTNegTransGain_HwNmpTransNm_f32);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_SetLrnDefeat
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetLrnDefeat> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TSMitDisableEOL_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TSMitDisableEOL_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void TSMit_SCom_SetLrnDefeat(Boolean LearningDefeat_Cnt_lgc)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_SetLrnDefeat(Boolean LearningDefeat_Cnt_lgc);

# define RTE_STOP_SEC_AP_TSMIT_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK (1u)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1409745700
#    error "The magic number of the generated file <C:/Workspace/SF47_TSMit_Implementation-CBD_TSMit/SF47/SF47_TSMit_Implementation/tools/contract/Ap_TSMit/Rte_Ap_TSMit.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1409745700
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_TSMIT_H */
