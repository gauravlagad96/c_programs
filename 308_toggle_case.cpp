//7. Write a  C program to toggle case of each character of a string. 
/* Toggle string means convert the upperCase letter to lowerCase and lowerCase to upperCase letters.*/
#include<stdio.h>
#include<string.h>
void toToggleCase(char str[]);

void main() {
	char str[456];
	printf("Enter the string: ");
	gets(str);
	printf("\nInput string is: %s", str);
	toToggleCase(str);

}

void toToggleCase(char str[]) {
	int i = 0;
	for (i = 0; i < str[i]; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		else {
			//str[i] >= 97 && str[i] <= 122;
			str[i] -= 32;
		}

	}
	printf("\nThe toggle string is : %s", str);

}

/*output:-
Enter the string: GAUrav

Input string is: GAUrav
The toggle string is : gauRAV

*/
