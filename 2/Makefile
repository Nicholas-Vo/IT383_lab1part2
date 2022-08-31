# "all" is a convention. the first target listed in a Makefile is built by default
all: program1 program2 

# program1 is the target, program1.c and program2.c are dependencies.
# GNU compiler collection (gcc) used to compile program1 w/ name program1
program1: program1.c
	gcc program1.c -o program1
program2: program2.c
	gcc program2.c -o program2
	
	