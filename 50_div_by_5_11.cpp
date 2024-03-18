// write a pro to check whether the no is divisible by5 or 11;

#include<stdio.h>

void main() {

	int no;
	printf("Enter the number:");
	scanf("%d", &no);
	
	if (no % 5 == 0 && no % 11 == 0)
		printf("%d The no is divisible by 5 and 11.", no);
	else
		printf("%d The no is not divisible by 5 and 11.", no);


}