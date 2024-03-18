//Write a C program to search all occurrences of a character in given string.
#include<stdio.h>
#include <string.h>

int main()
{
	char s[1000], ch;
	int i, count = 0;

	printf("Enter  the string :");
	gets(s);
	printf("Enter character to be searched: ");
	scanf("%c", &ch);
	//printf("%c", ch);
	int len = strlen(s);
	//sort the string.
	
	for (i = 0; i < len; i++)
	{
		if (ch == s[i]) {
			count++;
		printf("%c is present at index : %d\n", ch, i);

		}
	}
	printf("\nThe Occurence of  character %c is:%d", ch,count);
}

/*output:->
Enter  the string :gaurava
Enter character to be searched: a
a is present at index : 1
a is present at index : 4
a is present at index : 6

The Occurence of  character a is:3

*->
Enter  the string :gaurav lagad
Enter character to be searched: a
a is present at index : 1
a is present at index : 4
a is present at index : 8
a is present at index : 10

The Occurence of  character a is:4


*/