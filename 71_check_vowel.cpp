// write a c program to check whether an aphpabet is vowel or consonant.

#include<stdio.h>
void main() {
	char ch;
	printf("Enter the alphabet:");
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is Vowel", ch);
		break;

	default:
		printf("%c is consonant.",ch);
	}
 }