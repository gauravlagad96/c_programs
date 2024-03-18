/* 12) . Write a program in C to find a pair with given sum in the array. 
Expected Output : 
The given array : 6 8 4 -5 7 9 
The given sum : 15 
Pair of elements can make the given sum by the value of index 0 and 5

*/

#include<stdio.h>

void main() {
	int arr[] = {6,8,4,-5,7,9};
	int i, j;
	int sum = 15;

	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 6; j++) {
			if (arr[i] + arr[j] == sum) {
				printf("\nthe given sum by the value of index %d and %d ", i, j);
			}

		}

	}

}
/*output:->
the given sum by the value of index 0 and 5
the given sum by the value of index 1 and 4
*/