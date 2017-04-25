all:foo.o bar.o
	@echo $(CPPFLAGS)
	@echo $(CFLAGS)
	gcc -o main $^
.PHONY:clean
clean:
	rm ./*.o main
