/*
 *  Easy and simple implementation of a stack.
 *  ArrayStack.c
 *
 *  Created by Roberto Carlos Gonzalez Flores on 11/3/12.
 *  Copyleft 2012.
 *
 */

#include "ArrayStack.h"
#include <stdio.h>;

#define MAX_ELEMENTS 10

int stack[MAX_ELEMENTS];
int currentIndex=0;

int push (int element) {
	
	if( currentIndex >= MAX_ELEMENTS)
	{
		// Can't push the element, the stack is full
		printf("The element %d can't be pushed in the stack, the stack is full \n", element);
	}else {
		stack[currentIndex++]=element;
	}
	
	return element;
}

int pop(){
	if (currentIndex <= 0) {
		printf("The stack is empty.");
		return -1;
	}
	--currentIndex;
	return stack[currentIndex];
}

