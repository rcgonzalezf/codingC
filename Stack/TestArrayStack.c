#include "ArrayStack.h";
#include <stdio.h>

int const MAX_PUSH_ELEMENTS = 10;

void testMaxPushElements();
void testMaxPopElements();

int main () {
	testMaxPushElements();
	testMaxPopElements();
	printf("End");
	return 0;
}

void testMaxPushElements(){
	int i;
	for (i=0; i<=MAX_PUSH_ELEMENTS; ++i) {
		push(i);
	}
}

void testMaxPopElements(){
	int i;	
	for (i=MAX_PUSH_ELEMENTS; i>= 0; --i) {
		printf("Element %d: %d \n",i, pop());
	}

}

