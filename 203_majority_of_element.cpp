/*
 13) Write a program in C to find the majority element of an array ? 
A majority element in an array A[] of size n is an element that appears more than n/2 times (and 
hence there is at most one such element). 

Expected Output : 
The given array is : 4 8 4 6 7 4 4 8 
There are no Majority Elements in the given array.
*/
#include<stdio.h>
int main()
{
	int a[8], len, i, temp, j = 0, count = 1, flag;
	len = sizeof(a) / sizeof(a[0]);
	printf("enter values\n");        //4 8 4 6 7 4 4 8
	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("display ascending order");

	for (i = 0; i < len; i++)
	{
		printf("%d  ", a[i]); //4 4 4 4 6 7 8 8 
	}

	// majority element logics.
	count = 1;
	for (i = 0; i < len; i++)
	{
		if (a[i] == a[i + 1])  //4 == 4
		{
			count++; //2 3 4 
			if (count > (len) / 2) //4>4
			{
				flag = 1;
				break;
			}
		}
		else
		{
			count = 1;
			flag = 0;
		}
	}

	if (flag)  //0
	{
		printf("\nmajority element in the given array %d", a[i]);
	}

	else
	{
		printf("\n majority element is not found");
	}
}

/*output:=>
enter values
5
55
5
5
5
5
5
6
display ascending order5  5  5  5  5  5  6  55
majority element in the given array 5
*/