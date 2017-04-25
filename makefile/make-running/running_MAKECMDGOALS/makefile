srcs=foo.c bar.c
ifneq "$(MAKECMDGOALS)" "clean"
include $(srcs:.c=.d)
endif

all:
	@echo in make

.PHONY:clean
clean:
	@echo in clean
