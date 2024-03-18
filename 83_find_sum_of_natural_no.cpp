// write a c program to find sum of all natural number between 1 to n.using while loop.

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input the value of 'n'
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Using while loop to find the sum of natural numbers from 1 to n
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the sum
    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
