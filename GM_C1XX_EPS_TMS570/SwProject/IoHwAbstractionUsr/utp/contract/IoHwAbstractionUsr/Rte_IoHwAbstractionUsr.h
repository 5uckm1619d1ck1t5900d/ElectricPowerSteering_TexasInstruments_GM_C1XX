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
 *          File:  Rte_IoHwAbstractionUsr.h
 *     Workspace:  C:/Synergy/GM_C1XX_EPS_TMS570-zz4r1x1/GM_C1XX_EPS_TMS570/SwProject/IoHwAbstractionUsr/autosar
 *     SW-C Type:  IoHwAbstractionUsr
 *  Generated at:  Wed Apr  9 14:32:59 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <IoHwAbstractionUsr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IOHWABSTRACTIONUSR_H
# define _RTE_IOHWABSTRACTIONUSR_H

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

typedef P2CONST(struct Rte_CDS_IoHwAbstractionUsr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Batt_Volt_f32 (0.0F)
# define Rte_InitValue_BattSwitched_Volt_f32 (0.0F)
# define Rte_InitValue_SysCVSwitch_Volt_f32 (0.0F)
# define Rte_InitValue_TemperatureADC_Volt_f32 (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAbstractionUsr_Batt_Volt_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAbstractionUsr_BattSwitched_Volt_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAbstractionUsr_SysCVSwitch_Volt_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAbstractionUsr_TemperatureADC_Volt_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAbstractionUsr_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAbstractionUsr_SystemTime_DtrmnElapsedTime_uS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_IOHWABSTRACTIONUSR_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAbstractionUsr_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_IOHWABSTRACTIONUSR_APPL_VAR) CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAbstractionUsr_SystemTime_GetSystemTime_uS_u32(P2VAR(UInt32, AUTOMATIC, RTE_IOHWABSTRACTIONUSR_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IWrite_IoHwAb_Init_BattSwitched_Volt_f32(data) \
  ( \
  Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_BattSwitched_Volt_f32->value = (data) \
  )

# define Rte_IWriteRef_IoHwAb_Init_BattSwitched_Volt_f32() \
  (&Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_BattSwitched_Volt_f32->value)

# define Rte_IWrite_IoHwAb_Init_Batt_Volt_f32(data) \
  ( \
  Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_Batt_Volt_f32->value = (data) \
  )

# define Rte_IWriteRef_IoHwAb_Init_Batt_Volt_f32() \
  (&Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_Batt_Volt_f32->value)

# define Rte_IWrite_IoHwAb_Init_SysCVSwitch_Volt_f32(data) \
  ( \
  Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_SysCVSwitch_Volt_f32->value = (data) \
  )

# define Rte_IWriteRef_IoHwAb_Init_SysCVSwitch_Volt_f32() \
  (&Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_SysCVSwitch_Volt_f32->value)

# define Rte_IWrite_IoHwAb_Init_TemperatureADC_Volt_f32(data) \
  ( \
  Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_TemperatureADC_Volt_f32->value = (data) \
  )

# define Rte_IWriteRef_IoHwAb_Init_TemperatureADC_Volt_f32() \
  (&Rte_Inst_IoHwAbstractionUsr->IoHwAb_Init_TemperatureADC_Volt_f32->value)


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Batt_Volt_f32 Rte_Write_IoHwAbstractionUsr_Batt_Volt_f32
# define Rte_Write_BattSwitched_Volt_f32 Rte_Write_IoHwAbstractionUsr_BattSwitched_Volt_f32
# define Rte_Write_SysCVSwitch_Volt_f32 Rte_Write_IoHwAbstractionUsr_SysCVSwitch_Volt_f32
# define Rte_Write_TemperatureADC_Volt_f32 Rte_Write_IoHwAbstractionUsr_TemperatureADC_Volt_f32


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_IoHwAbstractionUsr_NxtrDiagMgr_SetNTCStatus
# define Rte_Call_SystemTime_DtrmnElapsedTime_uS_u16 Rte_Call_IoHwAbstractionUsr_SystemTime_DtrmnElapsedTime_uS_u16
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_IoHwAbstractionUsr_SystemTime_GetSystemTime_mS_u32
# define Rte_Call_SystemTime_GetSystemTime_uS_u32 Rte_Call_IoHwAbstractionUsr_SystemTime_GetSystemTime_uS_u32




# define RTE_START_SEC_IOHWABSTRACTIONUSR_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Init
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_IoHwAb_Init_BattSwitched_Volt_f32(Float data)
 *   Float *Rte_IWriteRef_IoHwAb_Init_BattSwitched_Volt_f32(void)
 *   void Rte_IWrite_IoHwAb_Init_Batt_Volt_f32(Float data)
 *   Float *Rte_IWriteRef_IoHwAb_Init_Batt_Volt_f32(void)
 *   void Rte_IWrite_IoHwAb_Init_SysCVSwitch_Volt_f32(Float data)
 *   Float *Rte_IWriteRef_IoHwAb_Init_SysCVSwitch_Volt_f32(void)
 *   void Rte_IWrite_IoHwAb_Init_TemperatureADC_Volt_f32(Float data)
 *   Float *Rte_IWriteRef_IoHwAb_Init_TemperatureADC_Volt_f32(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_uS_u16(UInt32 InitialTime, UInt16 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_uS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_IOHWABSTRACTIONUSR_APPL_CODE) IoHwAb_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_ReadADC
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Batt_Volt_f32(Float data)
 *   Std_ReturnType Rte_Write_BattSwitched_Volt_f32(Float data)
 *   Std_ReturnType Rte_Write_SysCVSwitch_Volt_f32(Float data)
 *   Std_ReturnType Rte_Write_TemperatureADC_Volt_f32(Float data)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_IOHWABSTRACTIONUSR_APPL_CODE) IoHwAb_ReadADC(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_StartADC
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_IOHWABSTRACTIONUSR_APPL_CODE) IoHwAb_StartADC(void);

# define RTE_STOP_SEC_IOHWABSTRACTIONUSR_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1397068947
#    error "The magic number of the generated file <C:/Synergy/GM_C1XX_EPS_TMS570-zz4r1x1/GM_C1XX_EPS_TMS570/SwProject/IoHwAbstractionUsr/utp/contract/IoHwAbstractionUsr/Rte_IoHwAbstractionUsr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1397068947
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_IOHWABSTRACTIONUSR_H */
