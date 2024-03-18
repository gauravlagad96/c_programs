/* write a c program to check whether the number is palindrome or not.
Defination:A palindrome number is a number that reads the same forward as backward. 
e.g. 121 -> 121
*/

#include <stdio.h>

int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reverse the number
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        originalNumber /= 10;
    }

    // Check if the number is a palindrome
    if (number == reversedNumber)
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}
