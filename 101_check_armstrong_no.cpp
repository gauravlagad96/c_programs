/*
5. Check Number Is Armstrong Number or Not.

	Example :
	A number is thought of as an Armstrong number if the sum of its own digits raised to the
	power number of digits gives the number itself.
	For example, 0, 1, 153, 370, 371, 407 are three-digit Armstrong numbers and
	1634, 8208, 9474 are four-digit Armstrong numbers and there are many more.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, n = 0, result = 0;

    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the sum of nth power of individual digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
