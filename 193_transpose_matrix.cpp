// write a c program to find the transpose of given matrix.

#include<stdio.h>

	void main() 
	{

		int a[3][3],b[3][3], i, j, sum;

		printf("Enter the 4 element in array A :\n");
		for (i = 0; i < 3; i++) 
		{
			for (j = 0; j < 3; j++)
				scanf("%d", &a[i][j]);
		}

		printf("array elements :\n");
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++)
				printf("%d  ", a[i][j]);
			printf("\n");
		}
		
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++)
				b[i][j] = a[j][i];
			printf("\n");
		}

		printf("\nThe transpose of matrix is\n");
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++)
				printf("%d  ", b[i][j]);// a[j][i]
			printf("\n");
		}

	}
