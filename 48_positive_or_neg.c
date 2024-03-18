// write a c program to check whether the number is  positive or negative using if else.

#include<conio.h>
#include<stdio.h>
void main() {

	int no;
	printf("Enter the number:");
	scanf("%d", &no);
	if (no > 0)
		printf("Positive number");
	else
		printf("negative number");
}