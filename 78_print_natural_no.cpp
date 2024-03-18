// write a c program to print first 1 to n natural numbers.

#include<stdio.h>
void main() {

	int no;
	int i = 1;
	printf("Enter the no");
	scanf("%d", &no);

	while (i <= no)
	{
		printf("%d\n", i);
		++i;
	}
}