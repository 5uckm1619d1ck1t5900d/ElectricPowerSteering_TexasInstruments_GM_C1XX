
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Sa_TmprlMon_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 24.07.2013 14:35:13
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          1 %
 * %date_modified:    Mon Jul 29 08:40:11 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 09/20/12   1       ssk       Initial template creation
 * 	 	
 */

#ifndef SA_TMPRLMON_CFG_H
#define SA_TMPRLMON_CFG_H


/*******************************************************************************
**                      Define Section                                       **
*******************************************************************************/

/* TmprlMon_Per1_CP0 Checkpoint is enabled */

/* Disable all checkpoints that are not enabled */
#define Rte_Call_TmprlMon_Per1_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_TmprlMon_Per2_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_TmprlMon_Per2_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_TmprlMon_Per3_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_TmprlMon_Per3_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
   
#endif /* TMPRLMON_CFG_H */

/*** End of file **************************************************************/
