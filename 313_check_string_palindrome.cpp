//12. Write a  C program to check whether a string is palindrome or not.


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the string ");
	gets(str);

	// Start from first and last character of str
	int i = 0,flag=0;
	int len = strlen(str) - 1;

	// Keep comparing characters while they are same
	while (len > i) 
	{  // 
		if (str[i++] != str[len--]) 
		{
			flag = 1;
			break;
		}
	}

	if(flag!=1)
		printf("%s is a palindrome\n", str);
	else
		printf("%s is not a palindrome\n", str);


	return 0;
}

