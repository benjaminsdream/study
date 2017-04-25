foobar.a: main.o  foo.o main.o
	@echo $(@D)
	@echo $(@F)
	
	@echo $(*D)
	@echo $(*F)
	
	@echo $(%D)
	@echo $(%F)
	
	@echo $(<D)
	@echo $(<F)
	
	@echo $(^D)
	@echo $(^F)
	
	@echo $(+D)
	@echo $(+F)
	
	@echo $(?D)
	@echo $(?F)
	ar crs	$@ $^
.PHONY : clean
clean:
	rm ./*.o foobar.a

