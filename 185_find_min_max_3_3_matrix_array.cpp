// write a program to find the min and max of 3*3 matrix.

#include<stdio.h>

void main() {
	int a[3][3], i, j,min,max;

	printf("Enter the 6 element in array:");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("\nThe array elements are: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			printf("%d  ", a[i][j]);

		}
		printf("\n");
	}
	min = a[0][0];
	max = a[0][0];
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (min> a[i][j])
				min = a[i][j];
			if (max < a[i][j])
				max = a[i][j];
		}

	}
	printf("\nmin is : %d and max is :%d", min, max);



}