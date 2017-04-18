BUILDDIR=build
vpath %.h include
vpath %.c srcs

CFLAGS = -Iinclude
SRCS = $(wildcard srcs/*.c)
HEDS = $(wildcard include/*.h)
OBJS = $(patsubst %.c,$(BUILDDIR)/%.o,$(notdir $(SRCS)))
DEPS = $(patsubst %.o,%.d,$(OBJS))
BIN  = main
all: BUILD $(BIN)
	@echo $(SRCS)
	@echo $(HEDS)
	@echo $(OBJS)
	@echo $(DEPS)

$(BIN): $(OBJS)
	gcc -o $@ $^ 
$(BUILDDIR)/%.o:%.c
	gcc -MMD $(CFLAGS)  -c -o $@ $<
.PHONY : BUILD
BUILD:
	mkdir -p build
.PHONY : clean
clean:
	rm main a.o main.o
	rm -r build
