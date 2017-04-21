CFLAGS=-g -wall
all: bar.o foo.o
	@echo $^
	@echo $(CFLAGS)
%.o:CFLAGS=-g
%.o:
	@echo $@
	@echo CFLAGS=$(CFLAGS)

