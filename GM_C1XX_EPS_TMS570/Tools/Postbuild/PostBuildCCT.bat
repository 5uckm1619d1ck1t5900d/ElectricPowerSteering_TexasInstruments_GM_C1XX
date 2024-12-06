@echo off
REM ****************************************************************************
REM * This script runs the CCT after the post build merge occurs. 
REM *
REM ****************************************************************************
REM /*---------------------------------------------------------------------------
REM * Version Control:
REM * Date Created:      Mon Nov 11 15:29:47 2014
REM * %version:          1 %
REM * %derived_by:       kzdyfh %
REM * %date_modified:    Mon Nov 11 15:29:50 2014 %
REM *---------------------------------------------------------------------------*/

cd ..\..\SwProject\Debug

..\..\Tools\CCT\CCT.exe -v2 -NoSort EPS_GM_C1xx_dbg.out
