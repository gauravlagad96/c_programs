/*5). Write a program to enter the 5 values in ascending order and store in array and find out the 
missing element from array? 
   
1 5 9 13 17

Missing elements : output should like as
2 3 4 6 7 8 10 11 12 14 15 16

*/

#include<stdio.h>
void main() {
	int i, a[5], no,k;

	// input array elements
	printf("Enter the 5 element in Ascending order:\n  ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	
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