/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : SchM.h
* Module Description: SchM Include
* Product           : Gen II Plus - EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Mon Jul 29 08:08:40 2013
 * %version:          1 %
 * %derived_by:       czgng4 %
 * %date_modified:    Mon Jul 29 08:08:40 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 */

#ifndef SCHM_H
#define SCHM_H

/*******************************************************************************
 * Global functions
 *******************************************************************************/
void SchM_Init( void );

/* Initialisation of global variables, call once before any other SchM function */
void SchM_InitMemory( void );

void SchM_Deinit( void );


#endif /* SCHM_H */


