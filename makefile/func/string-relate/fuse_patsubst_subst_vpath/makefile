VPATH=srcs:include
TEMP=$(subst :, ,$(VPATH))
override CFLAGS=$(patsubst %,-I%,$(TEMP))
all:
	@echo $(VPATH)
	@echo $(TEMP)
	@echo $(CFLAGS)
