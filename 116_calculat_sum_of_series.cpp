/* write a c program to calculate the  sum of series upto nth number.
   Input the value for nth term 5:
 1=1
 1+2=3
 1+2+3=6
 1+2+3+4=10
 1+2+3+4+5=15

 The sum of the above series is:35

 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the value for nth term
    printf("Input the value for nth term: ");
    scanf("%d", &n);

    // Loop to iterate through each term and calculate the sum
    for (i = 1; i <= n; i++) {
        // Print the series
        printf("1");
        for (int j = 2; j <= i; j++) {
            printf("+%d", j);
        }
        printf("=");

        // Calculate the sum up to the current term
        sum += (i * (i + 1)) / 2;

        // Output the sum up to the current term
        printf("%d\n", sum);
    }

    // Output the total sum of the series
    printf("\nThe sum of the above series is: %d\n", sum);

    return 0;
}



/*output:->
* 
Input the value for nth term: 5
1=1
1+2=4
1+2+3=10
1+2+3+4=20
1+2+3+4+5=35

The sum of the above series is: 35
*/