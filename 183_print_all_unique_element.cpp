// 4. write a c program to print all unique elements in an array.

#include <stdio.h>

void main() {
	int i, a[5], j, temp, flag = 0;

	printf("\nEnter the 5 elements: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	// sort the array
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	printf("\nArray elements after sorting are: ");
	for (i = 0; i < 5; i++)
		printf("   %d", a[i]);

	// print the unique element.
	for (i = 0; i < 5; i++)    //  1   2   2   2   3
	{
		if (a[i] == a[i + 1]) {
			printf("\nThe unique elements in the array are: %d", a[i]);
		}
	}
}