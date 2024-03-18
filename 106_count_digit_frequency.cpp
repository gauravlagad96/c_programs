// C program to count frequency of digits in an integer.

#include <stdio.h>

int main() {
    int num, digit, temp;
    int frequency[10] = { 0 }; // Array to store frequency of each digit

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make a copy of the number to avoid modifying the original
    temp = num;

    // Loop to extract digits and count frequency
    while (temp != 0) {
        digit = temp % 10; // Extract the last digit
        frequency[digit]++; // Increment the frequency of the digit
        temp /= 10;         // Move to the next digit
    }

    // Display the frequency of each digit
    printf("Digit frequencies in the number %d:\n", num);
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
