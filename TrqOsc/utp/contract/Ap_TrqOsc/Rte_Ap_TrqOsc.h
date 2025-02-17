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
 *          File:  Rte_Ap_TrqOsc.h
 *     Workspace:  C:/Synergy/Working/Component/CBD_TrqOsc-gz7pm0/CBD_TrqOsc/autosar
 *     SW-C Type:  Ap_TrqOsc
 *  Generated at:  Thu Apr  3 10:16:50 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_TrqOsc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_TRQOSC_H
# define _RTE_AP_TRQOSC_H

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

typedef P2CONST(struct Rte_CDS_Ap_TrqOsc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_TrqOscAmp_MtrNm_f32 ((Float)0)
# define Rte_InitValue_TrqOscCmd_MtrNm_f32 ((Float)0)
# define Rte_InitValue_TrqOscDCExceeded_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TrqOscEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TrqOscFreq_Hz_f32 ((Float)0)



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_TrqOsc_Per1_TrqOscAmp_MtrNm_f32() \
  (Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscAmp_MtrNm_f32->value)

# define Rte_IRead_TrqOsc_Per1_TrqOscEnable_Cnt_lgc() \
  (Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscEnable_Cnt_lgc->value)

# define Rte_IRead_TrqOsc_Per1_TrqOscFreq_Hz_f32() \
  (Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscFreq_Hz_f32->value)

# define Rte_IWrite_TrqOsc_Per1_TrqOscCmd_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscCmd_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_TrqOsc_Per1_TrqOscCmd_MtrNm_f32() \
  (&Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscCmd_MtrNm_f32->value)

# define Rte_IWrite_TrqOsc_Per1_TrqOscDCExceeded_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscDCExceeded_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_TrqOsc_Per1_TrqOscDCExceeded_Cnt_lgc() \
  (&Rte_Inst_Ap_TrqOsc->TrqOsc_Per1_TrqOscDCExceeded_Cnt_lgc->value)




# define RTE_START_SEC_AP_TRQOSC_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqOsc_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TRQOSC_APPL_CODE) TrqOsc_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqOsc_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Float Rte_IRead_TrqOsc_Per1_TrqOscAmp_MtrNm_f32(void)
 *   Boolean Rte_IRead_TrqOsc_Per1_TrqOscEnable_Cnt_lgc(void)
 *   Float Rte_IRead_TrqOsc_Per1_TrqOscFreq_Hz_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_TrqOsc_Per1_TrqOscCmd_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_TrqOsc_Per1_TrqOscCmd_MtrNm_f32(void)
 *   void Rte_IWrite_TrqOsc_Per1_TrqOscDCExceeded_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TrqOsc_Per1_TrqOscDCExceeded_Cnt_lgc(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TRQOSC_APPL_CODE) TrqOsc_Per1(void);

# define RTE_STOP_SEC_AP_TRQOSC_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1396537793
#    error "The magic number of the generated file <C:/Synergy/Working/Component/CBD_TrqOsc-gz7pm0/CBD_TrqOsc/utp/contract/Ap_TrqOsc/Rte_Ap_TrqOsc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1396537793
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_TRQOSC_H */
