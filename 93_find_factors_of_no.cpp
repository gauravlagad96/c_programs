// write a c program to find the factors of a  number.
#include <stdio.h>

int main() {
    int number, i = 1;

    // Input a number from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Display factors using a while loop
    printf("Factors of %d are: ", number);

    while (i <= number) {
        if (number % i == 0) {
            printf("%d ", i);
        }
        ++i;
    }

    return 0;
}
