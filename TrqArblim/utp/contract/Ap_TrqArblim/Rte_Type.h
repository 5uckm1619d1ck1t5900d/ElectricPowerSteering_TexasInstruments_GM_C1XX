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
 *     Workspace:  C:/SynergyWorkspace/WorkingProjects/TrqArblim-1.4/TrqArblim/autosar
 *     SW-C Type:  Ap_TrqArblim
 *  Generated at:  Wed Oct 15 16:03:40 2014
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

# define Rte_TypeDef_ESC_State_enum
typedef uint8 ESC_State_enum;
# define ESC_State_enum_LowerLimit ((ESC_State_enum)0u)
# define ESC_State_enum_UpperLimit ((ESC_State_enum)4u)
# if (defined RTE_CONST_ESC_Inactive) || (defined ESC_Inactive)
#  if (!defined RTE_CONST_ESC_Inactive) || (RTE_CONST_ESC_Inactive != 0u)
#   error "Enumeration constant <ESC_Inactive> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ESC_Inactive (0u)
#  define ESC_Inactive ((ESC_State_enum)0u)
# endif
# if (defined RTE_CONST_ESC_Active) || (defined ESC_Active)
#  if (!defined RTE_CONST_ESC_Active) || (RTE_CONST_ESC_Active != 1u)
#   error "Enumeration constant <ESC_Active> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ESC_Active (1u)
#  define ESC_Active ((ESC_State_enum)1u)
# endif
# if (defined RTE_CONST_ESC_TemporarilyLimited) || (defined ESC_TemporarilyLimited)
#  if (!defined RTE_CONST_ESC_TemporarilyLimited) || (RTE_CONST_ESC_TemporarilyLimited != 2u)
#   error "Enumeration constant <ESC_TemporarilyLimited> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ESC_TemporarilyLimited (2u)
#  define ESC_TemporarilyLimited ((ESC_State_enum)2u)
# endif
# if (defined RTE_CONST_ESC_PermanentlyFailed) || (defined ESC_PermanentlyFailed)
#  if (!defined RTE_CONST_ESC_PermanentlyFailed) || (RTE_CONST_ESC_PermanentlyFailed != 3u)
#   error "Enumeration constant <ESC_PermanentlyFailed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ESC_PermanentlyFailed (3u)
#  define ESC_PermanentlyFailed ((ESC_State_enum)3u)
# endif
# if (defined RTE_CONST_ESC_ManufacturingDisable) || (defined ESC_ManufacturingDisable)
#  if (!defined RTE_CONST_ESC_ManufacturingDisable) || (RTE_CONST_ESC_ManufacturingDisable != 4u)
#   error "Enumeration constant <ESC_ManufacturingDisable> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ESC_ManufacturingDisable (4u)
#  define ESC_ManufacturingDisable ((ESC_State_enum)4u)
# endif

# define Rte_TypeDef_FltInjectionLocType
typedef uint8 FltInjectionLocType;
# define FltInjectionLocType_LowerLimit ((FltInjectionLocType)0u)
# define FltInjectionLocType_UpperLimit ((FltInjectionLocType)255u)
# if (defined RTE_CONST_FLTINJ_ASSIST) || (defined FLTINJ_ASSIST)
#  if (!defined RTE_CONST_FLTINJ_ASSIST) || (RTE_CONST_FLTINJ_ASSIST != 1u)
#   error "Enumeration constant <FLTINJ_ASSIST> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_ASSIST (1u)
#  define FLTINJ_ASSIST ((FltInjectionLocType)1u)
# endif
# if (defined RTE_CONST_FLTINJ_RETURN) || (defined FLTINJ_RETURN)
#  if (!defined RTE_CONST_FLTINJ_RETURN) || (RTE_CONST_FLTINJ_RETURN != 2u)
#   error "Enumeration constant <FLTINJ_RETURN> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_RETURN (2u)
#  define FLTINJ_RETURN ((FltInjectionLocType)2u)
# endif
# if (defined RTE_CONST_FLTINJ_DAMPING) || (defined FLTINJ_DAMPING)
#  if (!defined RTE_CONST_FLTINJ_DAMPING) || (RTE_CONST_FLTINJ_DAMPING != 3u)
#   error "Enumeration constant <FLTINJ_DAMPING> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_DAMPING (3u)
#  define FLTINJ_DAMPING ((FltInjectionLocType)3u)
# endif
# if (defined RTE_CONST_FLTINJ_ASSTSUMNLMT) || (defined FLTINJ_ASSTSUMNLMT)
#  if (!defined RTE_CONST_FLTINJ_ASSTSUMNLMT) || (RTE_CONST_FLTINJ_ASSTSUMNLMT != 4u)
#   error "Enumeration constant <FLTINJ_ASSTSUMNLMT> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_ASSTSUMNLMT (4u)
#  define FLTINJ_ASSTSUMNLMT ((FltInjectionLocType)4u)
# endif
# if (defined RTE_CONST_FLTINJ_AVGFRICLRN) || (defined FLTINJ_AVGFRICLRN)
#  if (!defined RTE_CONST_FLTINJ_AVGFRICLRN) || (RTE_CONST_FLTINJ_AVGFRICLRN != 7u)
#   error "Enumeration constant <FLTINJ_AVGFRICLRN> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_AVGFRICLRN (7u)
#  define FLTINJ_AVGFRICLRN ((FltInjectionLocType)7u)
# endif
# if (defined RTE_CONST_FLTINJ_VECU_BATTERYVOLTAGE) || (defined FLTINJ_VECU_BATTERYVOLTAGE)
#  if (!defined RTE_CONST_FLTINJ_VECU_BATTERYVOLTAGE) || (RTE_CONST_FLTINJ_VECU_BATTERYVOLTAGE != 8u)
#   error "Enumeration constant <FLTINJ_VECU_BATTERYVOLTAGE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_VECU_BATTERYVOLTAGE (8u)
#  define FLTINJ_VECU_BATTERYVOLTAGE ((FltInjectionLocType)8u)
# endif
# if (defined RTE_CONST_FLTINJ_HYSTCOMP) || (defined FLTINJ_HYSTCOMP)
#  if (!defined RTE_CONST_FLTINJ_HYSTCOMP) || (RTE_CONST_FLTINJ_HYSTCOMP != 12u)
#   error "Enumeration constant <FLTINJ_HYSTCOMP> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_HYSTCOMP (12u)
#  define FLTINJ_HYSTCOMP ((FltInjectionLocType)12u)
# endif
# if (defined RTE_CONST_FLTINJ_INERTIACOMP) || (defined FLTINJ_INERTIACOMP)
#  if (!defined RTE_CONST_FLTINJ_INERTIACOMP) || (RTE_CONST_FLTINJ_INERTIACOMP != 14u)
#   error "Enumeration constant <FLTINJ_INERTIACOMP> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_INERTIACOMP (14u)
#  define FLTINJ_INERTIACOMP ((FltInjectionLocType)14u)
# endif
# if (defined RTE_CONST_FLTINJ_EOTDAMPING_ETDMPFW) || (defined FLTINJ_EOTDAMPING_ETDMPFW)
#  if (!defined RTE_CONST_FLTINJ_EOTDAMPING_ETDMPFW) || (RTE_CONST_FLTINJ_EOTDAMPING_ETDMPFW != 27u)
#   error "Enumeration constant <FLTINJ_EOTDAMPING_ETDMPFW> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_EOTDAMPING_ETDMPFW (27u)
#  define FLTINJ_EOTDAMPING_ETDMPFW ((FltInjectionLocType)27u)
# endif
# if (defined RTE_CONST_FLTINJ_STABILITYCOMP) || (defined FLTINJ_STABILITYCOMP)
#  if (!defined RTE_CONST_FLTINJ_STABILITYCOMP) || (RTE_CONST_FLTINJ_STABILITYCOMP != 29u)
#   error "Enumeration constant <FLTINJ_STABILITYCOMP> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_STABILITYCOMP (29u)
#  define FLTINJ_STABILITYCOMP ((FltInjectionLocType)29u)
# endif
# if (defined RTE_CONST_FLTINJ_TRQBASEDINRTCOMP) || (defined FLTINJ_TRQBASEDINRTCOMP)
#  if (!defined RTE_CONST_FLTINJ_TRQBASEDINRTCOMP) || (RTE_CONST_FLTINJ_TRQBASEDINRTCOMP != 30u)
#   error "Enumeration constant <FLTINJ_TRQBASEDINRTCOMP> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_TRQBASEDINRTCOMP (30u)
#  define FLTINJ_TRQBASEDINRTCOMP ((FltInjectionLocType)30u)
# endif
# if (defined RTE_CONST_FLTINJ_SRLCOMVEHSPD_SGNLCOND) || (defined FLTINJ_SRLCOMVEHSPD_SGNLCOND)
#  if (!defined RTE_CONST_FLTINJ_SRLCOMVEHSPD_SGNLCOND) || (RTE_CONST_FLTINJ_SRLCOMVEHSPD_SGNLCOND != 33u)
#   error "Enumeration constant <FLTINJ_SRLCOMVEHSPD_SGNLCOND> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_SRLCOMVEHSPD_SGNLCOND (33u)
#  define FLTINJ_SRLCOMVEHSPD_SGNLCOND ((FltInjectionLocType)33u)
# endif
# if (defined RTE_CONST_FLTINJ_ASSTFIREWALL) || (defined FLTINJ_ASSTFIREWALL)
#  if (!defined RTE_CONST_FLTINJ_ASSTFIREWALL) || (RTE_CONST_FLTINJ_ASSTFIREWALL != 34u)
#   error "Enumeration constant <FLTINJ_ASSTFIREWALL> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_ASSTFIREWALL (34u)
#  define FLTINJ_ASSTFIREWALL ((FltInjectionLocType)34u)
# endif
# if (defined RTE_CONST_FLTINJ_ASSTEOTGAIN_LMTCOD) || (defined FLTINJ_ASSTEOTGAIN_LMTCOD)
#  if (!defined RTE_CONST_FLTINJ_ASSTEOTGAIN_LMTCOD) || (RTE_CONST_FLTINJ_ASSTEOTGAIN_LMTCOD != 38u)
#   error "Enumeration constant <FLTINJ_ASSTEOTGAIN_LMTCOD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_ASSTEOTGAIN_LMTCOD (38u)
#  define FLTINJ_ASSTEOTGAIN_LMTCOD ((FltInjectionLocType)38u)
# endif
# if (defined RTE_CONST_FLTINJ_DIGHWTRQSENT_T1FAULT) || (defined FLTINJ_DIGHWTRQSENT_T1FAULT)
#  if (!defined RTE_CONST_FLTINJ_DIGHWTRQSENT_T1FAULT) || (RTE_CONST_FLTINJ_DIGHWTRQSENT_T1FAULT != 41u)
#   error "Enumeration constant <FLTINJ_DIGHWTRQSENT_T1FAULT> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_DIGHWTRQSENT_T1FAULT (41u)
#  define FLTINJ_DIGHWTRQSENT_T1FAULT ((FltInjectionLocType)41u)
# endif
# if (defined RTE_CONST_FLTINJ_DIGHWTRQSENT_T2FAULT) || (defined FLTINJ_DIGHWTRQSENT_T2FAULT)
#  if (!defined RTE_CONST_FLTINJ_DIGHWTRQSENT_T2FAULT) || (RTE_CONST_FLTINJ_DIGHWTRQSENT_T2FAULT != 42u)
#   error "Enumeration constant <FLTINJ_DIGHWTRQSENT_T2FAULT> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_DIGHWTRQSENT_T2FAULT (42u)
#  define FLTINJ_DIGHWTRQSENT_T2FAULT ((FltInjectionLocType)42u)
# endif
# if (defined RTE_CONST_FLTINJ_TRQOVLSTA_LKAFAULT) || (defined FLTINJ_TRQOVLSTA_LKAFAULT)
#  if (!defined RTE_CONST_FLTINJ_TRQOVLSTA_LKAFAULT) || (RTE_CONST_FLTINJ_TRQOVLSTA_LKAFAULT != 91u)
#   error "Enumeration constant <FLTINJ_TRQOVLSTA_LKAFAULT> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_TRQOVLSTA_LKAFAULT (91u)
#  define FLTINJ_TRQOVLSTA_LKAFAULT ((FltInjectionLocType)91u)
# endif
# if (defined RTE_CONST_FLTINJ_TRQARBLIM_LKACMD) || (defined FLTINJ_TRQARBLIM_LKACMD)
#  if (!defined RTE_CONST_FLTINJ_TRQARBLIM_LKACMD) || (RTE_CONST_FLTINJ_TRQARBLIM_LKACMD != 101u)
#   error "Enumeration constant <FLTINJ_TRQARBLIM_LKACMD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_TRQARBLIM_LKACMD (101u)
#  define FLTINJ_TRQARBLIM_LKACMD ((FltInjectionLocType)101u)
# endif
# if (defined RTE_CONST_FLTINJ_DDASTFACTRQST_DRVDYNCTRL) || (defined FLTINJ_DDASTFACTRQST_DRVDYNCTRL)
#  if (!defined RTE_CONST_FLTINJ_DDASTFACTRQST_DRVDYNCTRL) || (RTE_CONST_FLTINJ_DDASTFACTRQST_DRVDYNCTRL != 150u)
#   error "Enumeration constant <FLTINJ_DDASTFACTRQST_DRVDYNCTRL> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_DDASTFACTRQST_DRVDYNCTRL (150u)
#  define FLTINJ_DDASTFACTRQST_DRVDYNCTRL ((FltInjectionLocType)150u)
# endif
# if (defined RTE_CONST_FLTINJ_DDDMPFACTRQST_DRVDYNCTRL) || (defined FLTINJ_DDDMPFACTRQST_DRVDYNCTRL)
#  if (!defined RTE_CONST_FLTINJ_DDDMPFACTRQST_DRVDYNCTRL) || (RTE_CONST_FLTINJ_DDDMPFACTRQST_DRVDYNCTRL != 151u)
#   error "Enumeration constant <FLTINJ_DDDMPFACTRQST_DRVDYNCTRL> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_DDDMPFACTRQST_DRVDYNCTRL (151u)
#  define FLTINJ_DDDMPFACTRQST_DRVDYNCTRL ((FltInjectionLocType)151u)
# endif
# if (defined RTE_CONST_FLTINJ_DDRTNFACTRQST_DRVDYNCTRL) || (defined FLTINJ_DDRTNFACTRQST_DRVDYNCTRL)
#  if (!defined RTE_CONST_FLTINJ_DDRTNFACTRQST_DRVDYNCTRL) || (RTE_CONST_FLTINJ_DDRTNFACTRQST_DRVDYNCTRL != 152u)
#   error "Enumeration constant <FLTINJ_DDRTNFACTRQST_DRVDYNCTRL> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_DDRTNFACTRQST_DRVDYNCTRL (152u)
#  define FLTINJ_DDRTNFACTRQST_DRVDYNCTRL ((FltInjectionLocType)152u)
# endif
# if (defined RTE_CONST_FLTINJ_OUTPUTRAMPMULT_LMTCOD) || (defined FLTINJ_OUTPUTRAMPMULT_LMTCOD)
#  if (!defined RTE_CONST_FLTINJ_OUTPUTRAMPMULT_LMTCOD) || (RTE_CONST_FLTINJ_OUTPUTRAMPMULT_LMTCOD != 153u)
#   error "Enumeration constant <FLTINJ_OUTPUTRAMPMULT_LMTCOD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_OUTPUTRAMPMULT_LMTCOD (153u)
#  define FLTINJ_OUTPUTRAMPMULT_LMTCOD ((FltInjectionLocType)153u)
# endif
# if (defined RTE_CONST_FLTINJ_ASSTEOTLIMIT_LMTCOD) || (defined FLTINJ_ASSTEOTLIMIT_LMTCOD)
#  if (!defined RTE_CONST_FLTINJ_ASSTEOTLIMIT_LMTCOD) || (RTE_CONST_FLTINJ_ASSTEOTLIMIT_LMTCOD != 154u)
#   error "Enumeration constant <FLTINJ_ASSTEOTLIMIT_LMTCOD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_ASSTEOTLIMIT_LMTCOD (154u)
#  define FLTINJ_ASSTEOTLIMIT_LMTCOD ((FltInjectionLocType)154u)
# endif
# if (defined RTE_CONST_FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND) || (defined FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND)
#  if (!defined RTE_CONST_FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND) || (RTE_CONST_FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND != 155u)
#   error "Enumeration constant <FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND (155u)
#  define FLTINJ_SRLCOMVEHLONACCEL_SGNLCOND ((FltInjectionLocType)155u)
# endif
# if (defined RTE_CONST_FLTINJ_ANAHWTORQUE) || (defined FLTINJ_ANAHWTORQUE)
#  if (!defined RTE_CONST_FLTINJ_ANAHWTORQUE) || (RTE_CONST_FLTINJ_ANAHWTORQUE != 156u)
#   error "Enumeration constant <FLTINJ_ANAHWTORQUE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_ANAHWTORQUE (156u)
#  define FLTINJ_ANAHWTORQUE ((FltInjectionLocType)156u)
# endif
# if (defined RTE_CONST_FLTINJ_MTRVEL) || (defined FLTINJ_MTRVEL)
#  if (!defined RTE_CONST_FLTINJ_MTRVEL) || (RTE_CONST_FLTINJ_MTRVEL != 160u)
#   error "Enumeration constant <FLTINJ_MTRVEL> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_MTRVEL (160u)
#  define FLTINJ_MTRVEL ((FltInjectionLocType)160u)
# endif
# if (defined RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD) || (defined FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD)
#  if (!defined RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD) || (RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD != 200u)
#   error "Enumeration constant <FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD (200u)
#  define FLTINJ_PRKASTMFGSERVCH2_PRKASSISTCMD ((FltInjectionLocType)200u)
# endif
# if (defined RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR) || (defined FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR)
#  if (!defined RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR) || (RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR != 201u)
#   error "Enumeration constant <FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR (201u)
#  define FLTINJ_PRKASTMFGSERVCH2_LRNPNCNTR ((FltInjectionLocType)201u)
# endif

# define Rte_TypeDef_Haptic_State_enum
typedef uint8 Haptic_State_enum;
# define Haptic_State_enum_LowerLimit ((Haptic_State_enum)0u)
# define Haptic_State_enum_UpperLimit ((Haptic_State_enum)2u)
# if (defined RTE_CONST_Haptic_Inactive) || (defined Haptic_Inactive)
#  if (!defined RTE_CONST_Haptic_Inactive) || (RTE_CONST_Haptic_Inactive != 0u)
#   error "Enumeration constant <Haptic_Inactive> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_Haptic_Inactive (0u)
#  define Haptic_Inactive ((Haptic_State_enum)0u)
# endif
# if (defined RTE_CONST_Haptic_Active) || (defined Haptic_Active)
#  if (!defined RTE_CONST_Haptic_Active) || (RTE_CONST_Haptic_Active != 1u)
#   error "Enumeration constant <Haptic_Active> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_Haptic_Active (1u)
#  define Haptic_Active ((Haptic_State_enum)1u)
# endif
# if (defined RTE_CONST_Haptic_Waiting) || (defined Haptic_Waiting)
#  if (!defined RTE_CONST_Haptic_Waiting) || (RTE_CONST_Haptic_Waiting != 2u)
#   error "Enumeration constant <Haptic_Waiting> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_Haptic_Waiting (2u)
#  define Haptic_Waiting ((Haptic_State_enum)2u)
# endif

# define Rte_TypeDef_LKA_State_enum
typedef uint8 LKA_State_enum;
# define LKA_State_enum_LowerLimit ((LKA_State_enum)0u)
# define LKA_State_enum_UpperLimit ((LKA_State_enum)4u)
# if (defined RTE_CONST_LKA_Inactive) || (defined LKA_Inactive)
#  if (!defined RTE_CONST_LKA_Inactive) || (RTE_CONST_LKA_Inactive != 0u)
#   error "Enumeration constant <LKA_Inactive> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_LKA_Inactive (0u)
#  define LKA_Inactive ((LKA_State_enum)0u)
# endif
# if (defined RTE_CONST_LKA_Active) || (defined LKA_Active)
#  if (!defined RTE_CONST_LKA_Active) || (RTE_CONST_LKA_Active != 1u)
#   error "Enumeration constant <LKA_Active> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_LKA_Active (1u)
#  define LKA_Active ((LKA_State_enum)1u)
# endif
# if (defined RTE_CONST_LKA_TemporarilyLimited) || (defined LKA_TemporarilyLimited)
#  if (!defined RTE_CONST_LKA_TemporarilyLimited) || (RTE_CONST_LKA_TemporarilyLimited != 2u)
#   error "Enumeration constant <LKA_TemporarilyLimited> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_LKA_TemporarilyLimited (2u)
#  define LKA_TemporarilyLimited ((LKA_State_enum)2u)
# endif
# if (defined RTE_CONST_LKA_PermanentlyFailed) || (defined LKA_PermanentlyFailed)
#  if (!defined RTE_CONST_LKA_PermanentlyFailed) || (RTE_CONST_LKA_PermanentlyFailed != 3u)
#   error "Enumeration constant <LKA_PermanentlyFailed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_LKA_PermanentlyFailed (3u)
#  define LKA_PermanentlyFailed ((LKA_State_enum)3u)
# endif
# if (defined RTE_CONST_LKA_ManufacturingDisable) || (defined LKA_ManufacturingDisable)
#  if (!defined RTE_CONST_LKA_ManufacturingDisable) || (RTE_CONST_LKA_ManufacturingDisable != 4u)
#   error "Enumeration constant <LKA_ManufacturingDisable> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_LKA_ManufacturingDisable (4u)
#  define LKA_ManufacturingDisable ((LKA_State_enum)4u)
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

# if (defined RTE_CONST_D_2MS_SEC_F32) || (defined D_2MS_SEC_F32)
#  if (!defined RTE_CONST_D_2MS_SEC_F32) || (RTE_CONST_D_2MS_SEC_F32 != 0.002)
#   error "Constant value <D_2MS_SEC_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_2MS_SEC_F32 (0.002)
#  define D_2MS_SEC_F32 ((Float)0.002)
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
  Float value;
} Rte_DE_Float;

typedef struct
{
  ESC_State_enum value;
} Rte_DE_ESC_State_enum;

typedef struct
{
  Haptic_State_enum value;
} Rte_DE_Haptic_State_enum;

typedef struct
{
  LKA_State_enum value;
} Rte_DE_LKA_State_enum;

typedef struct
{
  Boolean value;
} Rte_DE_Boolean;


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Ap_TrqArblim
{
  /* Data Handles section */
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_AssistDDFactor_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_DampingDDFactor_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_ESCCmd_HwNm_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_ESCIsLimited_Cnt_lgc;
  P2VAR(Rte_DE_ESC_State_enum, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_ESCState_State_enum;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_ESCTorqueDelivered_HwNm_f32;
  P2VAR(Rte_DE_Haptic_State_enum, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_GMOSHOscillate_State_enum;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_HwTorque_HwNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_IqTrqOv_HwNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_LKACmd_HwNm_f32;
  P2VAR(Rte_DE_LKA_State_enum, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_LKAState_State_enum;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_LKATorqueDelivered_HwNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_MaxSecureVehicleSpeed_Kph_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_OpTrqOv_MtrNm_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_PosServEnable_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_PosSrvoCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_ReturnDDFactor_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_TRQARBLIM_APPL_VAR) TrqArblim_Per1_TrqOscCmd_MtrNm_f32;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

extern CONSTP2CONST(struct Rte_CDS_Ap_TrqArblim, RTE_CONST, RTE_CONST) Rte_Inst_Ap_TrqArblim;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1413255496
#    error "The magic number of the generated file <C:/SynergyWorkspace/WorkingProjects/TrqArblim-1.4/TrqArblim/utp/contract/Ap_TrqArblim/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1413255496
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
