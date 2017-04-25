foobar.a:bar.o foo.o bar.o
	@echo $@ 
	@echo $%
	@echo $?
	@echo $+
	@echo $*
	ar crs $@ $^
.PHONY : clean
clean:
	rm ./*.o foobar.a
