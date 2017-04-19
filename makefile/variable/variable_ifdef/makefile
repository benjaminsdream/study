do_sort=123
ifdef do_sort
func:=sort
else
func:=strip
endif

bar:=a b d f g e
xxx=sort
foo := $($(xxx) $(bar))

all:
	@echo $(bar)
	@echo $(func)
	@echo $(foo)
