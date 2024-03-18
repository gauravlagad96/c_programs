// write a c program to count digit of a number.

#include<stdio.h>
void main() {
	int n, rem, count = 0;

	printf("Enter a positive integer (n): ");
	scanf("%d", &n);

	while (n != 0) {
		rem = n % 10;
		count++;
		n = n / 10;
	}
	printf("The total digit is: %d", count);
}