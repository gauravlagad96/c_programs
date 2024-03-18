//write a c program to merge two array and display it.

#include <stdio.h>
void main() {
	int a[3][3], b[3][3], merge[3][3], i, j;

	printf("Enter the 9 elements in array a:");
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	printf("\nEnter the 9 elements in array b:");
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &b[i][j]);
	}

	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			merge[i][j] = a[i][j] + b[i][j];
	}

	printf("\n The merge array is :\n ");
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("\%d  ",merge[i][j]);
		}
		printf("\n");
	}
}