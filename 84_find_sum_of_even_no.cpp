// write a c program to find sum of all even number between 1 to n.using while loop.
#include <stdio.h>

int main() {
	int n, sum = 0, i = 2;

	// Input the value of 'n'
	printf("Enter a positive integer (n): ");
	scanf("%d", &n);

	// Using while loop to find the sum of even numbers from 1 to n
	while (i <= n) {
		sum += i;
		i += 2;  // Increment by 2 to get the next even number
	}

	// Display the sum
	printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);

	return 0;
}
