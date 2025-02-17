@echo off
REM ********************************************************************************************************************
REM *  Description:    CBD RTE generation for SWC Update and contract phase generation for use with unit testing
REM *  Created By:     Nexteer
REM *  Prerequisites:  The Rte Generator of choice must be located in a Folder named RteGen in the work area root
REM *
REM ********************************************************************************************************************
set SWC=Ap_SrlComOutput
set RTEGEN="..\..\GM_C1XX_EPS_TMS570\Tools\AsrProject\Generators\Rte\dvrtegen"

REM * Change file permissions to writeable to all update of the file by rtegen

del logfile.txt
attrib -r "..\src\*.c" >> logfile.txt
attrib -r "..\utp\contract\*.h" >> logfile.txt

%RTEGEN% -d "..\autosar\%SWC%.dcf" -m %SWC% -g i -o "..\src" >> logfile.txt
%RTEGEN% -d "..\autosar\%SWC%.dcf" -m %SWC% -g c -o "..\utp\contract" >> logfile.txt

Pause