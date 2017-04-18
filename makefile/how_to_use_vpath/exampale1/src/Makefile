PROGS = foo
OBJECTS=foo.o bar.o
OBJDIR = ../obj
#VPATH = $(OBJDIR)
$(OBJDIR)/%.o : %.c
	$(COMPILE.c) $< -o $(OBJDIR)/$@


OBJPROG = $(addprefix $(OBJDIR)/, $(PROGS))

all : $(OBJPROG)

$(OBJPROG):$(addprefix $(OBJDIR)/, $(OBJECTS))
	$(LINK.o) $^ $(LDLIBS) -o $@

.PHONY: clean
clean:
	rm -f ../obj/*
