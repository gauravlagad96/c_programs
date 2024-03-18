// write a c program to find the sum of all perfect numbers between 1 to nth.
/*What is Perfect number?
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.*/


#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Iterate through numbers from 1 to n
    for (i = 1; i <= n; i++) {
        int divisorsSum = 0;

        // Find divisors and calculate their sum
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                divisorsSum += j;
            }
        }

        // Check if the number is perfect and add it to the sum
        if (divisorsSum == i) {
            sum += i;
        }
    }

    // Display the sum of perfect numbers
    printf("Sum of perfect numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}

