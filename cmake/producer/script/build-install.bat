@echo off & setlocal
::
:: call as: script\build-install.bat
::
md build
cd build
cmake -DCMAKE_INSTALL_PREFIX=d:/dev2 -G "Unix Makefiles" ..
cmake --build . --target install
endlocal
