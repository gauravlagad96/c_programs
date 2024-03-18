// write a c program to find maximum of two numbers. using if esle statement


#include<stdio.h>

void main() {

	int n1,n2;
	printf("Enter the two Number:");
	scanf("%d%d", &n1, &n2);

	if (n1 > n2)
		printf("%d is a Maximum.", n1);
	else
		printf("%d is a maximum.", n2);
		 

}