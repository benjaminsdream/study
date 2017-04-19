ifeq (0,$(MAKELEVEL))
	whoami:=$(shell whoami)
	cur-dir:=$(shell pwd)
	host-type:=$(shell arch)
	MAKE:=$(MAKE)	host-type=$(host-type)	whoami=$(whoami)
endif
all:
	@echo $(whoami)
	@echo $(cur-dir)
	@echo $(host-type)
	@echo $(MAKE)
	make -C subdir
