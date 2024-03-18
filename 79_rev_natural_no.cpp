// wap to print natural no in reverse order.

#include<stdio.h>

void main() {
	int no;
	int i =1;
	printf("Enter the no.");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d\n", no);
		no--;
	}
}