// write a c program to enter a number and print it's reverse.

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;   // 25 %10 = 5    // 2%10=2
        reversedNum = reversedNum * 10 + remainder;  // 0*10+5=5   //= 5*10 +2=52;
        num /= 10;          // 2  // 2/10 =0 
    }
    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
