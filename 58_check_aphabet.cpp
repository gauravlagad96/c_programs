// write a c prog to input any alphabet and check it is vowel or consonant.

#include<stdio.h>
void main() {

	char ch;
	printf("Enter the character:");
	scanf("%c", &ch);

	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
		ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("%c is a vowel", ch);

	}
	else
	{
		printf("%c is a consonant.",ch);
	}

}