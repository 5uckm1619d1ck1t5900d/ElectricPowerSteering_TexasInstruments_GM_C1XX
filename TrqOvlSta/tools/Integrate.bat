@Echo Off
setlocal



set SWC=TrqOvlSta

FOR /D %%G in ("..\..\*_EPS_*") DO set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

 

set BSWMDDIR_TRQOVLSTA=%INTPJTDIR%\Tools\AsrProject\Generators\Components\_Schemes\%SWC%\bswmd
set GENDEFDIR_TRQOVLSTA=%INTPJTDIR%\Tools\AsrProject\Generators\Artt\%SWC%


mkdir %BSWMDDIR_TRQOVLSTA%
mkdir %GENDEFDIR_TRQOVLSTA%



copy ..\generate\Ap_TrqOvlSta_*.arxml	%BSWMDDIR_TRQOVLSTA%
copy ..\generate\Ap_TrqOvlSta_*.tt	%GENDEFDIR_TRQOVLSTA%
copy ..\generate\Ap_TrqOvlSta_*.bat	%GENDEFDIR_TRQOVLSTA%


pause
:end

endlocal

