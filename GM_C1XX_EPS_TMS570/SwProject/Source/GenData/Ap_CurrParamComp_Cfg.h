
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Ap_CurrParamComp_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 24.07.2013 14:34:46
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          1 %
 * %date_modified:    Mon Jul 29 08:38:30 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 09/20/12   1       ssk       Initial template creation
 * 	 	
 */

#ifndef AP_CURRPARAMCOMP_CFG_H
#define AP_CURRPARAMCOMP_CFG_H


/*******************************************************************************
**                      Define Section                                       **
*******************************************************************************/

/* CurrParamComp_Per2_CP0 Checkpoint is enabled */

/* Disable all checkpoints that are not enabled */
#define Rte_Call_CurrParamComp_Per1_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CurrParamComp_Per1_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CurrParamComp_Per2_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
   
#endif /* CURRPARAMCOMP_CFG_H */

/*** End of file **************************************************************/
