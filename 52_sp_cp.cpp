// write a c program to  input selling price and cost price of product and check profit or loss.

#include<stdio.h>

void main(){

	int sp, cp;
	printf("Enter the selling price and cost price :");
	scanf("%d%d", &sp, &cp);

	if (sp > cp)
		printf("profit");
	else
		printf("loss");

}