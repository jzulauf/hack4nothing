README.txt

:Author: jzulauf
:Email: jzulauf530@gmail.com
:Date: 2016-06-15 06:26

This directory contains an example makefile that allows for changing
between release and debug builds by either changing one line in the
makefile or by defining RELEASE or DEBUG to non-empty strings either
in the environment (c.f. bash) or on the command line.

The usage for make is

	make

this will build test_config, which outputs the type of build. If 
you change the configuration you want to build be sure and remove
the old build s.t. make will rebuild with the new configuration using

	make clean

In more complicated projects (with high build times) builds can
be made configuration aware, but that's beyond the scope of this
example. 


