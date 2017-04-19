CFLAGS = -lpthread -lapue -g

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,%.o,$(SRCS))
all: $(OBJS)

	gcc  -o main $^  $(CFLAGS)
%.o:%.c
	gcc -c  $<
.PHONY : clean
clean:
	rm *.o main
