@echo off & setlocal
::
:: call as: script\producer-consumer.bat
::
echo.
echo Build and install producer:
cd producer && call script\build-install.bat && cd ..

echo.
echo Build consumer:
cd consumer && call script\build.bat && cd ..

endlocal
