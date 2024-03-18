/* 

16). Write a program in C to find the Floor and Ceil of the number 0 to 10 from a sroted array. 
Expected Output : 
The given array is : 1 3 5 7 8 9 
Number: 0 ceiling is: 1 floor is: -1 
Number: 1 ceiling is: 1 floor is: 1 
Number: 2 ceiling is: 3 floor is: 1 
Number: 3 ceiling is: 3 floor is: 3 
Number: 4 ceiling is: 5 floor is: 3 
Number: 5 ceiling is: 5 floor is: 5 
Number: 6 ceiling is: 7 floor is: 5 
Number: 7 ceiling is: 7 floor is: 7 
Number: 8 ceiling is: 8 floor is: 8
 Number: 9 ceiling is: 9 floor is: 9 
Number: 10 ceiling is: -1 floor is: 9

*/
#include <stdio.h>

int main() {
    int arr[] = { 1, 3, 5, 7, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("The given array is: ");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    for (i = 0; i <= 10; i++) {
        int floor = -1, ceil = -1;

        for (j = 0; j < size; j++) {
            if (arr[j] == i) {
                floor = ceil = arr[j];
                break;
            }
            else if (arr[j] < i) {
                floor = arr[j];
            }
            else if (arr[j] > i) {
                ceil = arr[j];
                break;
            }
        }

        printf("Number: %d ceiling is: %d floor is: %d\n", i, ceil, floor);
    }

    return 0;
}

/*output:->

The given array is: 135789
Number: 0 ceiling is: 1 floor is: -1
Number: 1 ceiling is: 1 floor is: 1
Number: 2 ceiling is: 3 floor is: 1
Number: 3 ceiling is: 3 floor is: 3
Number: 4 ceiling is: 5 floor is: 3
Number: 5 ceiling is: 5 floor is: 5
Number: 6 ceiling is: 7 floor is: 5
Number: 7 ceiling is: 7 floor is: 7
Number: 8 ceiling is: 8 floor is: 8
Number: 9 ceiling is: 9 floor is: 9
Number: 10 ceiling is: -1 floor is: 9

*/