arg1 = abc
arg2 = bcd
arg3 = cde
arg4 = def
arg5 = efg
arg6 = fgh
ifeq "$(arg1)" "$(arg2)"
a=0
else
a=1
endif


ifeq '$(arg3)' '$(arg2)'
b=0
else
b=1
endif

ifeq ($(arg3),$(arg4))
c=0
else
c=1
endif


ifeq '$(arg4)' "$(arg5)"
d=0
else
d=1
endif

ifeq "$(arg5)" '$(arg6)'
e=0
else
e=1
endif

all:
	@echo $(a) $(b) $(c) $(d) $(e)
