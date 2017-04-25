main:foo.o bar.o
	gcc -o $@ $^ $@.c $(CFLAGS) $(LDFLAGS)

.PHONY:clean
clean:
	rm *.o main
