// wap to display/find the prime no in array.


#include <stdio.h>
void main() {
	int a[3], i, no, j,count;

	printf("Enter the 3 elements in array:");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}

	// printing prime no in an array.

	printf("\n The prime elements are:");
	for (i = 0; i <=3; i++)
	{
		count = 0;
		for (j = 0; j <= i; j++)
		{
			if (a[i] % a[j] == 0)
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d\t", a[i]);
		}
	}


}