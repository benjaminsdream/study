CFLAGS=-g -wall
all: foo.o 
	@echo $(CFLAGS)

foo.o: CFLAGS=-g
foo.o: bar.o
	@echo in foo $(CFLAGS)
bar.o:
bar.o:
	@echo in bar $(CFLAGS)
