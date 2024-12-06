@Echo Off
setlocal



set SWC=TrqArblim

FOR /D %%G in ("..\..\*_EPS_*") DO set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

 

set BSWMDDIR_TRQARBLIM=%INTPJTDIR%\Tools\AsrProject\Generators\Components\_Schemes\%SWC%\bswmd
set GENDEFDIR_TRQARBLIM=%INTPJTDIR%\Tools\AsrProject\Generators\Artt\%SWC%


mkdir %BSWMDDIR_TRQARBLIM%
mkdir %GENDEFDIR_TRQARBLIM%



copy ..\generate\Ap_TrqArblim_*.arxml	%BSWMDDIR_TRQARBLIM%
copy ..\generate\Ap_TrqArblim_*.tt	%GENDEFDIR_TRQARBLIM%
copy ..\generate\Ap_TrqArblim_*.bat	%GENDEFDIR_TRQARBLIM%


pause
:end

endlocal

