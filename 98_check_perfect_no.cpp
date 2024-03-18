/* write a c program to Check Number Is Perfect Number or Not.using while loop.
	
	Example :
	perfect number, a positive integer that is equal to the sum of its proper divisors. 
	The smallest perfect number is 6, 
	which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.

	*/

#include<stdio.h>
void main() {

	int no, i=1, count = 0;
	printf("Enter the no to check perfect no or not");
	scanf("%d", &no);

	while (i<no)
	{
		if (no % i == 0) {
			count += i;
		
		}	
		i++;
	}
	if (count == no) {
		printf("%d is a perfect no",no);
	}
	else
	{
	printf("%d is not a perfect no", no);

	}
}