/* write a c program to display 1 to nth  Number Is Perfect Number or Not using nested for loop.

	Example :
	perfect number, a positive integer that is equal to the sum of its proper divisors.
	The smallest perfect number is 6,
	which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.
	*/

#include <stdio.h>

int main() {
    int n, i, j, sum;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check each number from 1 to n
    for(i = 1; i <= n; i++) {
        sum = 0;

        // Find the sum of proper divisors
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        // Check if the number is a perfect number
        if (sum == i) {
            printf("%d is a Perfect Number.\n", i);
        }
    }

    return 0;
}
