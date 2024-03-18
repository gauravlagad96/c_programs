// write a c program to display the cube of the number upto an integer.

#include <stdio.h>  // Include the standard input/output header file.
int main() {
	int i, ctr;  // Declare variables 'i' for loop counter and 'ctr' for user input.

	printf("Input number of terms : ");  // Print a message to prompt user input.
	scanf("%d", &ctr);  // Read the value of 'ctr' from the user.

	for (i = 1; i <= ctr; i++) // Start a for loop to iterate 'ctr' times.
	{											
		printf("Number is : %d and cube of the %d is :%d \n", i, i, (i * i * i));  // Print the number, its cube, and message.
	}
	return 0;
}

/*output:-

Input number of terms : 5
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125

*/