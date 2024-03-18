// write a c program to swap first and last digit of a num.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, swapNo;
    int fDigit, lDigit, digits;

    /* Input a num from user */
    printf("Enter any num: ");
    scanf("%d", &num);                                      //1122 -->2121

    /* Find last digit */
    lDigit = num % 10;          // 2

    /* Total num of digit - 1 */
    digits = (int)log10(num);              
    printf("\n total digit -1 = : %d", digits);  // 3

    /* Find first digit */
    fDigit = (int)(num / pow(10, digits));     // 1122 / 10^3   -->  1122/1000 == 1

    swapNo = lDigit;                         // 2
    swapNo *= (int)round(pow(10, digits));   // 2000
    swapNo += num % ((int)round(pow(10, digits)));//1122 % 1000== 122+2000===2122
    swapNo -= lDigit;        // 2122-2 ==2120
    swapNo += fDigit;     //2120+1 2121

    printf("\nOriginal num = %d", num);
    printf("\nnum after swapping first and last digit: %d", swapNo);

    return 0;
}

/*output:->
Enter any num: 9694

 total digit -1 = : 3
Original num = 9694
num after swapping first and last digit: 4699
*/