#
# Makefile
# jzulauf, 2016-06-15
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

# Make uses CPPFLAGS to pass on "options" to the compiler
# -D passes on a "preprocessor variable", -g say add debugging information
# to the output file.  -o2 says "do extra work to make the the program run
# faster
# What happens if you delete the # from the next line?
CPPFLAGS = -DDEBUG -g
#CPPFLAGS = -DNDEBUG -o2

all: test_config

# For simple projects we don't add logic to track configuraton changes
# So when you change configuration, you need to clean first.
clean:
	rm -f test_config

# vim:ft=make
#
