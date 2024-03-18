//8. Write a  C program to find total number of alphabets, digits or special character in a string. 

#include<stdio.h>
#include<string.h>
void dispAphaDigitSpecialChar(char[]);

void main() {
	char str[96];
	printf("Enter the string: ");
	gets(str);
	printf("\nInput string is: %s", str);
	dispAphaDigitSpecialChar(str);
}

void dispAphaDigitSpecialChar(char str[]) {
	int i, alpha = 0, digit = 0, specialChar = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			alpha++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digit++;
		}
		else
		{
			specialChar++;
		}
	}
	printf("\nThe alphabets count is : %d", alpha);
	printf("\nThe digit count is : %d", digit);
	printf("\nThe Special character count is : %d", specialChar);

}