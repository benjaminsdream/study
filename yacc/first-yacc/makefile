OBJS=y.tab.o lex.yy.o
main: $(OBJS)
	gcc -o main $^

y.tab.c y.tab.h:temp-controller.y
	yacc -d $<
lex.yy.c:temp-controller.l
	lex $<

.PHONY : clean
clean:
	rm ./*.o *.c *.h
