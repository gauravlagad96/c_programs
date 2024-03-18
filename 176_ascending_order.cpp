// wap to enter the 5 elements and display in ascending order.

#include<stdio.h>
void main() {
	int i, j, a[4],temp;
	printf("Enter the 5 elements in array:");
	for (i = 0; i < 4; i++) {   // input array element
		scanf("%d", &a[i]);
 }
	printf("Array elements are:");
	for (i = 0; i < 4; i++) {    // print array element.
		printf("%d ", a[i]);
	}
     
	// sort the array
	for (i = 0; i < 4; i++) {
		for (j = i+1; j < 4; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n ascending  Array elements are:");
	for (i = 0; i < 4; i++) {   // print reversed array element.
		printf("%d ", a[i]);
	}
    
 }