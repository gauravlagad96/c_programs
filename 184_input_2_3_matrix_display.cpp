// write a program to input 2*3 matrix and display it.

#include<stdio.h>

void main() {
	int a[2][3], i, j;

	printf("Enter the 6 element in array:");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("\nThe array elements are: \n");
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j <3; j++) {
			printf("%d  ", a[i][j]);

		}
		printf("\n");
		
	}


}