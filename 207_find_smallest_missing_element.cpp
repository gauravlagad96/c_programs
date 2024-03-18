/*
17) Write a program in C to find the smallest missing element from a sorted array? 
Expected Output : 
The given array is : 0 1 3 4 5 6 7 9 
The missing smallest element is: 2 
*/

#include <stdio.h>
int main() {
    int arr[] = { 0, 1, 3, 4, 5, 6, 7, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("The given array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int missing = -1;

    for (i = 0; i < size; i++) {
        if (arr[i] != i) {
            missing = i;
            break;
        }
    }

    if (missing == -1) {
        missing = size;
    }

    printf("The missing smallest element is: %d\n", missing);

    return 0;
}

/*output:->

The given array is: 0 1 3 4 5 6 7 9
The missing smallest element is: 2

*/