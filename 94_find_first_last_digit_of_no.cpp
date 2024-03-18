// write a c program to find first and last digit of a number using while loop.
#include <stdio.h>

int main() {
    int number, originalNumber, lastDigit, firstDigit;

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

    // Display the first and last digits
    printf("Original number: %d\n", originalNumber);
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}
