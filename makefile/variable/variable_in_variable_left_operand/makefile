dir = foo
$(dir)_srcs = $(wildcard $(dir)/*.c)
define $(dir)_func 
@echo $($(dir)_srcs)
endef
	

all:
	@echo $(dir)_srcs
	@echo $($(dir)_srcs)
	$($(dir)_func)
