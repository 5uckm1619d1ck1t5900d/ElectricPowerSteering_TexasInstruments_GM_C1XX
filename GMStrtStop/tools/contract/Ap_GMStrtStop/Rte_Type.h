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
 *          File:  Rte_Type.h
 *     Workspace:  C:/Synergy_EA3/working/GMStrtStop/autosar
 *     SW-C Type:  Ap_GMStrtStop
 *  Generated at:  Fri Jun  3 11:21:05 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
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
# define Float_LowerLimit ((Float)-FLT_MAX)
# define Float_UpperLimit ((Float)FLT_MAX)

# define Rte_TypeDef_APA_State_enum
typedef uint8 APA_State_enum;
# define APA_State_enum_LowerLimit ((APA_State_enum)0u)
# define APA_State_enum_UpperLimit ((APA_State_enum)4u)
# if (defined RTE_CONST_APA_TempInhibit) || (defined APA_TempInhibit)
#  if (!defined RTE_CONST_APA_TempInhibit) || (RTE_CONST_APA_TempInhibit != 0u)
#   error "Enumeration constant <APA_TempInhibit> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_APA_TempInhibit (0u)
#  define APA_TempInhibit ((APA_State_enum)0u)
# endif
# if (defined RTE_CONST_APA_AvailCntrl) || (defined APA_AvailCntrl)
#  if (!defined RTE_CONST_APA_AvailCntrl) || (RTE_CONST_APA_AvailCntrl != 1u)
#   error "Enumeration constant <APA_AvailCntrl> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_APA_AvailCntrl (1u)
#  define APA_AvailCntrl ((APA_State_enum)1u)
# endif
# if (defined RTE_CONST_APA_Active) || (defined APA_Active)
#  if (!defined RTE_CONST_APA_Active) || (RTE_CONST_APA_Active != 2u)
#   error "Enumeration constant <APA_Active> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_APA_Active (2u)
#  define APA_Active ((APA_State_enum)2u)
# endif
# if (defined RTE_CONST_APA_PermanentlyFailed) || (defined APA_PermanentlyFailed)
#  if (!defined RTE_CONST_APA_PermanentlyFailed) || (RTE_CONST_APA_PermanentlyFailed != 3u)
#   error "Enumeration constant <APA_PermanentlyFailed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_APA_PermanentlyFailed (3u)
#  define APA_PermanentlyFailed ((APA_State_enum)3u)
# endif
# if (defined RTE_CONST_APA_ManufacturingDisable) || (defined APA_ManufacturingDisable)
#  if (!defined RTE_CONST_APA_ManufacturingDisable) || (RTE_CONST_APA_ManufacturingDisable != 4u)
#   error "Enumeration constant <APA_ManufacturingDisable> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_APA_ManufacturingDisable (4u)
#  define APA_ManufacturingDisable ((APA_State_enum)4u)
# endif

# define Rte_TypeDef_SS_State_enum
typedef uint8 SS_State_enum;
# define SS_State_enum_LowerLimit ((SS_State_enum)0u)
# define SS_State_enum_UpperLimit ((SS_State_enum)5u)
# if (defined RTE_CONST_SS_Normal) || (defined SS_Normal)
#  if (!defined RTE_CONST_SS_Normal) || (RTE_CONST_SS_Normal != 0u)
#   error "Enumeration constant <SS_Normal> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_SS_Normal (0u)
#  define SS_Normal ((SS_State_enum)0u)
# endif
# if (defined RTE_CONST_SS_Intermediate1) || (defined SS_Intermediate1)
#  if (!defined RTE_CONST_SS_Intermediate1) || (RTE_CONST_SS_Intermediate1 != 1u)
#   error "Enumeration constant <SS_Intermediate1> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_SS_Intermediate1 (1u)
#  define SS_Intermediate1 ((SS_State_enum)1u)
# endif
# if (defined RTE_CONST_SS_Stop) || (defined SS_Stop)
#  if (!defined RTE_CONST_SS_Stop) || (RTE_CONST_SS_Stop != 2u)
#   error "Enumeration constant <SS_Stop> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_SS_Stop (2u)
#  define SS_Stop ((SS_State_enum)2u)
# endif
# if (defined RTE_CONST_SS_Intermediate2) || (defined SS_Intermediate2)
#  if (!defined RTE_CONST_SS_Intermediate2) || (RTE_CONST_SS_Intermediate2 != 3u)
#   error "Enumeration constant <SS_Intermediate2> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_SS_Intermediate2 (3u)
#  define SS_Intermediate2 ((SS_State_enum)3u)
# endif
# if (defined RTE_CONST_SS_Fault) || (defined SS_Fault)
#  if (!defined RTE_CONST_SS_Fault) || (RTE_CONST_SS_Fault != 4u)
#   error "Enumeration constant <SS_Fault> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_SS_Fault (4u)
#  define SS_Fault ((SS_State_enum)4u)
# endif
# if (defined RTE_CONST_SS_Disable) || (defined SS_Disable)
#  if (!defined RTE_CONST_SS_Disable) || (RTE_CONST_SS_Disable != 5u)
#   error "Enumeration constant <SS_Disable> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_SS_Disable (5u)
#  define SS_Disable ((SS_State_enum)5u)
# endif


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Double
typedef float64 Double;
#  define Double_LowerLimit ((Double)-DBL_MAX)
#  define Double_UpperLimit ((Double)DBL_MAX)

#  define Rte_TypeDef_SInt16
typedef sint16 SInt16;
#  define SInt16_LowerLimit ((SInt16)-32768)
#  define SInt16_UpperLimit ((SInt16)32767)

#  define Rte_TypeDef_SInt32
typedef sint32 SInt32;
#  define SInt32_LowerLimit ((SInt32)-2147483648)
#  define SInt32_UpperLimit ((SInt32)2147483647)

#  define Rte_TypeDef_SInt4
typedef sint8 SInt4;
#  define SInt4_LowerLimit ((SInt4)-8)
#  define SInt4_UpperLimit ((SInt4)7)

#  define Rte_TypeDef_SInt8
typedef sint8 SInt8;
#  define SInt8_LowerLimit ((SInt8)-128)
#  define SInt8_UpperLimit ((SInt8)127)

#  define Rte_TypeDef_UInt16
typedef uint16 UInt16;
#  define UInt16_LowerLimit ((UInt16)0u)
#  define UInt16_UpperLimit ((UInt16)65535u)

#  define Rte_TypeDef_UInt32
typedef uint32 UInt32;
#  define UInt32_LowerLimit ((UInt32)0u)
#  define UInt32_UpperLimit ((UInt32)4294967295u)

#  define Rte_TypeDef_UInt4
typedef uint8 UInt4;
#  define UInt4_LowerLimit ((UInt4)0u)
#  define UInt4_UpperLimit ((UInt4)15u)

#  define Rte_TypeDef_UInt8
typedef uint8 UInt8;
#  define UInt8_LowerLimit ((UInt8)0u)
#  define UInt8_UpperLimit ((UInt8)255u)

# endif


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
typedef uint8 Rte_ModeType_StaMd_Mode;

# define RTE_MODE_StaMd_Mode_DISABLE ((Rte_ModeType_StaMd_Mode)0)
# define RTE_MODE_StaMd_Mode_OFF ((Rte_ModeType_StaMd_Mode)1)
# define RTE_MODE_StaMd_Mode_OPERATE ((Rte_ModeType_StaMd_Mode)2)
# define RTE_MODE_StaMd_Mode_WARMINIT ((Rte_ModeType_StaMd_Mode)3)
# define RTE_TRANSITION_StaMd_Mode ((Rte_ModeType_StaMd_Mode)4)


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# if (defined RTE_CONST_D_FALSE_CNT_LGC) || (defined D_FALSE_CNT_LGC)
#  if (!defined RTE_CONST_D_FALSE_CNT_LGC) || (RTE_CONST_D_FALSE_CNT_LGC != FALSE)
#   error "Constant value <D_FALSE_CNT_LGC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_FALSE_CNT_LGC (FALSE)
#  define D_FALSE_CNT_LGC ((Boolean)FALSE)
# endif

# if (defined RTE_CONST_D_180OVRPI_ULS_F32) || (defined D_180OVRPI_ULS_F32)
#  if (!defined RTE_CONST_D_180OVRPI_ULS_F32) || (RTE_CONST_D_180OVRPI_ULS_F32 != 57.295779513082)
#   error "Constant value <D_180OVRPI_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_180OVRPI_ULS_F32 (57.295779513082)
#  define D_180OVRPI_ULS_F32 ((Float)57.295779513082)
# endif

# if (defined RTE_CONST_D_MSECPERSEC_ULS_F32) || (defined D_MSECPERSEC_ULS_F32)
#  if (!defined RTE_CONST_D_MSECPERSEC_ULS_F32) || (RTE_CONST_D_MSECPERSEC_ULS_F32 != 1000)
#   error "Constant value <D_MSECPERSEC_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_MSECPERSEC_ULS_F32 (1000)
#  define D_MSECPERSEC_ULS_F32 ((Float)1000)
# endif

# if (defined RTE_CONST_D_ONE_ULS_F32) || (defined D_ONE_ULS_F32)
#  if (!defined RTE_CONST_D_ONE_ULS_F32) || (RTE_CONST_D_ONE_ULS_F32 != 1)
#   error "Constant value <D_ONE_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ONE_ULS_F32 (1)
#  define D_ONE_ULS_F32 ((Float)1)
# endif

# if (defined RTE_CONST_D_ZERO_ULS_F32) || (defined D_ZERO_ULS_F32)
#  if (!defined RTE_CONST_D_ZERO_ULS_F32) || (RTE_CONST_D_ZERO_ULS_F32 != 0)
#   error "Constant value <D_ZERO_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_ULS_F32 (0)
#  define D_ZERO_ULS_F32 ((Float)0)
# endif



/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  APA_State_enum value;
} Rte_DE_APA_State_enum;

typedef struct
{
  Float value;
} Rte_DE_Float;

typedef struct
{
  Boolean value;
} Rte_DE_Boolean;

typedef struct
{
  SS_State_enum value;
} Rte_DE_SS_State_enum;


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Ap_GMStrtStop
{
  /* Data Handles section */
  P2VAR(Rte_DE_APA_State_enum, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_APAState_State_enum;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_EngSpd_Rpm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_HandwheelVelocity_HwRadpS_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_HwTorque_HwNm_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_SS12VFault_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_SSScale_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_SSSlew_UlspS_f32;
  P2VAR(Rte_DE_SS_State_enum, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_SSState_State_enum;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_GMSTRTSTOP_APPL_VAR) StrtStop_Per1_VehicleSpeed_Kph_f32;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

extern CONSTP2CONST(struct Rte_CDS_Ap_GMStrtStop, RTE_CONST, RTE_CONST) Rte_Inst_Ap_GMStrtStop;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1464973456
#    error "The magic number of the generated file <C:/Synergy_EA3/working/GMStrtStop/tools/contract/Ap_GMStrtStop/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1464973456
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
