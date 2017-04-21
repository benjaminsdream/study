names= foo bar lose
files1 = $(foreach name,$(names),xx$(name).h)
files=$(foreach name,$(names),$(addsuffix .c,$(name)))
all:
	@echo $(files)
	@echo $(files1)
