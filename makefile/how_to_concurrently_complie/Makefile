all : publish
publish : B C
	@echo "Complete"

B : A
	cd B && $(MAKE)
C : A
	cd C && $(MAKE)

A:
	cd A && $(MAKE)

.PHONY : A B C publish all
