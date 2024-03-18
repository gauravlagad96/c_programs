// write a c program to swap two using third variable.

#include<stdio.h>

void main() {

	int a, b, c;
	printf("Enter the two no:");
	scanf("%d%d", &a, &b);
	printf("\nbefore swapping\t%d\t%d", a, b);

	c = a;
	a = b;
	b = c;
	printf("\nAfter swapping\t%d\t%d",a,b);

}
