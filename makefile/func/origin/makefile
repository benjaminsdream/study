bar=123
override cd=cd
override CC=gcc
ifdef HOSTNAME
ifeq "environment" "$(origin HOSTNAME)"
HOSTNAME=xyz
endif
endif
all:
	@echo $(origin foo)
	@echo $(origin PATH)
	@echo $(origin bar)
	@echo $(origin CC)
	@echo $(origin cd)
	@echo $(origin CC)
	@echo $(origin SHELL)
	@echo $(origin HOSTNAME)
