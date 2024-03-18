// write a c program to count sum of digit of a numbers.

#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit from the number
    }

    // Display the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
