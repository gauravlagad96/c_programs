// write a c program to insert the element on specifeid postion using malloc in a pointer.

#include<stdio.h>
#include<stdlib.h>

void main() {
	int n, i,j,temp;
	printf("Enter the no to defined array size: "); 
	scanf("%d", &n);

	int *ptr = (int*)malloc(n * sizeof(int));// array of pointer
  
	// input the array element
	printf("\nEnter the %d  array elements:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &ptr[i]);       // 5  7  3   4   9 

	//sort the array.
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (ptr[i] > ptr[j]) {
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;

			}
		}
	}

	// print sorted array.
	for (i = 0; i < n; i++)
		printf("%d  ", ptr[i]);

	// missing values logic
	printf("\nThe missing elements are: \n");
	for (i = 0; i < n; i++) {
		for (j = ptr[i] + 1; j < ptr[i + 1]; j++) {
			printf("%d   ", j);

		}
	}
}