/*10). Write a program in C to delete an element at desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5   */

#include<stdio.h>
int main()
{
	int a[5], i, len, index;
	len = sizeof(a) / sizeof(a[0]);
	printf("enter value");
	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < len; i++)
	{
		printf("\t a[%d]=%d\n", i, a[i]); //1 2 3 4 5 
	}
	printf("enter deleted index");      //2
	scanf("%d", &index);
	if (index >= len + 1)                           //2>=4
	{
		printf("not deleted");
	}
	else
	{
	}

	// deleted element logic
	for (i = index; i < len - 1; i++)       //i=2
	{
		a[i] = a[i + 1];                   
		for (i = 0; i < len - 1; i++)
		{
			printf("a[%d]=%d\n", i, a[i]);  //1 2 4 5
		}
	}

}
