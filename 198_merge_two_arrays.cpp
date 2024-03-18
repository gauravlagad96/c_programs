/*8) . Write a program in C to merge two arrays of same size sorted in decending order. 
Test Data : 
Input the number of elements to be stored in the first array :3 
Input 3 elements in the array : 
element - 0 : 1 
element - 1 : 2 
element - 2 : 3 
Input the number of elements to be stored in the second array :3 
Input 3 elements in the array : 
element - 0 : 1 
element - 1 : 2 
element - 2 : 3 
Expected Output : 
The merged array in decending order is : 
3 3 2 2 1 1*/

#include <stdio.h>
void main()
{
	int j, i, a[] = { 1,2,3 }, b[] = { 1,2,3 }, c[6],temp;

	for (i = 0; i <3; i++)
	{
		c[i] = a[i];	
	}
	
	for (i = 0; i < 3; i++)
	{
		c[i+3] = b[i];
	}
	// sort the array in descending order
	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 6; j++) {
			if (c[i] < c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	printf("\nThe merge array is: \n");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", c[i]);
	}

	



}