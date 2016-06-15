/*
 * test_config.cpp
 * Copyright (C) 2016 jzulauf <jzulauf@office-server>
 *
 * Distributed under terms of the MIT license.
 *
 * Test program for the Build configuration makefile example
 */

#include <iostream>

int main()
{
#if defined(DEBUG)
	const char *message = "This is a debug build.";
#elif defined(NDEBUG)
	const char *message = "This is a release build.";
#endif

	std::cout << message << std::endl;

	return 0;
}

