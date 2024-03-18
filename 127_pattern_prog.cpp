/*
   * * * * * * * * *
     * * * * * * *
       * * * * *
         * * *
           *
   
   */


#include<stdio.h>
void main() {
    int i, j;

    for (int i = 1; i <= 5; i++)     // row
    {  
        for (j = 1; j<= 9; j++)      // col
        {
            if (j <= 10 - i && j>=i) {
                printf(" *");
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }
}
/*

  i  j   j 
  1  1   9 ->123456789
  2  2   8 -> 
  3  3   7 ->   (j>=i) && (j<=10-i)
  4  4   6
  5  5   5







*/