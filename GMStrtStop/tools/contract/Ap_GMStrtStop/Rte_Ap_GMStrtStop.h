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
 *          File:  Rte_Ap_GMStrtStop.h
 *     Workspace:  C:/Synergy_EA3/working/GMStrtStop/autosar
 *     SW-C Type:  Ap_GMStrtStop
 *  Generated at:  Fri Jun  3 11:21:05 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_GMStrtStop> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_GMSTRTSTOP_H
# define _RTE_AP_GMSTRTSTOP_H

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

typedef P2CONST(struct Rte_CDS_Ap_GMStrtStop, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_APAState_State_enum ((APA_State_enum)0u)
# define Rte_InitValue_EngSpd_Rpm_f32 ((Float)0)
# define Rte_InitValue_HandwheelVelocity_HwRadpS_f32 ((Float)0)
# define Rte_InitValue_HwTorque_HwNm_f32 ((Float)0)
# define Rte_InitValue_SS12VFault_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_SSScale_Uls_f32 ((Float)0)
# define Rte_InitValue_SSSlew_UlspS_f32 ((Float)1)
# define Rte_InitValue_SSState_State_enum ((SS_State_enum)0u)
# define Rte_InitValue_VehicleSpeed_Kph_f32 ((Float)0)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_GMStrtStop_SystemState_Mode(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_StrtStop_Per1_APAState_State_enum() \
  (Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_APAState_State_enum->value)

# define Rte_IRead_StrtStop_Per1_EngSpd_Rpm_f32() \
  (Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_EngSpd_Rpm_f32->value)

# define Rte_IRead_StrtStop_Per1_HandwheelVelocity_HwRadpS_f32() \
  (Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_HandwheelVelocity_HwRadpS_f32->value)

# define Rte_IRead_StrtStop_Per1_HwTorque_HwNm_f32() \
  (Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_HwTorque_HwNm_f32->value)

# define Rte_IRead_StrtStop_Per1_SS12VFault_Cnt_lgc() \
  (Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SS12VFault_Cnt_lgc->value)

# define Rte_IRead_StrtStop_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_VehicleSpeed_Kph_f32->value)

# define Rte_IWrite_StrtStop_Per1_SSScale_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SSScale_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_StrtStop_Per1_SSScale_Uls_f32() \
  (&Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SSScale_Uls_f32->value)

# define Rte_IWrite_StrtStop_Per1_SSSlew_UlspS_f32(data) \
  ( \
  Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SSSlew_UlspS_f32->value = (data) \
  )

# define Rte_IWriteRef_StrtStop_Per1_SSSlew_UlspS_f32() \
  (&Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SSSlew_UlspS_f32->value)

# define Rte_IWrite_StrtStop_Per1_SSState_State_enum(data) \
  ( \
  Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SSState_State_enum->value = (data) \
  )

# define Rte_IWriteRef_StrtStop_Per1_SSState_State_enum() \
  (&Rte_Inst_Ap_GMStrtStop->StrtStop_Per1_SSState_State_enum->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_GMStrtStop_SystemState_Mode




# define RTE_START_SEC_AP_GMSTRTSTOP_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: StrtStop_Init1
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

FUNC(void, RTE_AP_GMSTRTSTOP_APPL_CODE) StrtStop_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StrtStop_Per1
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
 *   APA_State_enum Rte_IRead_StrtStop_Per1_APAState_State_enum(void)
 *   Float Rte_IRead_StrtStop_Per1_EngSpd_Rpm_f32(void)
 *   Float Rte_IRead_StrtStop_Per1_HandwheelVelocity_HwRadpS_f32(void)
 *   Float Rte_IRead_StrtStop_Per1_HwTorque_HwNm_f32(void)
 *   Boolean Rte_IRead_StrtStop_Per1_SS12VFault_Cnt_lgc(void)
 *   Float Rte_IRead_StrtStop_Per1_VehicleSpeed_Kph_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_StrtStop_Per1_SSScale_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_StrtStop_Per1_SSScale_Uls_f32(void)
 *   void Rte_IWrite_StrtStop_Per1_SSSlew_UlspS_f32(Float data)
 *   Float *Rte_IWriteRef_StrtStop_Per1_SSSlew_UlspS_f32(void)
 *   void Rte_IWrite_StrtStop_Per1_SSState_State_enum(SS_State_enum data)
 *   SS_State_enum *Rte_IWriteRef_StrtStop_Per1_SSState_State_enum(void)
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

FUNC(void, RTE_AP_GMSTRTSTOP_APPL_CODE) StrtStop_Per1(void);

# define RTE_STOP_SEC_AP_GMSTRTSTOP_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1464973456
#    error "The magic number of the generated file <C:/Synergy_EA3/working/GMStrtStop/tools/contract/Ap_GMStrtStop/Rte_Ap_GMStrtStop.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1464973456
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_GMSTRTSTOP_H */
