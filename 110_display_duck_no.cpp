/*Write a c program to print 1 to nth duck numbers using nested for loop.
Example :
	A Duck number is a positive number which has zeroes present in it,
	For example 3210, 8050896, 70709 are all Duck numbers.
	Please note that a numbers with only leading 0s is not considered as Duck Number.
	For example, numbers like 035 or 0012 are not considered as Duck Numbers.
*/
#include <stdio.h>

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print duck numbers from 1 to n
    printf("Duck numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        int num = i;
        int hasZero = 0;

        // Check if the number is a duck number
        while (num > 0) {
            if (num % 10 == 0) {
                hasZero = 1;
                break;
            }
            num /= 10;
        }

        // Print the duck number
        if (hasZero) {
            printf("%d\n", i);
        }
    }
    return 0;
}
