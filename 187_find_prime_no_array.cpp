// wap to find prime number in an array input array element from users and also input array element 
// to check the prime no or not.


#include <stdio.h>
void main() {
	int a[3][3], i, no, j;
	int flag = 0;

	printf("Enter the 9 elements in array:");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("\n array elements are : \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n Enter the array elements to check the prime no or not.");
	scanf("%d", &no);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (no == a[i][j] && no % 2 != 0)
			{
				printf("%d is a prime no:", no);

			}
		}




	}
}