// WAP to check whether the character is vowel or not.
#include <stdio.h>

int main() {
	char ch;


	printf("Enter a ch: ");
	scanf("%c", &ch);

	(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		? printf("%c is a vowel.\n", ch)
		: printf("%c is not a vowel.\n", ch);

	return 0;
}
