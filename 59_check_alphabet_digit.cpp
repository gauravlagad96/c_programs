// write a c program to check whether it is aphabet digit or special character.

#include<stdio.h>

void main() {

	char ch;
	printf("Enter the value");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
		printf("%c is a aphabet.", ch);
	}
	else if (ch>='0' && ch<='9')
	{
		printf("%c is a digit",ch);
	}
	else {
		printf("%c is a special character.", ch);
	}
}