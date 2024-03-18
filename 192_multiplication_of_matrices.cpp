// wap to print multiplication of matrix of same size.

#include<stdio.h>

void main() {

	int a[2][2], b[2][2], c[2][2], i, j,sum;

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

	// multiplication logics
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) 
		{
			sum = 0;
			for (int k = 0; k < 2; k++) {
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}

	}

	printf("\ Multiplication of array is  :\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("%d  ", c[i][j]);
		printf("\n");
	}






}