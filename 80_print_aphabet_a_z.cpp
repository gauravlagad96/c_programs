// write a program to print all alphabet form a to z using while loop.
#include <stdio.h>

int main() {
    char alphabet = 'A';

    // Using while loop to print alphabets from 'a' to 'z'
    while (alphabet <= 'Z') {
        printf("%c ", alphabet);
        alphabet++;
    }

    return 0;
}
