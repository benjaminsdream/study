SRCS = srcs/main.c
OBJS = srcs/main.o
all: $(OBJS)
	@echo $(SRCS)
	@echo $(OBJS)
	
srcs/%.o: srcs/abcmaindef.c
	gcc -c $^ -o $@
	
.PHONY : clean
clean:
	-rm ./*.o  ./srcs/*.o
