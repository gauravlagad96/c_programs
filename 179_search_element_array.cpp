// write a c program to search element an array.

#include<stdio.h>

void main() {
	int i,a[5],no;
	
	printf("Enter the 5 element in array:  ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	printf("\nArray elements are:");
	for (i = 0; i < 5; i++)
		printf("%d  ", a[i]);
	printf("\nEnter the no to find in array: ");
	scanf("%d", &no);

	for (i = 0; i < 5; i++) {
		if (a[i] == no) {
			printf("%d are present in array", a[i]);
			break;
		}
	}

	


}