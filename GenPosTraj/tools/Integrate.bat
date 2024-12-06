@Echo Off
setlocal



set SWC=GenPosTraj

FOR /D %%G in ("..\..\*_EPS_*") DO set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

 

set BSWMDDIR_GENPOSTRAJ=%INTPJTDIR%\Tools\AsrProject\Generators\Components\_Schemes\%SWC%\bswmd
set GENDEFDIR_GENPOSTRAJ=%INTPJTDIR%\Tools\AsrProject\Generators\Artt\%SWC%


mkdir %BSWMDDIR_GENPOSTRAJ%
mkdir %GENDEFDIR_GENPOSTRAJ%



copy ..\generate\Ap_GenPosTraj_*.arxml	%BSWMDDIR_GENPOSTRAJ%
copy ..\generate\Ap_GenPosTraj_*.tt	%GENDEFDIR_GENPOSTRAJ%
copy ..\generate\Ap_GenPosTraj_*.bat	%GENDEFDIR_GENPOSTRAJ%


pause
:end

endlocal

