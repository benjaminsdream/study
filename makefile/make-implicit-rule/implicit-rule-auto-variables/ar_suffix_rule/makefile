foobar.a:foo.o bar.o
.c.a:
	$(CC) -c $< -o $*.a
	#(AR) r $@ $*.o
	$(RM) $*.o
