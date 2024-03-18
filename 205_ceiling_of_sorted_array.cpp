/*
*
 15) Write a program in C to find the ceiling in a sorted array?
Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array
 greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Expected
Output :
The given array is : 1 3 4 7 8 9 9 10
The ceiling of 5 is: 7

*/


#include<stdio.h>
int main()
{
    int a[8], i, len, x;
    len = sizeof(a) / sizeof(a[0]);
    printf("enter element\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    // printing array
    for (i = 0; i < len; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nEnter the element to check its ceiling:  ");
    scanf("%d", &x);

    for (i = 0; i < len; i++)
    {
        if (a[i] >= x)
        {
            printf("celling of %d is %d", x, a[i]);
            break;
        }

        /*
        else if (x > a[i]) {
            printf("\nceiling of %d is %d ", x, -1);
            break;
        }else if (x < a[i]) {
            printf("\nceiling of %d is %d ", x, x);
            break;
        }
        */
    }
}

