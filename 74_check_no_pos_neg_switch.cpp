// write a c program to check wether the no is positive negative or zero using switch case.
#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking whether the number is positive, negative, or zero using switch case
    switch (1) {
    case 1:
        if (number > 0) {
            printf("%d is a positive number.\n", number);
            break;
        }
    case 2:
        if (number < 0) {
            printf("%d is a negative number.\n", number);
            break;
        }
    default:
        printf("%d is zero.\n", number);
        break;
    }

    return 0;
}
