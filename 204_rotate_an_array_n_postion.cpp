/*

14) Write a program in C to rotate an array by N positions ? 
Expected Output : 
The given array is : 0 3 6 9 12 14 18 20 22 25 27 
From 4th position the values of the array are : 12 14 18 20 22 25 27 
Before 4th position the values of the array are : 0 3 6 9 
After rotating from 4th position the array is: 
12 14 18 20 22 25 27 0 3 6 9 

*/

#include<stdio.h>
int main()
{
	int a[8], i, len, index;
	len = sizeof(a) / sizeof(a[0]);
	printf("enter value array\n");

	for (i = 0; i < len; i++)
	{
	  scanf("%d", &a[i]);		
	}

	printf("\nThe given array is :\n");
	for (i = 0; i < len; i++)
		printf("%d  ", a[i]);

	printf("\nenter index\n");
	scanf("%d", &index);
	printf("array after rotating\n");
	for (i = index; i < len; i++)
	{

		printf("%d ", a[i]);
	}

	for (i = 0; i < index; i++)
	{
		printf(" %d\t", a[i]);        
	}

}

/*output:->
enter value array
4
51
66
684
5
21
31
31

The given array is :
4  51  66  684  5  21  31  31
enter index
2
array after rotating
66   684   5   21   31   31     4    51
*/
