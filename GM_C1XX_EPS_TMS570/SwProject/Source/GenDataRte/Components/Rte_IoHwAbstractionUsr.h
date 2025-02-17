/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Components/Rte_IoHwAbstractionUsr.h
 *     Workspace:  C:/02_EA3Int/BEV/wip_fz9hxm/GM_C1XX_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Wed Jun 22 17:08:27 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IOHWABSTRACTIONUSR_H
# define _RTE_IOHWABSTRACTIONUSR_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Batt_Volt_f32 (0.0F)
#  define Rte_InitValue_BattSwitched_Volt_f32 (0.0F)
#  define Rte_InitValue_SysCVSwitch_Volt_f32 (0.0F)
#  define Rte_InitValue_SysCVSwitchADC_Cnt_u16 (0U)
#  define Rte_InitValue_TemperatureADC_Volt_f32 (0.0F)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_Init_10, RTE_VAR_NOINIT) Rte_Task_Init_10;

extern VAR(Rte_tsTask_2ms_10, RTE_VAR_NOINIT) Rte_Task_2ms_10;

#  define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/

# define RTE_STOP_SEC_CODE
# include "MemMap.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

#  define Rte_IWrite_IoHwAb_Init_BattSwitched_Volt_f32(data) \
  ( \
    Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_BattSwitched_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_Init_BattSwitched_Volt_f32() \
  (&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_BattSwitched_Volt_f32.value)

#  define Rte_IWrite_IoHwAb_Init_Batt_Volt_f32(data) \
  ( \
    Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_Batt_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_Init_Batt_Volt_f32() \
  (&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_Batt_Volt_f32.value)

#  define Rte_IWrite_IoHwAb_Init_SysCVSwitch_Volt_f32(data) \
  ( \
    Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_SysCVSwitch_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_Init_SysCVSwitch_Volt_f32() \
  (&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_SysCVSwitch_Volt_f32.value)

#  define Rte_IWrite_IoHwAb_Init_TemperatureADC_Volt_f32(data) \
  ( \
    Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_TemperatureADC_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_Init_TemperatureADC_Volt_f32() \
  (&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_TemperatureADC_Volt_f32.value)

#  define Rte_IRead_IoHwAb_ReadADC_SysCVSwitchADC_Cnt_u16() \
  (Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_SysCVSwitchADC_Cnt_u16.value)

#  define Rte_IWrite_IoHwAb_ReadADC_BattSwitched_Volt_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_BattSwitched_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_ReadADC_BattSwitched_Volt_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_BattSwitched_Volt_f32.value)

#  define Rte_IWrite_IoHwAb_ReadADC_Batt_Volt_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_Batt_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_ReadADC_Batt_Volt_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_Batt_Volt_f32.value)

#  define Rte_IWrite_IoHwAb_ReadADC_SysCVSwitch_Volt_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_SysCVSwitch_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_ReadADC_SysCVSwitch_Volt_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_SysCVSwitch_Volt_f32.value)

#  define Rte_IWrite_IoHwAb_ReadADC_TemperatureADC_Volt_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_TemperatureADC_Volt_f32.value = (data) \
  )

#  define Rte_IWriteRef_IoHwAb_ReadADC_TemperatureADC_Volt_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_ReadADC.Rte_TemperatureADC_Volt_f32.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr10_SetNTCStatus
#  define RTE_START_SEC_NEXTEERLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NEXTEERLIBS_APPL_CODE) DtrmnElapsedTime_uS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_NEXTEERLIBS_APPL_VAR) ElapsedTime);
#  define RTE_STOP_SEC_NEXTEERLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_DtrmnElapsedTime_uS_u16(arg1, arg2) (DtrmnElapsedTime_uS_u16(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NEXTEERLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NEXTEERLIBS_APPL_CODE) GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_NEXTEERLIBS_APPL_VAR) CurrentTime);
#  define RTE_STOP_SEC_NEXTEERLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_GetSystemTime_mS_u32(arg1) (GetSystemTime_mS_u32(arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NEXTEERLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NEXTEERLIBS_APPL_CODE) GetSystemTime_uS_u32(P2VAR(UInt32, AUTOMATIC, RTE_NEXTEERLIBS_APPL_VAR) CurrentTime);
#  define RTE_STOP_SEC_NEXTEERLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_GetSystemTime_uS_u32(arg1) (GetSystemTime_uS_u32(arg1), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_IOHWABSTRACTIONUSR_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_IOHWABSTRACTIONUSR_APPL_CODE) IoHwAb_Init(void);

FUNC(void, RTE_IOHWABSTRACTIONUSR_APPL_CODE) IoHwAb_ReadADC(void);

FUNC(void, RTE_IOHWABSTRACTIONUSR_APPL_CODE) IoHwAb_StartADC(void);

# define RTE_STOP_SEC_IOHWABSTRACTIONUSR_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1466621801
#    error "The magic number of the generated file <C:/02_EA3Int/BEV/wip_fz9hxm/GM_C1XX_EPS_TMS570/SwProject/Source/GenDataRte/Components/Rte_IoHwAbstractionUsr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1466621801
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_IOHWABSTRACTIONUSR_H */
