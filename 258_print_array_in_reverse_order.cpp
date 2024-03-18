/*2. 

Program to print an array in reverse order 3.

*/

void revArray(int []);
#include<stdio.h>
int i = 4;
void main() {
	int arr[5];
	//int arr[5] = { 4,8,2,0,1 };
	printf("Enter the array");
	for (int j = 0; j < 5; j++)
		scanf("%d", &arr[j]);
	printf("\n");
	printf("The reverse array is: ");
	revArray(arr);
}

void revArray(int x[]) {

	if (i >= 0) {
		printf("%d  ", x[i]);
		i--;
		revArray(x);
	
	}
}
