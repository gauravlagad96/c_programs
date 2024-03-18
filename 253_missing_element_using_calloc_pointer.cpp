/*
write a program to enter the 5 values in ascending order and stroe in array and find the missing
element using calloc.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int* arr = (int*)calloc(n, sizeof(int)); // Allocating memory for array
    int i, j, count = 0;

    // Inputting values in ascending order
    printf("Enter 5 values in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Missing elements: ");
    for (i = arr[0]; i < arr[n - 1]; i++) 
    {
        // Check if i exists in the array
        for (j = 0; j < n; j++) {
            if (arr[j] == i) {
                break;
            }
        }
        // If i is not found in the array
        if (j == n) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("None");
    }

    // Free allocated memory
    free(arr);

    return 0;
}

/*output:->
Enter 5 values in ascending order:
2
5
10
11
12
Missing elements: 3 4 6 7 8 9
*/