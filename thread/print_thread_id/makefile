CFLAGS = -lpthread -lapue
all: print_thread_id.o
	gcc  -o main print_thread_id.o  $(CFLAGS)
%.o:%.c
	gcc -c  $<
.PHONY : clean
clean:
	rm *.o main
