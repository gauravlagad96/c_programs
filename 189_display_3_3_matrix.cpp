//wap to input 3*3 array and display it 

#include<stdio.h>

void main() {
	int a[3][3], i, j, min, max;

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
}