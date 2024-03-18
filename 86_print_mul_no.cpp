// write a c program to print multiplication table using while loop.
#include <stdio.h>

int main() {
    int num, i = 1;

    // Input the number for which you want the multiplication table
    printf("Enter the number for multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table using a while loop
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
