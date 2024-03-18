// write a  c program to check whether the no is even or odd. using conditional statement.

#include<stdio.h>
#include<conio.h>

void main() {

	int no;
	printf("Enter the number:");
	scanf("%d", &no);

	if (no%2 == 0)
		printf("Even no");
	else
		printf("Odd Number");

}