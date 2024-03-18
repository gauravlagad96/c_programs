// write a c program swap two number without using third variabl.

#include<stdio.h>

void main() {

	int a = 11;
	int b = 22;
	printf("\nBefore swapping: %d   %d", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("\nAfter swapping: %d   %d", a, b);


}