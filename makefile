all: dirBin fibonacci ArrayStack

dirBin: 
	mkdir -p bin

fibonacci: fibonacci.c
	gcc fibonacci.c -o bin/fibonacci.out

ArrayStack: Stack/TestArrayStack.c
	gcc Stack/TestArrayStack.c Stack/ArrayStack.c Stack/ArrayStack.h -o bin/TestArrayStack.out
