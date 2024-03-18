/*
11). Write a program in C to find the second largest element in an array ?
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
 Expected Output :
The Second largest element in the array is : 6

*/

#include<stdio.h>
int main()
{
	int a[5], i, j, temp, len, max, smax;
	len = sizeof(a) / sizeof(a[0]);
	printf("enter value");            //2 9 1 4 6 
	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}

	// sort the array
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (a[i] > a[j])     //2>9  2>1 2>4 2>6    
			{
				temp = a[i];   // =1
				a[i] = a[j];    // =2
				a[j] = temp;   //=1
			}
		}
	}


	printf("array after sorting\n");
	for (i = 0; i < len; i++)
	{
		printf("%d   ", a[i]);  //1 2 4 6 9
	}

	// second max element logic
	max = a[0];          //1
	for (i = 0; i < len; i++)
	{

		if (max < a[i])              //1<1 1<2 2<4 4<6 6<9
		{
			smax = max;             //=1   2  4 6
			max = a[i];            //=2  4   6 9
		}
	}

	printf("\nsmax =%d\n", smax); //6
	//printf("max=%d", max);	    //9		
}
