/* 

18) Write a program in C to to print next greater elements in a given unsorted array. Elements for 
which no greater element exist, consider next greater element as -1. 
 
Expected Output : 
The given array is : 5 3 10 9 6 13 
Next Bigger Elements are: 
Next bigger element of 5 in the array is: 10 
Next bigger element of 3 in the array is: 10 
Next bigger element of 10 in the array is: 13 
Next bigger element of 9 in the array is: 13 
Next bigger element of 6 in the array is: 13 
Next bigger element of 13 in the array is: -1 

Next Bigger Elements Array: 
10 10 13 13 13 -1
      
*/

#include <stdio.h>
 int main() {
    int arr[] = { 5, 3, 10, 9, 6, 13 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int next_bigger[6];

    // Find next greater element for each element in the array
    for (int i = 0; i < 6; i++) {
        next_bigger[i] = -1;  // Initialize to -1
        for (int j = i + 1; j < 6; j++) {
            if (arr[j] > arr[i]) {
                next_bigger[i] = arr[j];
                break;
            }
        }
    }

    // Output the next greater elements
    printf("The given array is: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nNext Bigger Elements are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Next bigger element of %d in the array is: %d\n", arr[i], next_bigger[i]);
    }

    // Output the next bigger elements array
    printf("Next Bigger Elements Array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", next_bigger[i]);
    }
    printf("\n");
    return 0;
}

 /*output:-
 
 The given array is: 5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
Next Bigger Elements Array:
10 10 13 13 13 -1

 */