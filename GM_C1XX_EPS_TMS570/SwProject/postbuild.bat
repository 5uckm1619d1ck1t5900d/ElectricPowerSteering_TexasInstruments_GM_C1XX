REM ***************** SET PATHS ************************************************
REM Required PATH Variable settings to tools: CCT, hex470.exe

REM ***************** SET PATHS ************************************************
REM ** Set current path **
SET PROJ_PATH=%cd%
SET TOOL_PATH=%PROJ_PATH%\..\..\Tools
SET CCT_PATH=%TOOL_PATH%\CCT
SET TRIM_PATH=%TOOL_PATH%\Trimmer
SET HEX470_PATH=%TOOL_PATH%\hex470
SET HEXVIEW_PATH=%TOOL_PATH%\hexview
REM **************** DELETE OLD FILES ******************************************

SET FILENAME=%1

del %FILENAME%.hex
del %FILENAME%.hex.map

REM **************** RUN Trimmer *********************************************** 
"%TRIM_PATH%"\OutFileTrimmer.exe -c "%TRIM_PATH%"\TrimmerConfig.cfg %FILENAME%.out

REM **************** RUN CCT *********************************************** 
"%CCT_PATH%"\CCT %FILENAME%.out -NoSort

REM **************** CREATE HEX Files *********************************************** 

REM Make hex file from out
"%HEX470_PATH%"\hex470 -m3 -o %FILENAME%.hex -map %FILENAME%.hex.map -datawidth 8 -memwidth 8 -romwidth 8 -i %FILENAME%.out
REM "%HEXVIEW_PATH%"\hexview -s -i %FILENAME%.hex -AR:0xC000-0x7FFDF -xs -o %FILENAME%_App.hex
REM "%HEXVIEW_PATH%"\hexview -s -i %FILENAME%.hex -AR:0x80000-0xBFFEF -xs -o %FILENAME%_Cal.hex

REM *************** Clean Up *********************************************

REM ********************** Restore Original Directory ***********************
cd 	"%PROJ_PATH%"

REM ********** Create Archives of the Project Per the Secure Lib Guidelines **********
cd ../../

REM ********** Delete the following line to prevent zip archival **********
REM archive.bat

REM **************** END *******************************************************