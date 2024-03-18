// WAP to check number is neon or not.

#include<stdio.h>
#include<conio.h>

void main() {
	int no, rem, sum;
	printf("Enter the number:");
		scanf("\n%d", &no);     //9
		int sqr = no * no;
		rem = sqr % 10;   //81/10 =1
		int div = sqr/10;  // 80/10 = 8

		sum = rem + div;
		(no==sum) ? printf("%d:is neon number", no) : printf("%d:is not neon number", no);




}