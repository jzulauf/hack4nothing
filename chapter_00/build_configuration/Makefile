#
# Makefile
# jzulauf, 2016-06-15 05:47
#
# This is an example makefile
# 	Lines starting with # are comments (and ignored by make)
#
# 	Lines like A = b set variables (in this case A stores the value b)
#
# 	Lines like foo : bar means that "foo" depends on bar, to make foo
# 	first make bar, and are often followed by the list of commands
# 	(indented with tab characters) to make foo after bar has been made 
#
#	Note: Make has a bunch of implicit rules, like how to create an
#	executeable from a single source file.  Thus there are no rules
#	to create test_config below, only rules to make sure it gets made
#	and cleaned up.

# This logic lets us look at the input "environment" 
# and decides the build configuration to use
# 

# We can set the default configuration, i.e. what to do
# if nothing is specified... and change it as we like
DEFAULT_CONFIG = debug
# What happens if you delete the # from the next line?
#DEFAULT_CONFIG = release

# The logic here is that if DEBUG is set
# we get a debug configuration
ifdef DEBUG
BUILD_CONFIG = debug
# if RELEASE is set, but DEBUG *isn't*, we get a release configuration
else ifdef RELEASE
BUILD_CONFIG = release
else
# if neither are set we get the default configuration
# make is a little weird... variable values are fetched using $ to say
# "go get the value of" and variable names longer than 1 character must
# be surrounded by ()
BUILD_CONFIG = $(DEFAULT_CONFIG)
endif

# Based on the build configuration we've set, we tell the compiler
# to do different things
ifeq ($(BUILD_CONFIG), debug)
# this tells the compiler to pass on the debug setting and 
# create the information needed for the debugger to work
CPPFLAGS = -DDEBUG -g
else ifeq ($(BUILD_CONFIG), release)
# this tells the compiler to pass on that we are not debugging
# and to perform "optimizations"
CPPFLAGS = -DNDEBUG -o2
endif


all: test_config

# For simple projects we don't add logic to track configuraton changes
# So when you change configuration, you need to clean first.
clean:
	rm -f test_config

# vim:ft=make
#
