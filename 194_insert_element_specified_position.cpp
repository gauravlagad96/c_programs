/*4) WAP to insert the element on specified position in array  ? 
e.g. declare the array of size 6 and store 5 values in it  and last block should be empty 
 0     1	 2	 3	 4	 5
 10	  20	30	40	50	--


Enter the index on which value want to be insert  
e.g.    index    = 2  
Enter the value which want to store on index  
Value =  100 
When we insert the value on index then we need to shift the values from index to next index 
e.g. 
0	1	2  3  4  4
10 20 100 30 40 50*/

#include<stdio.h>

void main()
{

	int a[6], i, value, index;

	printf("\nEnter the 5 element in array:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the index on which value want to be insert:\n");
	scanf("%d", &index);
	printf("\nEnter the value which want to store on index:\n");
	scanf("%d", &value);

	//logic of insert element at specified position
	for (i = 4; i>=index; i--) {
		a[i + 1] = a[i];
	}
	a[index] = value;
	printf("\n Array after inseting elements:\n");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", a[i]);
	}


}

