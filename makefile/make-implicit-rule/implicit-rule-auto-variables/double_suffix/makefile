
main:foo.o bar.o main.o
	@echo $(.SUFFIXES)
	gcc -o $@  $^
.c.o: foo.h bar.h
	gcc -g -o $@ -c $<
.PHONY :clean
clean:
	rm ./*.o main
