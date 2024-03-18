/*4. Check Number Is Strong Number or Not.

	Example :
	A strong number is one in which the factorial of the digits equals the number itself.
	1, 2, 145,etc
	Defination:-> a strong number (also known as a digital factorial) is a number in which the sum of
	the factorial of its digits is equal to the number itself.
	For example, 145 is a strong number because 1! + 4! + 5! = 145.
	*/

#include<stdio.h>
#include <stdio.h>

int main() {
	int number, originalNumber, remainder, result = 0;

	// Input a number from user
	printf("Enter an integer: ");
	scanf("%d", &number);

	originalNumber = number;

	// Calculate the sum of factorials of individual digits
	while (originalNumber != 0) {
		int i = 1, fact = 1;
		remainder = originalNumber % 10;

		// Calculate factorial of the digit
		while (i <= remainder) {
			fact *= i;
			++i;
		}

		result += fact;
		originalNumber /= 10;
	}

	// Check if the number is a strong number
	if (result == number)
		printf("%d is a Strong number.\n", number);
	else
		printf("%d is not a Strong number.\n", number);
	return 0;
}
