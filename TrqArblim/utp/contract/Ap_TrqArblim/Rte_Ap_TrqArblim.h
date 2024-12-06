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
 *          File:  Rte_Ap_TrqArblim.h
 *     Workspace:  C:/SynergyWorkspace/WorkingProjects/TrqArblim-1.4/TrqArblim/autosar
 *     SW-C Type:  Ap_TrqArblim
 *  Generated at:  Wed Oct 15 16:03:40 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_TrqArblim> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_TRQARBLIM_H
# define _RTE_AP_TRQARBLIM_H

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

typedef P2CONST(struct Rte_CDS_Ap_TrqArblim, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssistDDFactor_Uls_f32 ((Float)1)
# define Rte_InitValue_DampingDDFactor_Uls_f32 ((Float)1)
# define Rte_InitValue_ESCCmd_HwNm_f32 ((Float)0)
# define Rte_InitValue_ESCIsLimited_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_ESCState_State_enum ((ESC_State_enum)0u)
# define Rte_InitValue_ESCTorqueDelivered_HwNm_f32 ((Float)0)
# define Rte_InitValue_GMOSHOscillate_State_enum ((Haptic_State_enum)1u)
# define Rte_InitValue_HwTorque_HwNm_f32 ((Float)0)
# define Rte_InitValue_IqTrqOv_HwNm_f32 ((Float)0)
# define Rte_InitValue_LKACmd_HwNm_f32 ((Float)0)
# define Rte_InitValue_LKAState_State_enum ((LKA_State_enum)0u)
# define Rte_InitValue_LKATorqueDelivered_HwNm_f32 ((Float)0)
# define Rte_InitValue_MaxSecureVehicleSpeed_Kph_f32 ((Float)0)
# define Rte_InitValue_OpTrqOv_MtrNm_f32 ((Float)0)
# define Rte_InitValue_PosServEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PosSrvoCmd_MtrNm_f32 ((Float)0)
# define Rte_InitValue_ReturnDDFactor_Uls_f32 ((Float)1)
# define Rte_InitValue_TrqOscCmd_MtrNm_f32 ((Float)0)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_TrqArblim_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_TrqArblim_FaultInjection_SCom_FltInjection(P2VAR(Float, AUTOMATIC, RTE_AP_TRQARBLIM_APPL_VAR) SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_TrqArblim_Per1_ESCCmd_HwNm_f32() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ESCCmd_HwNm_f32->value)

# define Rte_IRead_TrqArblim_Per1_ESCState_State_enum() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ESCState_State_enum->value)

# define Rte_IRead_TrqArblim_Per1_GMOSHOscillate_State_enum() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_GMOSHOscillate_State_enum->value)

# define Rte_IRead_TrqArblim_Per1_HwTorque_HwNm_f32() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_HwTorque_HwNm_f32->value)

# define Rte_IRead_TrqArblim_Per1_LKACmd_HwNm_f32() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_LKACmd_HwNm_f32->value)

# define Rte_IRead_TrqArblim_Per1_LKAState_State_enum() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_LKAState_State_enum->value)

# define Rte_IRead_TrqArblim_Per1_MaxSecureVehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_MaxSecureVehicleSpeed_Kph_f32->value)

# define Rte_IRead_TrqArblim_Per1_PosServEnable_Cnt_lgc() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_PosServEnable_Cnt_lgc->value)

# define Rte_IRead_TrqArblim_Per1_PosSrvoCmd_MtrNm_f32() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_PosSrvoCmd_MtrNm_f32->value)

# define Rte_IRead_TrqArblim_Per1_TrqOscCmd_MtrNm_f32() \
  (Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_TrqOscCmd_MtrNm_f32->value)

# define Rte_IWrite_TrqArblim_Per1_AssistDDFactor_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_AssistDDFactor_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_AssistDDFactor_Uls_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_AssistDDFactor_Uls_f32->value)

# define Rte_IWrite_TrqArblim_Per1_DampingDDFactor_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_DampingDDFactor_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_DampingDDFactor_Uls_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_DampingDDFactor_Uls_f32->value)

# define Rte_IWrite_TrqArblim_Per1_ESCIsLimited_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ESCIsLimited_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_ESCIsLimited_Cnt_lgc() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ESCIsLimited_Cnt_lgc->value)

# define Rte_IWrite_TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32->value)

# define Rte_IWrite_TrqArblim_Per1_IqTrqOv_HwNm_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_IqTrqOv_HwNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_IqTrqOv_HwNm_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_IqTrqOv_HwNm_f32->value)

# define Rte_IWrite_TrqArblim_Per1_LKATorqueDelivered_HwNm_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_LKATorqueDelivered_HwNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_LKATorqueDelivered_HwNm_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_LKATorqueDelivered_HwNm_f32->value)

# define Rte_IWrite_TrqArblim_Per1_OpTrqOv_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_OpTrqOv_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_OpTrqOv_MtrNm_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_OpTrqOv_MtrNm_f32->value)

# define Rte_IWrite_TrqArblim_Per1_ReturnDDFactor_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ReturnDDFactor_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqArblim_Per1_ReturnDDFactor_Uls_f32() \
  (&Rte_Inst_Ap_TrqArblim->TrqArblim_Per1_ReturnDDFactor_Uls_f32->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_TrqArblim_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FaultInjection_SCom_FltInjection Rte_Call_Ap_TrqArblim_FaultInjection_SCom_FltInjection




# define RTE_START_SEC_AP_TRQARBLIM_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqArblim_Init
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
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TRQARBLIM_APPL_CODE) TrqArblim_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqArblim_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *     and not in Mode(s) <OFF, WARMINIT, DISABLE>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Float Rte_IRead_TrqArblim_Per1_ESCCmd_HwNm_f32(void)
 *   ESC_State_enum Rte_IRead_TrqArblim_Per1_ESCState_State_enum(void)
 *   Haptic_State_enum Rte_IRead_TrqArblim_Per1_GMOSHOscillate_State_enum(void)
 *   Float Rte_IRead_TrqArblim_Per1_HwTorque_HwNm_f32(void)
 *   Float Rte_IRead_TrqArblim_Per1_LKACmd_HwNm_f32(void)
 *   LKA_State_enum Rte_IRead_TrqArblim_Per1_LKAState_State_enum(void)
 *   Float Rte_IRead_TrqArblim_Per1_MaxSecureVehicleSpeed_Kph_f32(void)
 *   Boolean Rte_IRead_TrqArblim_Per1_PosServEnable_Cnt_lgc(void)
 *   Float Rte_IRead_TrqArblim_Per1_PosSrvoCmd_MtrNm_f32(void)
 *   Float Rte_IRead_TrqArblim_Per1_TrqOscCmd_MtrNm_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_TrqArblim_Per1_AssistDDFactor_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_AssistDDFactor_Uls_f32(void)
 *   void Rte_IWrite_TrqArblim_Per1_DampingDDFactor_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_DampingDDFactor_Uls_f32(void)
 *   void Rte_IWrite_TrqArblim_Per1_ESCIsLimited_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TrqArblim_Per1_ESCIsLimited_Cnt_lgc(void)
 *   void Rte_IWrite_TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32(void)
 *   void Rte_IWrite_TrqArblim_Per1_IqTrqOv_HwNm_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_IqTrqOv_HwNm_f32(void)
 *   void Rte_IWrite_TrqArblim_Per1_LKATorqueDelivered_HwNm_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_LKATorqueDelivered_HwNm_f32(void)
 *   void Rte_IWrite_TrqArblim_Per1_OpTrqOv_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_OpTrqOv_MtrNm_f32(void)
 *   void Rte_IWrite_TrqArblim_Per1_ReturnDDFactor_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_TrqArblim_Per1_ReturnDDFactor_Uls_f32(void)
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
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TRQARBLIM_APPL_CODE) TrqArblim_Per1(void);

# define RTE_STOP_SEC_AP_TRQARBLIM_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1413255496
#    error "The magic number of the generated file <C:/SynergyWorkspace/WorkingProjects/TrqArblim-1.4/TrqArblim/utp/contract/Ap_TrqArblim/Rte_Ap_TrqArblim.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1413255496
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_TRQARBLIM_H */
