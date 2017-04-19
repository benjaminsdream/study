foo = xyz
bar = 123
foo ?= $(bar)


y=2
ifeq (undefined,$(origin x))
x=$(y)
endif
all:
	@echo $(foo)
	@echo $(x)
	@echo $(y)
