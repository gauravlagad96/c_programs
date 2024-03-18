/*9) . Write a program in C to separate odd and even integers in separate arrays ?
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32

Expected Output :
The Even elements are :
42 56 32

The Odd elements are :
25 47 */

#include <stdio.h>
void main()
{
	int arr[5], even[5], odd[5];
	int i;
	int even_count = 0, odd_count = 0;

	
	// Input elements of the array
	printf("Enter %d integers:\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	// Separating even and odd numbers
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even[even_count] = arr[i];
			even_count++;
		}
		else {
			odd[odd_count] = arr[i];
			odd_count++;
		}
	}
	// Printing even numbers
	printf("\nEven numbers: ");
	for (i = 0; i < even_count; i++) {
		printf("%d ", even[i]);
	}

	// Printing odd numbers
	printf("\nOdd numbers: ");
	for (i = 0; i < odd_count; i++)
	{
		printf("%d ", odd[i]);
	}

}


