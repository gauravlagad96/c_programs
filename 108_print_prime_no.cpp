// write a c program to print 1 to nth prime number using for loop.
#include <stdio.h>

void main() {

	int n, i, j, count;
	printf("Enter the no:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{

				count++;
			}
		}
		if (count == 2)
		{
			printf("%d\t", i);
		}
	}
}
				