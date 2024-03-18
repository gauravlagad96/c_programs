/* Check Number Is Prime Number or Not.

	Example :
	A prime number is a number that can only be divided by itself and 1 without remainders.
	The prime numbers from 1 to 100 are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
	53, 59, 61, 67, 71, 73, 79, 83, 89, 97.*/

#include<stdio.h>
void main() {

	int no;
	printf("Enter the no to check prime or not");
	scanf("%d", &no);
	
	while (no)
	{
		if (no % 2 != 0  || no==2) {
			printf("\n%d is prime no ", no);
		}
		else {
			printf("\n%d is not prime no ", no);

		}
		break;
	}

	}

