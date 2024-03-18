// write a c prog to check the apphabeat or not.

#include <stdio.h>

void main() {
	char ch;
	printf("Enter the Character:");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
		printf("%c is a character.", ch);
	else
		printf("%c is not a character", ch);

}