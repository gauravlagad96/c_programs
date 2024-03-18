/* 7) WAP to enter the 10 element array and print the occurrence of every element ?
		 10 20 30 10 20 50 30 10 30 10
  Output:
Element                      count
10  --------------------      4
20  --------------------      2
30  --------------------      3
50  --------------------      1

*/
#include <stdio.h>
void main()
{
	int j, i, a[10], min, temp,count=1;

	printf("Enter the 10 array elements\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	printf("array elements\n");
	for (i = 0; i < 10; i++)

		printf("%d  ", a[i]);

	//sort the array in ascending order.
	min = a[0];
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 10; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	// after sorting
	printf("\nafter sorting: \n");
	for (i = 0; i < 10; i++)
		printf("%d  ", a[i]);

	printf("\nThe counts of occurence of each element are:");
	for (i = 0; i < 10; i++) {
		if (a[i] == a[i + 1]) {
			count++;
		}
		else {
			printf("\n %d --> %d times", a[i], count);
			count = 1;
		}
	}




}