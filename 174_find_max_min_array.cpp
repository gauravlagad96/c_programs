// wap to find max and min value from array;

#include<stdio.h>
void main() {

	int i, a[6], max, min;
	printf("Enter the array element: ");
	for (i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];
	for (i = 0; i < 6; i++) {
		if (a[0] < a[i]) {
			max = a[i];
		}
		else {
			min = a[i];

		}

	}

	printf("The max no is :%d and min no is : %d", max, min);
}