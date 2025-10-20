cd edk2

set PYTHON_HOME=C:\Python\Python310\
set NASM_PREFIX=C:\NASM\
call edksetup.bat
cd ..
copy /Y target.txt edk2\Conf
cd edk2
call edksetup.bat rebuild
build

cd ..