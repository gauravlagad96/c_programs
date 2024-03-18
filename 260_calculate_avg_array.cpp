/*
4.Program to calculate average of an array
*/

#include<stdio.h>
int calArrayAvg(int[]);
int avg, i = 4,sum=0;

void main() {
	int a[5], i;
	printf("Enter the 5 array element :\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	
	int result = calArrayAvg(a);
	printf("\n The avg of array is %d", result);
}

int calArrayAvg(int a[]) {
	if (i >= 0) {
		sum += a[i];
		i--;
		//avg = sum / 5;
		calArrayAvg(a);
	}
	avg = sum / 5;

	return avg;
}
/*output:->
Enter the 5 array element :
5
6
7
8
9
 The avg of array is 7
*/