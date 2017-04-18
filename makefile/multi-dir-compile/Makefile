CC = gcc
CFLAGS = -g -Wall -O -Iinclude
BIN = demo.out
BUILD_DIR = build

SRCS = $(wildcard srcs/*.c)
HEDS = $(wildcard include/*.h)
OBJS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(notdir $(SRCS)))
DEPS = $(patsubst %.o,%.d,$(OBJS))

#VPATH = srcs:include
vpath %.h include
vpath %.c srcs

.PHONY : all
all: _PRE $(BIN)
	@echo $(SRCS) 
	@echo $(HEDS)
	@echo $(OBJS)
	@echo $(DEPS)
	@echo $(VPATH)
	@echo "begin compiling"


-include $(DEPS)

$(BIN):$(OBJS)
	$(CC) $(CFLAGS) -o  $(BIN) $^

$(BUILD_DIR)/%.o :%.c
	$(CC) $(CFLAGS) -MMD -c -o $@ $< 

.PHONY : _PRE
_PRE:
	mkdir -p $(BUILD_DIR)
.PHONY : clean
clean:
	rm -rf build
	rm $(BIN)
