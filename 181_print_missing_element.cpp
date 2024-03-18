// wap to print missing elements in array.


int i, j, temp,k, a[5];
#include<stdio.h>
void main() {
	int i, a[5], no;
	// input array elements
	printf("Enter the 5 element in array:  ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	// print array elements
	printf("\nArray elements are:");
	for (i = 0; i < 5; i++)
		printf("%d  ", a[i]);

	// sort array in ascending order
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}

		}
	}
	printf("\nSorted array is: ");
	for (i = 0; i < 5; i++)
		printf("%d   ", a[i]);

	printf("\n The missing elements are:  ");
	for (i = 0; i < 5; i++) {
		for (k = a[i] + 1; k < a[i + 1]; k++) {
			printf("%d  ", k);
		}
	}
}