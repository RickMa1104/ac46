@echo off
setlocal EnableDelayedExpansion

call :%1 %*
exit

:depend
if exist %2.1 (
set /p=%2 %3<nul > %2
for /f "tokens=*" %%i in (%2.1) do echo %%i>> %2
del %4.1
)
goto :EOF

:ld
set lder=%2
shift
shift

set args=
:get_arg
if %1a==a goto :get_arg_exit
set args=!args! %1
shift
goto :get_arg
:get_arg_exit

set file=
set files=
@for /r %%i in (*.o) do  (
	set xx=%%i
	set file=!xx:%CD%\=!
	set files=!files! !file:\=/!
)
if exist ..\main.or32 del ..\main.or32
%lder%  !files!  !args! -o ..\main.or32 -T..\ram.ld -Map=map.txt
if exist ..\main.or32 (
	cd ..\
	call bt15\r_makebin.bat
)
goto :EOF

::common/Bluetooth_Authencation.a
