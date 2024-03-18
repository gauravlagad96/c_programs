// write a c program to find maximum between two no using switch case.

#include<stdio.h>

void main() {

	int n1, n2;
	printf("Enter the two no");
	scanf("%d%d", &n1, &n2);

	switch (n1>n2)
	{  
	case 1:
		printf("%d is maximum.",n1);
		break;

	default:
		printf("%d is maximum", n2);
	}

}