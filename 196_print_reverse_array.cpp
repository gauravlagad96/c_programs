/*6).WAP to enter the five element in array and reverse it ?
	 10 20 30 40 50
	 50 40 30 20 10

*/

#include <stdio.h>
void main()
{
	int n, i, a[5], len, mid, temp;

	printf("Enter the 5 array elements\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	printf("array elements\n");
	for (i = 0; i < 5; i++)
		printf("%d  ", a[i]);

	len = sizeof(a) / sizeof(a[0]);//size of the data type.
	//printf("\nthe length of array is %d : ", len);
	mid = len / 2;
	//printf("\n the mid of array is : %d ", mid);
	int end = len - 1;
	//printf("\nThe end of the array is : %d", end);

	for (i = 0; i < mid; i++) {
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}

	printf("\narray elements after reverse:\n");
	for (i = 0; i < 5; i++)
		printf("%d  ", a[i]);

}



