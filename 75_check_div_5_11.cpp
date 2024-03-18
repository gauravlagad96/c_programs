// write a c program to check the number is divisible by 5 and 11 using switch case.
/*
#include<stdio.h>
void main() {
	int no;
	printf("Enter the Number:");
	scanf("%d", &no);

	switch (no>0) {
	case 1:
		if (no % 5 == 0 && no % 5 == 0) {
			printf("%d is divi by 5 and 11", no);
		}
		else {
			printf("%d is not divisible by 5 and 11", no);

		}
		break;
	default:
		printf("something went wrong.");
		
		
	}

}
*/

#include <stdio.h>

int main() {
	int number;

	// Input from the user
	printf("Enter a number: ");
	scanf("%d", &number);

	// Check if the number is divisible by both 5 and 11 using switch case
	switch (number % 55) {
	case 0:
		printf("%d is divisible by both 5 and 11.\n", number);
		break;
	default:
		printf("%d is not divisible by both 5 and 11.\n", number);
	}

	return 0;
}
