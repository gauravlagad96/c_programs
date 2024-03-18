// write a c program to swap first and last two digit. (4 digit no only)

#include <stdio.h>

int main() {
    int num, swapNo;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Swap the first and last two digits
    swapNo = num % 100; // Extract the last two digits
    swapNo *= 100;      // Move the last two digits to the beginning
    swapNo += num / 100; // Add the first two digits to the end

    // Output the swapped number
    printf("Number after swapping first and last two digits: %d\n", swapNo);

    return 0;
}

/*output:->

Enter a number: 5126
Number after swapping first and last two digits: 2651


*/
