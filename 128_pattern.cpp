/*   
   * * * * * * * * *
     *           *
       *       *
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
            if (j <= 10 - i && j >= i) {
                if (i==j ||i==1 || j==10-i) {
                    printf(" *");
                }
                else {
                    printf("  ");  // inner space
                }
            }
            else {
                printf("  ");  // outer space
            }
        }
        printf("\n");
    }
}

/*   

    i   j    j
    1   1    9 ->123456789
    2   2    8 ->28
    3   3    7  -> 37    
    4   4    6   ->46
    5   5    5   -> 






*/