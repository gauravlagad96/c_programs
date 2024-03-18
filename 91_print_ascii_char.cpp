// write a c program to print all ascii character with their values.
#include <stdio.h>

int main() {
    int i = 0;

    // Print ASCII characters with their values
    while (i <= 127) {
        printf("ASCII value of %c is %d\n", i, i);
        ++i;
    }
    return 0;
}
