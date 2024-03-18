// write a c program to create array of size 10,and calculate its sum

#include<stdio.h>
void main() {
	int i, a[10];
	int sum = 0;

	printf("Enter the 10 values of array: ");
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 9; i++) {
		sum += a[i];

	}
	printf("The values of a sum of array is %d:", sum);
	}