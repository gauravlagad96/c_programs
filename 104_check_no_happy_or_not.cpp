 /*		A happy number is a number which follows a certain set of rules.
        When the sum of the squares of its digits is calculated, the resulting sum is equal to 1. 
        If the sum is equal to 4, then it is not a happy number. 
		The program takes in an integer and checks if it is a happy number by calling the digitsSquareSum function.
		If the number is equal to 1, the function returns 1, indicating that the number is a happy number. Otherwise, it returns 0.*/



#include<stdio.h>

int main() {
    int num, digit, sum = 0;

    // Prompt user for input
    printf("Enter any number: ");
    scanf("%d", &num);

    // While the number has more than one digit, calculate the sum of squares
    while (num > 0 || sum > 9) {

        if (num == 0) {
            num = sum;
            sum = 0;
        }
        // Get the last digit of the number
        digit = num % 10;
        // Add the square of the digit to sum
        sum += digit * digit;
        // Remove the last digit from the number
        num /= 10;
    }

    // If the sum is 1, it's a happy number. Otherwise, it's not.
    (sum == 1) ? printf("It is a happy number.\n") : printf("It is not a happy number.\n");

    return 0;
}