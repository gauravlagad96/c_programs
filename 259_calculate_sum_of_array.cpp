/*
Program to calculate sum of an array 

*/
#include<stdio.h>
void sumOfArray(int[]);
int i=4,sum = 0;


void main() {
	int a[5],i;
	printf("\nEnter the 5 elements in an array :\n ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	
	sumOfArray(a);

}

void sumOfArray(int a[]) {
	//printf("\nI=%d\n",i);
	if (i >=0) {
		sum +=a[i];
		i--;
		sumOfArray(a);
		//printf("\n %d  sum=%d\n", a[i], sum);
	}
	else {
		printf("\nThe sum of array is: %d ", sum);
	}

  
}

/*output:->
Enter the 5 elements in an array:
6
6
6
6
6

The sum of array is: 30

*/