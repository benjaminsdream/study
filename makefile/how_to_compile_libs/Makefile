build_abs_path := $(shell mkdir build && cd build && pwd)
CC = gcc
AR = ar
BIN = test.out

BUILDDIR = build
SUBLIB = lib


SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,$(BUILDDIR)/%.o,$(SRCS))
DEPS = $(patsubst %.o,%.d,$(OBJS)) 

.PHONY : all
all: $(SUBLIB) $(OBJS)
	$(CC) -Ilib -o $(BIN) $(OBJS) $(SUBLIB)/$(BUILDDIR)/*.a

-include $(DEPS)

$(BUILDDIR)/%.o: %.c
	$(CC) -Ilib -MMD -fPIC -c $< -o $@ 

#$(OBJS): | $(BUILDDIR) 
#$(OBJS)

.PHONY : $(BUILDDIR)
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

.PHONY : $(SUBLIB)
$(SUBLIB):
	@echo "make in sublib"
	make CC=$(CC) AR=$(AR) -C $(SUBLIB) 


.PHONY : clean
clean:
	rm -rf $(BUILDDIR)
	rm -rf $(BIN)
	make -C $(SUBLIB) clean
