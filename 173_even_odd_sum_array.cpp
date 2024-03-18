
// write a program to calculate sum of even and odd number of an array;

#include<stdio.h>
void main() {
	int a[10],evensum=0,oddsum=0;
	printf("Enter the array element\n :");
	for (int i = 0; i <=9; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i <= 9; i++) {
		if (a[i] % 2 != 0) {
			oddsum += a[i];
		}
		else {
			evensum += a[i];
		}
	}
	printf("The even sum is : %d and Odd sum is : %d", evensum, oddsum);
}