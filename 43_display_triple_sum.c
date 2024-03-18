/* write a c program to compute the sum of the two input values.If the two values are same display their triple sum.
 input: 2	2
 output: 12
*/

#include<stdio.h>
#include<conio.h>

void main() {

	int a, b;
	printf("Enter the two values");
	scanf("%d%d", &a, &b);

	(a == b) ? printf("%d",(a + b)* 3) : printf("values are not same");

}
