// write a c program to display 1 to nth Armstrong no.
/*
	Example :

	A number is thought of as an Armstrong number if the sum of its own digits raised to the
	power number of digits gives the number itself.
	For example, 0, 1, 153, 370, 371, 407 are three-digit Armstrong numbers and
	1634, 8208, 9474 are four-digit Armstrong numbers and there are many more.

	*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i, end;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("Armstrong number between 1 to %d are: \n", end);

    for (i = 1; i <= end; i++)
    {
        sum = 0;

        /* Copy the value of num for processing */
        num = i;

        /* Find total digits in num */
        digits = (int)log10(num) + 1;

        /* Calculate sum of power of digits */
        while (num > 0)
        {
            /* Extract last digit */
            lastDigit = num % 10;

            // Find sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastDigit, digits));

            /* Remove the last digit */
            num = num / 10;
        }

        /* Check for Armstrong number */
        if (i == sum)
        {
            printf("%d, ", i);
        }

    }

    return 0;
}

/*output:-
* 
Enter upper limit: 200
Armstrong number between 1 to 200 are:
1, 2, 3, 4, 5, 6, 7, 8, 9, 153


*/