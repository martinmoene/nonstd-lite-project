@echo off & setlocal
::
:: call as: script\build.bat
::
md build
cd build
cmake -DCMAKE_PREFIX_PATH=d:/dev2/lib/cmake -G "Unix Makefiles" ..
cmake --build .
endlocal
