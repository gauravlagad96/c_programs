// wap to find the occurence of each element of array[when array is sorted]

#include<stdio.h>
void main() {
	int i, j, a[5], temp, count = 1;
	printf("Enter the 5 elements in array:");
	for (i = 0; i < 8; i++) {   // input array element
		scanf("%d", &a[i]);
	}
	printf("Array elements are:");
	for (i = 0; i < 8; i++) {    // print array element.
		printf("%d ", a[i]);
	}

	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 8; j++) {  //swap the small no in ascending order 
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nThe counts of occurence of each element are:");
	for (i = 0; i < 8; i++) {
		if (a[i] == a[i + 1]) {
			count++;
		}
		else {
			printf("\n %d --> %d times", a[i], count);
			count =1;
		}
	}



}
/*output:->
	Enter the 8 elements in array:
3
5
6
4
3
5
6
3
Array elements are:3 5 6 4 3 5 6 3
The counts of occurence of each element are:
 3 --> 3 times
 4 --> 1 times
 5 --> 2 times
 6 --> 2 times
*/
