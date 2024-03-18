//wap to input perform addition of two matrices of same size.

#include<stdio.h>

void main() {

	int a[3][3], b[2][2],c[2][2],i, j;

	printf("Enter the 4 element in array A :\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
	}
	
	printf("\nEnter the 4 element in array B:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			scanf("%d", &b[i][j]);
	}
	printf(" array A :\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("%d  ", a[i][j]);
		printf("\n");
	}
	
	printf("\ array B:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("%d  ", b[i][j]);
		printf("\n");
	}

	for (i = 0; i <2; i++)
	{
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
	
		}
	}

	printf("\nThe addition of a and b array elements are: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++) {
			printf("%d   ", c[i][j]);

		}
		printf("\n");
	}

}