// write a c program to find power of a number using while loop
//e.g  5^3 = 5*5*5=120;
#include <stdio.h>

int main() {
    double base, exponent, result = 1;

    // Input base and exponent from user
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent:");
    scanf("%lf", &exponent);

    // Calculate power using a while loop
    while (exponent > 0) {    // 2  3   -> 1*2=2*2->4*2=8
        result *= base;
        --exponent;
    }
    // Display the result
    printf("Result: %lf\n", result);

    return 0;
}
