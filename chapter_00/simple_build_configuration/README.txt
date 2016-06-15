README.txt

:Author: jzulauf
:Email: jzulauf530@gmail.com
:Date: 2016-06-15 06:26

This directory contains a simple example makefile that allows for changing
between release and debug builds by either changing one line in the
makefile. Use # to comment out the line you don't want

The usage for make is

	make

this will build test_config, which outputs the type of build. If 
you change the configuration you want to build be sure and remove
the old build s.t. make will rebuild with the new configuration using

	make clean



