@REM This batch file has been generated by the IAR Embedded Workbench
@REM C-SPY Debugger, as an aid to preparing a command line for running
@REM the cspybat command line utility using the appropriate settings.
@REM
@REM You can launch cspybat by typing the name of this batch file followed
@REM by the name of the debug file (usually an ELF/DWARF or UBROF file).
@REM Note that this file is generated every time a new debug session
@REM is initialized, so you may want to move or rename the file before
@REM making changes.
@REM 


"C:\Programmi\IAR Systems\Embedded Workbench 6.0\common\bin\cspybat" "C:\Programmi\IAR Systems\Embedded Workbench 6.0\arm\bin\armproc.dll" "C:\Programmi\IAR Systems\Embedded Workbench 6.0\arm\bin\armjlink.dll"  %1 --plugin "C:\Programmi\IAR Systems\Embedded Workbench 6.0\arm\bin\armbat.dll" --macro "..\..\..\..\bertos\cpu\cortex-m3\scripts\sam3x_ek_rom.mac" --flash_loader "C:\Programmi\IAR Systems\Embedded Workbench 6.0\arm\config\flashloader\Atmel\AT91SAM3S4-EK\at91sam3s4-flash.board" --backend -B "--endian=little" "--cpu=Cortex-M3" "--fpu=None" "-p" "C:\Programmi\IAR Systems\Embedded Workbench 6.0\arm\CONFIG\debugger\Atmel\ioat91sam3s4.ddf" "--drv_verify_download" "--semihosting" "--device=AT91SAM3S4" "--drv_communication=USB0" "--jlink_speed=adaptive" "--jlink_reset_strategy=0,0" "--drv_catch_exceptions=0x000" 

