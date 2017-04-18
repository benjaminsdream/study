CC = gcc
AR = ar
LIB_A = liblib.a
LIB_SO= liblib.so

BUILD_DIR = build

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRCS))
DEPS = $(patsubst %.o,%.d,$(OBJS))

.PHONY:all
all:$(OBJS)
	$(CC) -fPIC -shared -o $(BUILD_DIR)/$(LIB_SO) $^
	$(AR) -rcs $(BUILD_DIR)/$(LIB_A) $^
	@echo "done"

-include $(DEPS)

$(BUILD_DIR)/%.o:%.c
	$(CC) -fPIC -MMD -c   $< -o $@
	@echo "build obj"

$(OBJS) :  $(BUILD_DIR)

.PHONY: $(BUILD_DIR)
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
	rm -rf *.a
	rm -rf *.so

