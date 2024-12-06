/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EPS_DiagSrvcs_ISO.h file
* Module Description: Common Manufacturing Program Interface for XCP and ISO services
* Product           : Gen II Plus - EA3.0
* Author            : Kevin Smith
*
* Notes:
* This file contains configurations for ISO services.
*
*****************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          1 %
 * %derived_by:       czgng4 %
 * %date_modified:    Fri Jul 26 16:49:45 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 06/06/12 	1		KS		Initial Component Release
 * 09/26/12     2       JWJ     Added new service (F005, FD26, FD27, FD29) for DiagMgr & AvgFricLrn
 * 10/18/12     3       JWJ     Corrected anom 3645 for NRC compliance with spec v02A                           6401
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include area >>		                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "EPS_DiagSrvcs_CommonData.h"
#include "EPS_DiagSrvcs_SrvcLUTbl.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include area >>   		      		    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#ifndef EPS_DIAGSRVCS_ISO_H
#define EPS_DIAGSRVCS_ISO_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom include area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "EPS_DiagSrvcs_ISO.Interface.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom include area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom define area >>   		  	    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* The following define statements connect variables names to the names used within the
 * service functions. Common defines are shared across multiple services, and specific
 * defines are only included if the service above is active. */


/* Indexes for ISO variables */
#define D_ISOVAR_SWRELNUM			 1u
#define D_ISOVAR_CALRELNUM			 2u
#define D_ISOVAR_LEARNEDKE			 3u
#define D_ISOVAR_LEARNEDR			 4u
#define D_ISOVAR_VEHSPD_KPH			 5u
#define D_ISOVAR_EOLWHLIMBSEL		 6u
#define D_ISOVAR_EOLSRLCOMSVCDFT	 7u
#define D_ISOVAR_MRFCUMMTRPOS		 8u
#define D_ISOVAR_MTRTRQCMD			 9u
#define D_ISOVAR_SYSSTATE			 10u
#define D_ISOVAR_VEHSPDOVERRIDE		 11u
#define D_ISOVAR_DFTTRQSNSRDIAGSRVC	 12u
#define D_ISOVAR_NXTRMECCNTR		 13u
#define D_ISOVAR_ECUSERIALNUM		 14u
#define D_ISOVAR_EPSSERIALNUM		 15u
#define D_ISOVAR_HWPARTNUM			 16u
#define D_ISOVAR_NXTRMFGSCRPAD		 17u
#define D_ISOVAR_IGNCNTR			 18u
#define D_ISOVAR_BOOTRELNUM			 19u


/* Structure to share float data with serial comm data */
typedef struct EPS_DiagSrv_DataStr {
     union {
    	 float32 FloatData_f32;
    	 uint32  IntData_u32;
     }type;
} EPS_DiagSrv_DataStr;

/* function pointer types */
typedef CM_MsgBufferType (*PIDFuncRef)(VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR), P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR), P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR), VAR(uint8, EPSDIAGSRVCS_VAR), VAR(uint16, EPSDIAGSRVCS_VAR));
typedef uint8 (*RIDFuncRef)(P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR), P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR), VAR(uint16, EPSDIAGSRVCS_VAR));
typedef uint8 (*IOCFuncRef)(P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR), VAR(uint16, EPSDIAGSRVCS_VAR), VAR(uint16, EPSDIAGSRVCS_VAR));
typedef CM_MsgBufferType (*ResetFuncRef)(VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR), P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR));

/******************************************************************************
 *  --- GENERAL FUNCTION START ---
 *****************************************************************************/
extern FUNC(void, EPSDIAGSRVCS_CODE) EPS_DiagSessionChangeIndicator(CONST(uint8,EPSDIAGSRVCS_VAR) SesCtrlTypeOld, CONST(uint8,EPSDIAGSRVCS_VAR) SesCtrlTypeNew);
extern FUNC(void, EPSDIAGSRVCS_CODE) EPSDiagSrvcs_Task(void);
extern FUNC(void, EPSDIAGSRVCS_CODE) EPS_DiagSrvcs_Init(void);
extern FUNC(uint16, EPSXCPDIAGSRVCS_CODE) DiagSrvcs_PIDIdxSearch(VAR(uint16, EPSDIAGSRVCS_VAR) PID_Uls_T_u16);
extern FUNC(uint16, EPSDIAGSRVCS_CODE) DiagSrvcs_NRCTranslate(VAR(uint16, EPSDIAGSRVCS_VAR) DeveloperNrc_Uls_T_u16);
extern FUNC(void, EPSDIAGSRVCS_CODE) NxtrMEC_Init(void);
extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPS_ResetSrvc(VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLen_Cnt_T_u16);
extern FUNC(uint8, EPSDIAGSRVCS_CODE) DiagSrvRIDNullFunc (P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, VAR(uint8, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
extern FUNC(uint8, EPSDIAGSRVCS_CODE) DiagSrvIOCNullFunc (P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, VAR(uint8, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) DiagSrvResetNullFunc (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16);
extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) DiagSrvPIDNullFunc (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
/******************************************************************************
 *  --- GENERAL FUNCTION END ---
 *****************************************************************************/

/****************************************
 * Reset Services                       *
 ***************************************/
#if (D_EPS_DIAGSRV_RESET_1160 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_RESET_1160 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RESETNUM_1160	0x1160U
#else
	#define EPSInternal_RESET_1160	DiagSrvResetNullFunc
#endif /* D_EPS_DIAGSRV_RESET_1160 */

/****************************************
 * Routine I/O Services                 *
 ***************************************/
#if (D_EPS_DIAGSRV_RID_F000 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F000 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F000	0xF000U
#else
	#define EPSInternal_RID_F000	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F000 */

#if (D_EPS_DIAGSRV_RID_F001 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F001 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F001	0xF001U
#else
	#define EPSInternal_RID_F001	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F001 */

#if (D_EPS_DIAGSRV_RID_F002 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F002 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F002	0xF002U
#else
	#define EPSInternal_RID_F002	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F002 */

#if (D_EPS_DIAGSRV_RID_F003 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F003 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F003	0xF003U
#else
	#define EPSInternal_RID_F003	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F003 */

#if (D_EPS_DIAGSRV_RID_F004 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F004 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F004	0xF004U
#else
	#define EPSInternal_RID_F004	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F004 */

#if (D_EPS_DIAGSRV_RID_F005 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F005 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F005	0xF005U
#else
	#define EPSInternal_RID_F005	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F005 */

#if (D_EPS_DIAGSRV_RID_F006 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F006 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F006	0xF006U
#else
	#define EPSInternal_RID_F006	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F006 */

#if (D_EPS_DIAGSRV_RID_F007 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F007 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F007	0xF007U
#else
	#define EPSInternal_RID_F007	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F007 */

#if (D_EPS_DIAGSRV_RID_F008 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F008 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F008	0xF008U
#else
	#define EPSInternal_RID_F008	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F008 */

#if (D_EPS_DIAGSRV_RID_F009 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F009 (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F009	0xF009U
#else
	#define EPSInternal_RID_F009	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F009 */

#if (D_EPS_DIAGSRV_RID_F00A == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F00A (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F00A	0xF00AU
#else
	#define EPSInternal_RID_F00A	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F00A */

#if (D_EPS_DIAGSRV_RID_F00B == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F00B (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F00B	0xF00BU
#else
	#define EPSInternal_RID_F00B	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F00B */

#if (D_EPS_DIAGSRV_RID_F00D == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F00D (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F00D	0xF00DU
#else
	#define EPSInternal_RID_F00D	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F00D */

#if (D_EPS_DIAGSRV_RID_F00E == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_RID_F00E (P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_RIDNUM_F00E	0xF00EU
#else
	#define EPSInternal_RID_F00E	DiagSrvRIDNullFunc
#endif /* D_EPS_DIAGSRV_RID_F00E */


/****************************************
 * PID & I/O Control                    *
 ***************************************/
#if (D_EPS_DIAGSRV_PID_FD01 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD01 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD01	0xFD01U
#else
	#define EPSInternal_PID_FD01	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD01 */

#if (D_EPS_DIAGSRV_PID_FD02 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD02 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD02	0xFD02U
#else
	#define EPSInternal_PID_FD02	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD02 */

#if (D_EPS_DIAGSRV_PID_FD03 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD03 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD03	0xFD03U
#else
	#define EPSInternal_PID_FD03	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD03 */

#if (D_EPS_DIAGSRV_PID_FD04 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD04 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD04	0xFD04U
#else
	#define EPSInternal_PID_FD04	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD04 */

#if (D_EPS_DIAGSRV_PID_FD05 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD05 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD05	0xFD05U
#else
	#define EPSInternal_PID_FD05	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD05 */

#if (D_EPS_DIAGSRV_PID_FD06 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD06 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD06	0xFD06U
#else
	#define EPSInternal_PID_FD06	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD06 */

#if (D_EPS_DIAGSRV_PID_FD07 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD07 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD07	0xFD07U
#else
	#define EPSInternal_PID_FD07	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD07 */

#if (D_EPS_DIAGSRV_PID_FD08 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD08 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD08	0xFD08U
#else
	#define EPSInternal_PID_FD08	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD08 */

#if (D_EPS_DIAGSRV_PID_FD09 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD09 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD09	0xFD09U
#else
	#define EPSInternal_PID_FD09	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD09 */

#if (D_EPS_DIAGSRV_PID_FD0A == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD0A (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD0A	0xFD0AU
#else
	#define EPSInternal_PID_FD0A	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD0A */

#if (D_EPS_DIAGSRV_PID_FD0B == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD0B (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD0B	0xFD0BU
#else
	#define EPSInternal_PID_FD0B	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD0B */

#if (D_EPS_DIAGSRV_PID_FD0C == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD0C (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD0C	0xFD0CU
#else
	#define EPSInternal_PID_FD0C	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD0C */

#if (D_EPS_DIAGSRV_IOC_FD0D == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_IOC_FD0D (P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, VAR(uint8, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_IOCNUM_FD0D	0xFD0DU
#else
	#define EPSInternal_IOC_FD0D	DiagSrvIOCNullFunc
#endif /* D_EPS_DIAGSRV_IOC_FD0D */

#if (D_EPS_DIAGSRV_PID_FD0E == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD0E (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD0E	0xFD0EU
#else
	#define EPSInternal_PID_FD0E	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD0E */

#if (D_EPS_DIAGSRV_PID_FD0F == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD0F (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD0F	0xFD0FU
#else
	#define EPSInternal_PID_FD0F	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD0F */

#if (D_EPS_DIAGSRV_PID_FD10 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD10 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD10	0xFD10U
#else
	#define EPSInternal_PID_FD10	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD10 */

#if (D_EPS_DIAGSRV_IOC_FD11 == D_DIAGSRVC_ENABLED)
	extern FUNC(uint8, EPSDIAGSRVCS_CODE) EPSInternal_IOC_FD11 (P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08, VAR(uint8, EPSDIAGSRVCS_VAR) CtrlByteLen_Cnt_T_u08, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_IOCNUM_FD11	0xFD11U
#else
	#define EPSInternal_IOC_FD11	DiagSrvIOCNullFunc
#endif /* D_EPS_DIAGSRV_IOC_FD11 */

#if (D_EPS_DIAGSRV_PID_FD12 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD12 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD12	0xFD12U
#else
	#define EPSInternal_PID_FD12	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD12 */

#if (D_EPS_DIAGSRV_PID_FD13 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD13 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD13	0xFD13U
#else
	#define EPSInternal_PID_FD13	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD13 */

#if (D_EPS_DIAGSRV_PID_FD14 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD14 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD14	0xFD14U
#else
	#define EPSInternal_PID_FD14	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD14 */

#if (D_EPS_DIAGSRV_PID_FD15 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD15 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD15	0xFD15U
#else
	#define EPSInternal_PID_FD15	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD15 */

#if (D_EPS_DIAGSRV_PID_FD16 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD16 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD16	0xFD16U
#else
	#define EPSInternal_PID_FD16	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD16 */

#if (D_EPS_DIAGSRV_PID_FD18 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD18 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD18	0xFD18U
#else
	#define EPSInternal_PID_FD18	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD18 */

#if (D_EPS_DIAGSRV_PID_FD19 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD19 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD19	0xFD19U
#else
	#define EPSInternal_PID_FD19	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD19 */

#if (D_EPS_DIAGSRV_PID_FD1A == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD1A (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD1A	0xFD1AU
#else
	#define EPSInternal_PID_FD1A	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD1A */

#if (D_EPS_DIAGSRV_PID_FD1B == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD1B (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD1B	0xFD1BU
#else
	#define EPSInternal_PID_FD1B	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD1B */

#if (D_EPS_DIAGSRV_PID_FD1C == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD1C (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD1C	0xFD1CU
#else
	#define EPSInternal_PID_FD1C	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD1C */

#if (D_EPS_DIAGSRV_PID_FD1D == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD1D (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD1D	0xFD1DU
#else
	#define EPSInternal_PID_FD1D	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD1D */

#if (D_EPS_DIAGSRV_PID_FD1E == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD1E (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD1E	0xFD1EU
#else
	#define EPSInternal_PID_FD1E	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD1E */

#if (D_EPS_DIAGSRV_PID_FD1F == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD1F (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD1F	0xFD1FU
#else
	#define EPSInternal_PID_FD1F	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD1F */

#if (D_EPS_DIAGSRV_PID_FD21 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD21 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD21	0xFD21U
#else
	#define EPSInternal_PID_FD21	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD21 */

#if (D_EPS_DIAGSRV_PID_FD25 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD25 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD25	0xFD25U
#else
	#define EPSInternal_PID_FD25	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD25 */

#if (D_EPS_DIAGSRV_PID_FD26 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD26 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD26	0xFD26U
#else
	#define EPSInternal_PID_FD26	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD26 */

#if (D_EPS_DIAGSRV_PID_FD27 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD27 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD27	0xFD27U
#else
	#define EPSInternal_PID_FD27	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD27 */

#if (D_EPS_DIAGSRV_PID_FD29 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD29 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD29	0xFD29U
#else
	#define EPSInternal_PID_FD29	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD29 */

#if (D_EPS_DIAGSRV_PID_FD41 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FD41 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FD41	0xFD41U
#else
	#define EPSInternal_PID_FD41	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FD41 */

#if (D_EPS_DIAGSRV_PID_FDA0 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA0 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA0	0xFDA0U
#else
	#define EPSInternal_PID_FDA0	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA0 */

#if (D_EPS_DIAGSRV_PID_FDA1 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA1 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA1	0xFDA1U
#else
	#define EPSInternal_PID_FDA1	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA1 */

#if (D_EPS_DIAGSRV_PID_FDA2 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA2 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA2	0xFDA2U
#else
	#define EPSInternal_PID_FDA2	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA2 */

#if (D_EPS_DIAGSRV_PID_FDA3 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA3 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA3	0xFDA3U
#else
	#define EPSInternal_PID_FDA3	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA3 */

#if (D_EPS_DIAGSRV_PID_FDA4 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA4 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA4	0xFDA4U
#else
	#define EPSInternal_PID_FDA4	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA4 */

#if (D_EPS_DIAGSRV_PID_FDA5 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA5 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA5	0xFDA5U
#else
	#define EPSInternal_PID_FDA5	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA5 */

#if (D_EPS_DIAGSRV_PID_FDA7 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA7 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA7	0xFDA7U
#else
	#define EPSInternal_PID_FDA7	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA7 */

#if (D_EPS_DIAGSRV_PID_FDA8 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA8 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA8	0xFDA8U
#else
	#define EPSInternal_PID_FDA8	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA8 */

#if (D_EPS_DIAGSRV_PID_FDA9 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDA9 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDA9	0xFDA9U
#else
	#define EPSInternal_PID_FDA9	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDA9 */

#if (D_EPS_DIAGSRV_PID_FDAC == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDAC (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDAC	0xFDACU
#else
	#define EPSInternal_PID_FDAC	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDAC */

#if (D_EPS_DIAGSRV_PID_FDAD == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDAD (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDAD	0xFDADU
#else
	#define EPSInternal_PID_FDAD	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDAD */

#if (D_EPS_DIAGSRV_PID_FDAE == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDAE (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDAE	0xFDAEU
#else
	#define EPSInternal_PID_FDAE	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDAE */

#if (D_EPS_DIAGSRV_PID_FDAF == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDAF (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDAF	0xFDAFU
#else
	#define EPSInternal_PID_FDAF	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDAF */

#if (D_EPS_DIAGSRV_PID_FDB0 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB0 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB0	0xFDB0U
#else
	#define EPSInternal_PID_FDB0	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB0 */

#if (D_EPS_DIAGSRV_PID_FDB1 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB1 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB1	0xFDB1U
#else
	#define EPSInternal_PID_FDB1	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB1 */

#if (D_EPS_DIAGSRV_PID_FDB2 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB2 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB2	0xFDB2U
#else
	#define EPSInternal_PID_FDB2	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB2 */

#if (D_EPS_DIAGSRV_PID_FDB3 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB3 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB3	0xFDB3U
#else
	#define EPSInternal_PID_FDB3	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB3 */

#if (D_EPS_DIAGSRV_PID_FDB4 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB4 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB4	0xFDB4U
#else
	#define EPSInternal_PID_FDB4	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB4 */

#if (D_EPS_DIAGSRV_PID_FDB5 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB5 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB5	0xFDB5U
#else
	#define EPSInternal_PID_FDB5	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB5 */

#if (D_EPS_DIAGSRV_PID_FDB6 == D_DIAGSRVC_ENABLED)
	extern FUNC(CM_MsgBufferType, EPSDIAGSRVCS_CODE) EPSInternal_PID_FDB6 (VAR(CM_MsgBufferType, EPSDIAGSRVCS_VAR) pbDiagData, P2CONST(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReqLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) RespLength_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcReqType_Cnt_T_u8, VAR(uint16, EPSDIAGSRVCS_VAR) LUTidx_Cnt_T_u16);
	#define D_EPS_DIAGSRV_PIDNUM_FDB6	0xFDB6U
#else
	#define EPSInternal_PID_FDB6	DiagSrvPIDNullFunc
#endif /* D_EPS_DIAGSRV_PID_FDB6 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom define area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#endif /* EPS_DIAGSRVCS_ISO_H */
