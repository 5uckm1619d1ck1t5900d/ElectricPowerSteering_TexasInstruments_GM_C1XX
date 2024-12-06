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
 *          File:  Rte_Type.h
 *     Workspace:  C:/Workspace/GM_C1XX_EPS_TMS570-General_Motors_working/C1xx/GM_C1XX_EPS_TMS570/SwProject/CDDInterface/autosar
 *     SW-C Type:  Sa_CDDInterface
 *  Generated at:  Fri Oct  3 09:35:55 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_Float
typedef float32 Float;
# define Float_LowerLimit (-FLT_MAX)
# define Float_UpperLimit (FLT_MAX)

# define Rte_TypeDef_SInt16
typedef sint16 SInt16;
# define SInt16_LowerLimit (-32768)
# define SInt16_UpperLimit (32767)

# define Rte_TypeDef_SInt8
typedef sint8 SInt8;
# define SInt8_LowerLimit (-128)
# define SInt8_UpperLimit (127)

# define Rte_TypeDef_UInt16
typedef uint16 UInt16;
# define UInt16_LowerLimit (0U)
# define UInt16_UpperLimit (65535U)

# define Rte_TypeDef_UInt32
typedef uint32 UInt32;
# define UInt32_LowerLimit (0U)
# define UInt32_UpperLimit (4294967295U)

# define Rte_TypeDef_ManufModeType
typedef uint8 ManufModeType;
# define ManufModeType_LowerLimit (0U)
# define ManufModeType_UpperLimit (2U)
# if (defined RTE_CONST_ProductionMode) || (defined ProductionMode)
#  if (!defined RTE_CONST_ProductionMode) || (RTE_CONST_ProductionMode != 0U)
#   error "Enumeration constant <ProductionMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ProductionMode (0U)
#  define ProductionMode (0U)
# endif
# if (defined RTE_CONST_ManufacturingMode) || (defined ManufacturingMode)
#  if (!defined RTE_CONST_ManufacturingMode) || (RTE_CONST_ManufacturingMode != 1U)
#   error "Enumeration constant <ManufacturingMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ManufacturingMode (1U)
#  define ManufacturingMode (1U)
# endif
# if (defined RTE_CONST_EngineeringMode) || (defined EngineeringMode)
#  if (!defined RTE_CONST_EngineeringMode) || (RTE_CONST_EngineeringMode != 2U)
#   error "Enumeration constant <EngineeringMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_EngineeringMode (2U)
#  define EngineeringMode (2U)
# endif


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
typedef uint8 Rte_ModeType_StaMd_Mode;

# define RTE_MODE_StaMd_Mode_DISABLE (0U)
# define RTE_MODE_StaMd_Mode_OFF (1U)
# define RTE_MODE_StaMd_Mode_OPERATE (2U)
# define RTE_MODE_StaMd_Mode_WARMINIT (3U)
# define RTE_TRANSITION_StaMd_Mode (4U)


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# if (defined RTE_CONST_D_FALSE_CNT_LGC) || (defined D_FALSE_CNT_LGC)
#  if (!defined RTE_CONST_D_FALSE_CNT_LGC) || (RTE_CONST_D_FALSE_CNT_LGC != FALSE)
#   error "Constant value <D_FALSE_CNT_LGC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_FALSE_CNT_LGC (FALSE)
#  define D_FALSE_CNT_LGC (FALSE)
# endif

# if (defined RTE_CONST_D_VECUMIN_VOLTS_F32) || (defined D_VECUMIN_VOLTS_F32)
#  if (!defined RTE_CONST_D_VECUMIN_VOLTS_F32) || (RTE_CONST_D_VECUMIN_VOLTS_F32 != 5.0F)
#   error "Constant value <D_VECUMIN_VOLTS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_VECUMIN_VOLTS_F32 (5.0F)
#  define D_VECUMIN_VOLTS_F32 (5.0F)
# endif

# if (defined RTE_CONST_D_ZERO_ULS_F32) || (defined D_ZERO_ULS_F32)
#  if (!defined RTE_CONST_D_ZERO_ULS_F32) || (RTE_CONST_D_ZERO_ULS_F32 != 0.0F)
#   error "Constant value <D_ZERO_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_ULS_F32 (0.0F)
#  define D_ZERO_ULS_F32 (0.0F)
# endif

# if (defined RTE_CONST_D_ZERO_CNT_S16) || (defined D_ZERO_CNT_S16)
#  if (!defined RTE_CONST_D_ZERO_CNT_S16) || (RTE_CONST_D_ZERO_CNT_S16 != 0)
#   error "Constant value <D_ZERO_CNT_S16> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_CNT_S16 (0)
#  define D_ZERO_CNT_S16 (0)
# endif

# if (defined RTE_CONST_D_ZERO_CNT_S8) || (defined D_ZERO_CNT_S8)
#  if (!defined RTE_CONST_D_ZERO_CNT_S8) || (RTE_CONST_D_ZERO_CNT_S8 != 0)
#   error "Constant value <D_ZERO_CNT_S8> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_CNT_S8 (0)
#  define D_ZERO_CNT_S8 (0)
# endif

# if (defined RTE_CONST_D_ZERO_CNT_U16) || (defined D_ZERO_CNT_U16)
#  if (!defined RTE_CONST_D_ZERO_CNT_U16) || (RTE_CONST_D_ZERO_CNT_U16 != 0U)
#   error "Constant value <D_ZERO_CNT_U16> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_CNT_U16 (0U)
#  define D_ZERO_CNT_U16 (0U)
# endif

# if (defined RTE_CONST_D_ZERO_CNT_U32) || (defined D_ZERO_CNT_U32)
#  if (!defined RTE_CONST_D_ZERO_CNT_U32) || (RTE_CONST_D_ZERO_CNT_U32 != 0U)
#   error "Constant value <D_ZERO_CNT_U32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_CNT_U32 (0U)
#  define D_ZERO_CNT_U32 (0U)
# endif



/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  UInt16 value;
} Rte_DE_UInt16;

typedef struct
{
  SInt8 value;
} Rte_DE_SInt8;

typedef struct
{
  ManufModeType value;
} Rte_DE_ManufModeType;

typedef struct
{
  Float value;
} Rte_DE_Float;

typedef struct
{
  UInt32 value;
} Rte_DE_UInt32;

typedef struct
{
  SInt16 value;
} Rte_DE_SInt16;

typedef struct
{
  Boolean value;
} Rte_DE_Boolean;


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Sa_CDDInterface
{
  /* Data Handles section */
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Init1_IgnCnt_Cnt_u16;
  P2VAR(Rte_DE_ManufModeType, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Init2_MEC_Cnt_enum;
  P2VAR(Rte_DE_SInt8, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Init2_MtrElecMechPolarity_Cnt_s08;
  P2VAR(Rte_DE_SInt8, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Init2_MtrPosPolarity_Cnt_s08;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_ADCMtrCurr1_Volts_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_ADCMtrCurr2_Volts_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_CumMechMtrPos_Rev_f32;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_Die1RxError_Cnt_u16;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_Die1RxMtrPos_Cnt_u16;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_Die1RxRevCtr_Cnt_u16;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_Die2RxError_Cnt_u16;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_Die2RxMtrPos_Cnt_u16;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_Die2RxRevCtr_Cnt_u16;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32;
  P2VAR(Rte_DE_SInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_ModIdxFinal_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MtrCurrDax_Amp_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MtrCurrK1_Amp_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MtrCurrK2_Amp_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_MtrCurrQax_Amp_f32;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_SysCVSwitchADC_Cnt_u16;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16;
  P2VAR(Rte_DE_SInt8, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_AssistAssemblyPolarity_Cnt_s08;
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_CommOffset_Cnt_u16;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_MRFMtrVel_MtrRadpS_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_MtrCurr1TempOffset_Volt_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_MtrCurr2TempOffset_Volt_f32;
  P2VAR(Rte_DE_SInt8, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_MtrPosPolarity_Cnt_s08;
  P2VAR(Rte_DE_SInt16, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_MtrTrqCmdSign_Cnt_s16;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per2_Vecu_Volt_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_DftAsstTbl_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_DwnldAsstGain_Uls_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_ManufModeType, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_MEC_Cnt_enum;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_SInt8, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_MtrElecMechPolarity_Cnt_s08;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_PosTrajEnable_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_UInt32, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_SrlComSvcDft_Cnt_b32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_SA_CDDINTERFACE_APPL_VAR) CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

extern CONSTP2CONST(struct Rte_CDS_Sa_CDDInterface, RTE_CONST, RTE_CONST) Rte_Inst_Sa_CDDInterface;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1412348629
#    error "The magic number of the generated file <C:/Workspace/GM_C1XX_EPS_TMS570-General_Motors_working/C1xx/GM_C1XX_EPS_TMS570/SwProject/CDDInterface/utp/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1412348629
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
