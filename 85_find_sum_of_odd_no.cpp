// write a c program to find sum of all odd number between 1 to n.using while loop.
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of odd numbers using a while loop
    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    // Display the result
    printf("Sum of odd numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
