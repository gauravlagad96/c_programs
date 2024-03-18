//Write c program to count frequency of each digit in integer.
#include <stdio.h>

int main() {
    // Declare variables
    int num, digit;
    int frequency[10] = { 0 }; // Array to store frequency of each digit

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ensure the entered number is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    // Count the frequency of each digit using a while loop
    while (num > 0) {
        // Extract the last digit of the number
        digit = num % 10;

        // Increment the frequency of the current digit
        frequency[digit]++;

        // Remove the last digit from the number
        num /= 10;
    }

    // Display the frequency of each digit
    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }

    return 0; 
}
