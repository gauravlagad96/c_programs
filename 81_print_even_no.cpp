//write a c program to print all even no from 1 to 100 using while loop.
#include <stdio.h>

int main() {
    int number = 2;

    // Using while loop to print even numbers from 1 to 100
    while (number <= 100) {
        printf("%d ", number);
        number += 2;  // Increment by 2 to get the next even number
    }

    return 0;
}
