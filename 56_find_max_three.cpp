// write a c program to find maximum between three numbers.

#include<stdio.h>

void main() {
	int n1, n2, n3;
	printf("Enter the three Numbers:");
	scanf("%d%d%d", &n1, &n2, &n3);

	if (n1 > n2 && n1 > n3) {
		printf("%d is a maximum number.", n1);
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf("%d is a maximum numbber",n2);
	}
	else {
		printf("%d is a maximum number.", n3);
	}

}