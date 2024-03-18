// write a c program to check whether the no is even or odd using switch case.

#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Switch case to check whether the number is even or odd
    switch (number % 2) {
    case 0:
        printf("%d is an even number.\n", number);
        break;
    case 1:
        printf("%d is an odd number.\n", number);
        break;
    default:
        printf("Invalid input!\n");
    }

    return 0;
}
