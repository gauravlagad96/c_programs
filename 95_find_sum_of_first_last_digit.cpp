// write a c program to find sum of first and last digit using while loop.

#include <stdio.h>

int main() {
    int number, originalNumber, lastDigit, firstDigit,sum;

    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit using a while loop
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;
    sum = lastDigit + firstDigit;
    // Display the first and last digits
    printf("The sum of first and last digit is: %d\n", sum);
    return 0;
}
