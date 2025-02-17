/***********************************************************************************************************************
* Copyright 2013 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EPS_DiagSrvcs_ISO.Customer.c file
* Module Description: Common Manufacturing services
* Product           : Gen II Plus - EA3.0
* Author            : czgng4
*
* Notes:
* This file contains configurations for ISO services.
*
***********************************************************************************************************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                 DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          EA3#12 %
 * %derived_by:       fz9hxm %
 * %date_modified:    Fri Oct 25 09:39:31 2013 %
 * --------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                           SCR #
 * --------  -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 09/12/13  3        LWW       Added new customer specific nexteer services
 * 09/30/13  4        LWW       Updates per new CMS configuration
 * 10/25/13  5        BWL       Added FDB7 service, file changes due to generator updates.
 * 03/03/14  6        BWL       Replace TEMP_DigHwTrqSENT_SCom_ReadTrim with component version.
 * 11/20/14  7        JWJ       A7333: Properly implemented FEEF service for WIR                                12617
 * 01/26/15  8        JWJ       ICR-4709: Updates for cyber security implementation                             12851
 * 02/02/15  9        JWJ       A7745: Corrected WIR enable write to set proper flag value                      12886
 * 04/12/16  10       CP        Integrated CMS_Common_10B.1 and added CM_CyberSecNexteerLocked_Cnt_lgc to
 *                              Fix anomaly EA3#2978                                                            5491
 */
/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                   DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>         DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/
#include "EPS_DiagSrvcs_SrvcLUTbl.h"
#include "EPS_DiagSrvcs_ISO.h"

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>           DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>             DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************/

/* Global variables */

/* Source */

/****************************** BEGIN CMS GENERATION - DO NOT CHANGE/REMOVE THIS COMMENT ******************************/


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_RID_FCE0
 *
 *    RID ID:          0xFCE0
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB),
 *                     Vehice Speed Valid and Zero (0x88)
 *
 *    Description:     Manufacturing Temporary Handwheel Position Offset
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVRIDFCE0_CNT_ENUM == D_DIAGSRVC_ENABLED)
	FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_RID_FCE0 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
	{
		/* Local Vars */
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
		VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;

		switch (SubFunc_Cnt_T_u08)
		{
			case D_EPSRIDSUBSTART_CNT_U08:
				/* Start Routine */
				NtWrapC_VehDyn_SCom_ForceCenter();
			break;
			default:
				/* Requested sub-function not supported */
				CmdResp_Cnt_T_u08 = D_EPSNRCSUBFUNCNOTSUPP_CNT_U08;
			break;
		}

		*RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
		return CmdResp_Cnt_T_u08;
	}
#endif /* (D_EPSDIAGSRVRIDFCE0_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE0
 *
 *    PID ID:          0xFEE0
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     System Name or Engine Type
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE0_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE0 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_SystemName_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_SystemName_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_SYSTEMNAME, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_SystemName_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEE0_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE1
 *
 *    PID ID:          0xFEE1
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Diagnostic Data Identifier
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE1_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE1 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_SystemVerCodeDDI_Cnt_u8);


        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_SystemVerCodeDDI_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_SYSVERSCODEDDI, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_SystemVerCodeDDI_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEE1_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE2
 *
 *    PID ID:          0xFEE2
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Manufacturing Traceability (PCB Manufacturing)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE2_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE2 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_ManfTraceability_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				if (RequestDataIdx_Cnt_T_u16 >= 7U)
				{
					Nvm_ManfTraceability_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				}
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_MANFTRAC, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_ManfTraceability_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEE2_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE3
 *
 *    PID ID:          0xFEE3
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Security: Seed (0xFB) and Key (0xFC)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE3_CNT_ENUM == D_DIAGSRVC_ENABLED)
	FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE3 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
	{
		/* Local Vars */
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
		VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint8, EPSDIAGSRVC_VAR) Index_Cnt_T_u08;

		if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
		{
			/* Seed (0xFB) */
			for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08++)
			{
				Nvm_NexteerSeed_Cnt_str.Data.Seed[Index_Cnt_T_u08] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}
			Nvm_NexteerSeed_Cnt_str.ProgramFlag = D_SEEDKEYPROGRAMMED_CNT_U08;
			(void)NvM_WriteBlock(NVM_BLOCK_SER_SEED_NEXTEER, NULL_PTR);

			/* Key (0xFC) */
			for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08++)
			{
				Nvm_NexteerKey_Cnt_str.Data.Key[Index_Cnt_T_u08] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}
			Nvm_NexteerKey_Cnt_str.ProgramFlag = D_SEEDKEYPROGRAMMED_CNT_U08;
			(void)NvM_WriteBlock(NVM_BLOCK_SER_KEY_NEXTEER, NULL_PTR);
		}
		else
		{
			/* Reads are not supported for the security functions */
			CmdResp_Cnt_T_u08 = D_EPSNRCREQOUTOFRANGE_CNT_U08;
		}

		return CmdResp_Cnt_T_u08;
	}
#endif /* (D_EPSDIAGSRVPIDFEE3_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE4
 *
 *    PID ID:          0xFEE4
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Security: Seed (0x03) and Key (0x04)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE4_CNT_ENUM == D_DIAGSRVC_ENABLED)
	FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE4 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
	{
		/* Local Vars */
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
		VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint8, EPSDIAGSRVC_VAR) Index_Cnt_T_u08;

		if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
		{
			/* Seed (0x03) */
			for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08++)
			{
				Nvm_CPIDSeed_Cnt_str.Data.Seed[Index_Cnt_T_u08] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}
			Nvm_CPIDSeed_Cnt_str.ProgramFlag = D_SEEDKEYPROGRAMMED_CNT_U08;
			(void)NvM_WriteBlock(NVM_BLOCK_SER_SEED_CPID, NULL_PTR);

			/* Key (0x04) */
			for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08++)
			{
				Nvm_CPIDKey_Cnt_str.Data.Key[Index_Cnt_T_u08] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}
			Nvm_CPIDKey_Cnt_str.ProgramFlag = D_SEEDKEYPROGRAMMED_CNT_U08;
			(void)NvM_WriteBlock(NVM_BLOCK_SER_KEY_CPID, NULL_PTR);
		}
		else
		{
			/* Reads are not supported for the security functions */
			CmdResp_Cnt_T_u08 = D_EPSNRCREQOUTOFRANGE_CNT_U08;
		}

		return CmdResp_Cnt_T_u08;
	}
#endif /* (D_EPSDIAGSRVPIDFEE4_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE5
 *
 *    PID ID:          0xFEE5
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Security: Seed (0x01) and Key (0x02)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE5 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
	{
		/* Local Vars */
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
		VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint8, EPSDIAGSRVC_VAR) Index_Cnt_T_u08;

		if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
		{
			/* Seed (0x01) */
			for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08++)
			{
				Nvm_SPSSeed_Cnt_str.Data.Seed[Index_Cnt_T_u08] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}
			Nvm_SPSSeed_Cnt_str.ProgramFlag = D_SEEDKEYPROGRAMMED_CNT_U08;
			(void)NvM_WriteBlock(NVM_BLOCK_SER_SEED_SPS, NULL_PTR);

			/* Key (0x02) */
			for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08++)
			{
				Nvm_SPSKey_Cnt_str.Data.Key[Index_Cnt_T_u08] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}
			Nvm_SPSKey_Cnt_str.ProgramFlag = D_SEEDKEYPROGRAMMED_CNT_U08;
			(void)NvM_WriteBlock(NVM_BLOCK_SER_KEY_SPS, NULL_PTR);
		}
		else
		{
			/* Reads are not supported for the security functions */
			CmdResp_Cnt_T_u08 = D_EPSNRCREQOUTOFRANGE_CNT_U08;
		}

		return CmdResp_Cnt_T_u08;
	}
#endif /* (D_EPSDIAGSRVPIDFEE5_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE6
 *
 *    PID ID:          0xFEE6
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     End Model Part Number
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE6_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE6 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_EndModelPN_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_EndModelPN_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_ENDMODELPN, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_EndModelPN_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEE6_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE7
 *
 *    PID ID:          0xFEE7
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     End Model Part Number Alpha Code
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE7_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE7 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_EndModelPNAC_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_EndModelPNAC_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_ENDMODELPNAC, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_EndModelPNAC_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEE7_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEE8
 *
 *    PID ID:          0xFEE8
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Manufacturing Traceability (Nexteer)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEE8_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEE8 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_ManfTraceability_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				if(RequestDataIdx_Cnt_T_u16 < 7U)
				{
					Nvm_ManfTraceability_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				}
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_MANFTRAC, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_ManfTraceability_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEE8_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEEA
 *
 *    PID ID:          0xFEEA
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     GM Manufacturing Enable Counter (MEC)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEEA_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEEA (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			if (Nvm_CMEC_Cnt_u8 != 0U)
			{
				Nvm_CMEC_Cnt_u8 = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
				(void)NvM_WriteBlock(NVM_BLOCK_SER_CUSTMEC, NULL_PTR);
			}
			else
			{
				/* Cannot write CMEC to a non-zero value once it reaches zero */
				CmdResp_Cnt_T_u08 = D_EPSNRCREQOUTOFRANGE_CNT_U08;
			}
        }
        else
        {
			DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_CMEC_Cnt_u8;
			ReturnDataIdx_Cnt_T_u16++;
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEEA_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEEB
 *
 *    PID ID:          0xFEEB
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Programming Date
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEEB_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEEB (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_ProgDate_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_ProgDate_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_PROGDATE, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_ProgDate_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEEB_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEEC
 *
 *    PID ID:          0xFEEC
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Repair Shop Code
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEEC_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEEC (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_RepairShopCode_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_RepairShopCode_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_REPAIRSHOPCODE, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_RepairShopCode_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEEC_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEED
 *
 *    PID ID:          0xFEED
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     VIN Data
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEED_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEED (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_VIN_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_VIN_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_VINDATA, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_VIN_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEED_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEEF
 *
 *    PID ID:          0xFEEF
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     WIR Fault Status Information
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEEF_CNT_ENUM == D_DIAGSRVC_ENABLED)
	FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEEF (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
	{
		/* Local Vars */
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
		VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, AUTOMATIC) FaulStatusBits_Cnt_T_u16 = 0x0000U;

		if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
		{
			FaulStatusBits_Cnt_T_u16 = bytesToWord_m(DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16], DataBuffer_Uls_T_u08[(RequestDataIdx_Cnt_T_u16+1u)]);
			SrlComWIRFltStatus_Cnt_u16 = (uint16)(FaulStatusBits_Cnt_T_u16 >> 1U);
			CDD_EOLNxtrWIRSelect_Cnt_G_u16 = ((FaulStatusBits_Cnt_T_u16 & 0x01U) == 0x01U) ? 0xA5A2U : 0x0000U;
			(void)NvM_WriteBlock(NVM_BLOCK_CMS_NXTRWIRSELECT, NULL_PTR);
		}
		else
		{
			if (Rte_CDDInterface_WIRMfgEnabled_Cnt_lgc == TRUE)
			{
				FaulStatusBits_Cnt_T_u16 = 0x0001U;
			}
			FaulStatusBits_Cnt_T_u16 |= (uint16)(SrlComWIRFltStatus_Cnt_u16 << 1);

			DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = MSB(FaulStatusBits_Cnt_T_u16);
			ReturnDataIdx_Cnt_T_u16++;
			DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = LSB(FaulStatusBits_Cnt_T_u16);
			ReturnDataIdx_Cnt_T_u16++;
			*RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
		}

		return CmdResp_Cnt_T_u08;
	}
#endif /* (D_EPSDIAGSRVPIDFEEF_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEF1
 *
 *    PID ID:          0xFEF1
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Data Universal Numbering System Identification (DUNS)
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEF1_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEF1 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_DataUnivNumSysID_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for (Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				Nvm_DataUnivNumSysID_Cnt_u8[Index_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
				RequestDataIdx_Cnt_T_u16++;
			}

			(void)NvM_WriteBlock(NVM_BLOCK_SER_DATAUNIVNUMSYSID, NULL_PTR);
        }
        else
        {
			for (Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_DataUnivNumSysID_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEF1_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEF3
 *
 *    PID ID:          0xFEF3
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Base Model Part Number
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEF3_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEF3 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_BaseModelPartNumber_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_BaseModelPartNumber_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_BASEMODELPN, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_BaseModelPartNumber_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEF3_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEF4
 *
 *    PID ID:          0xFEF4
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     Base Model Part Number Alpha Code
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEF4_CNT_ENUM == D_DIAGSRVC_ENABLED)
    FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEF4 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
    {
        /* Local Vars */
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16 = 0U;
        VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16 = 0U;
        VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;
		VAR(uint16, EPSDIAGSRVC_VAR) ArraySize_Cnt_T_u16;
		VAR(uint16, EPSDIAGSRVC_VAR) Index_Cnt_T_u16;

		ArraySize_Cnt_T_u16 = TableSize_m(Nvm_BaseModelPartNumberAlphaCode_Cnt_u8);

        if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
        {
			for(RequestDataIdx_Cnt_T_u16 = 0; RequestDataIdx_Cnt_T_u16 < ArraySize_Cnt_T_u16; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_BaseModelPartNumberAlphaCode_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock(NVM_BLOCK_SER_BASEMODELPNAC, NULL_PTR);
        }
        else
        {
			for(Index_Cnt_T_u16 = 0; Index_Cnt_T_u16 < ArraySize_Cnt_T_u16; Index_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_BaseModelPartNumberAlphaCode_Cnt_u8[Index_Cnt_T_u16];
				ReturnDataIdx_Cnt_T_u16++;
			}
            *RespLength_Cnt_T_u16 = ReturnDataIdx_Cnt_T_u16;
        }

        return CmdResp_Cnt_T_u08;
    }
#endif /* (D_EPSDIAGSRVPIDFEF4_CNT_ENUM == D_DIAGSRVC_ENABLED) */


/***********************************************************************************************************************
 *    Function Name:   EPSInternal_PID_FEF5
 *
 *    PID ID:          0xFEF5
 *
 *    Configured NRCs: MEC Counter Equals Zero (0xFB)
 *
 *    Description:     ECU ID
 *
 *    Inputs:          SubFunc_Cnt_T_u08    : Sub-function type - varies based on srvc type - see MainHandler function
 *                     DataBuffer_Uls_T_u08 : Buffer for request/response data
 *                     RequestLen_Cnt_T_u16 : Number of byte of request data in buffer when function is called
 *                     RespLength_Cnt_T_u16 : Variable pointer to hold the number of response bytes in buffer on return
 *
 *    Outputs:         CmdResp_Cnt_T_u08    : D_EPSNRCNOERROR_CNT_U08 if no error or appropriate NRC
 *
 **********************************************************************************************************************/
#if (D_EPSDIAGSRVPIDFEF5_CNT_ENUM == D_DIAGSRVC_ENABLED)
	FUNC(uint8, EPSDIAGSRVC_CODE) EPSInternal_PID_FEF5 (VAR(uint8, EPSDIAGSRVC_VAR) SubFunc_Cnt_T_u08, VAR(uint8, EPSDIAGSRVC_VAR) DataBuffer_Uls_T_u08[], VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestLen_Cnt_T_u16, P2VAR(CM_MsgLenType, EPSDIAGSRVC_VAR, EPSDIAGSRVC_VAR) RespLength_Cnt_T_u16)
	{
		/* Local Vars */
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) ReturnDataIdx_Cnt_T_u16;
		VAR(CM_MsgLenType, EPSDIAGSRVC_VAR) RequestDataIdx_Cnt_T_u16;
		VAR(uint8, EPSDIAGSRVC_VAR) CmdResp_Cnt_T_u08 = D_EPSNRCNOERROR_CNT_U08;

		if (SubFunc_Cnt_T_u08 == D_SRVCREQTYPEWRITE_CNT_U16)
		{
			/* Write Service */
			for(RequestDataIdx_Cnt_T_u16 = 0U; RequestDataIdx_Cnt_T_u16 < D_DFTCFGECUID_CNT_U8; RequestDataIdx_Cnt_T_u16++)
			{
				Nvm_EcuId_Cnt_u8[RequestDataIdx_Cnt_T_u16] = DataBuffer_Uls_T_u08[RequestDataIdx_Cnt_T_u16];
			}
			(void)NvM_WriteBlock((NvM_BlockIdType)NVM_BLOCK_SER_ECU_ID, NULL_PTR);
		}
		else
		{
			/* Read Service */
			for(ReturnDataIdx_Cnt_T_u16 = 0U; ReturnDataIdx_Cnt_T_u16 < D_DFTCFGECUID_CNT_U8; ReturnDataIdx_Cnt_T_u16++)
			{
				DataBuffer_Uls_T_u08[ReturnDataIdx_Cnt_T_u16] = Nvm_EcuId_Cnt_u8[ReturnDataIdx_Cnt_T_u16];
			}
			*RespLength_Cnt_T_u16 = D_DFTCFGECUID_CNT_U8;
		}

		return CmdResp_Cnt_T_u08;
	}
#endif /* (D_EPSDIAGSRVPIDFEF5_CNT_ENUM == D_DIAGSRVC_ENABLED) */

