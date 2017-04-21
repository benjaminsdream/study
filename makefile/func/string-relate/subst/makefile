comma=,
empty=
#space= $(empty) $(empty)
space= $(empty) #define a space
foo= a b c
bar= $(subst $(space),$(comma),$(foo))
all:
	@echo $(bar)
	@echo $(empty)
	@echo $(space)
