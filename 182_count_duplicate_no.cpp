// write a c program to count the total no of duplicate elements(occurence) in an array.

#include <stdio.h>

  void main() {
	int i, a[5], count = 1,j,temp;

	printf("\nEnter the 5 elements: ");
	for (i = 0; i < 5; i++)
		scanf("%d",&a[i]);

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

	//count the duplicate.
	for (i = 0; i < 5; i++) {
			if (a[i] == a[i+1]) {
				count++;
			}
			else {
				printf("\n the count of %d is------> %d", a[i], count);
				count = 1;
			}

		
	}
  }
