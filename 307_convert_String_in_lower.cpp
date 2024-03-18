#include<stdio.h>
#include<string.h>
void toLowerCase(char str[]);

void main() {
	char str[456];
	printf("Enter the string: ");
	gets(str);
	printf("\nInput string is: %s", str);
	toLowerCase(str);

}

void toLowerCase(char* str) {
	int i = 0;
	for (i = 0; i < str[i]; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i]+32;
		}
	}
	printf("\nThe lower case string is : %s  ", str);

}
/*output:-
Enter the string: GaUrav

Input string is: GaUrav
The reverse string is : gaurav
*/