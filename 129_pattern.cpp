/*
   *   *   *   *   *
     *   *   *   *
       *   *   *
         *   *
           *
*/

#include<stdio.h>
void main() {
    int i, j;

    for (int i = 1; i <= 5; i++)     // row
    {
        for (j = 1; j <= 9; j++)      // col
        {
            if (j <= 10 - i && j >= i)   // 
            {
                if ((i%2==1 && j%2 ==1) || (i % 2 != 1 && j % 2 != 1) )  // 
                {
                    printf("*");    //
                }
                else {
                    printf(" ");  //inner spaces
                }
            }
            else {
                printf(" ");    // outer spaces
            }
               
        }
        printf("\n");
    }
}

/*

    i   j    j
    1   1    9 ->13579
    2   2    8 ->2 4 6 8
    3   3    7  ->3 5 7
    4   4    6   -> 4 6
    5   5    5   -> 5






*/