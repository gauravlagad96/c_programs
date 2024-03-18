/* write a c program that will take a number as input and find the absolute difference between the input number and
   51. If the input no is > 51,it will display triple the absolute difference.
   input : 53 
   output : 6

*/

#include<stdio.h>

void main()
{
	int n1, no;
	printf("Enter the Number:");
	scanf("%d", &n1);
	
	no = 51;
	(n1 < 51) ? printf("The absolute difference is:%d", no - n1) :
		printf("The triple absolute difference is :%d", (n1 - no) * 3);

}

