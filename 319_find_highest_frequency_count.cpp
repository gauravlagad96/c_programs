//Write a c program to find highest frequency character in a string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	char s[100];
	printf("Enter the string:");
	gets(s);

	int i,j,k,count, max = 1;
	int len = strlen(s);

	for (i = 0; i < len; i++) 
	{
		count = 1;

		for (j = i + 1; j < len; j++) 
		{
			if (s[i] == s[j])
			{
				count++;
			}
		}

		if (count > max) 
		{
			max = count;
			k = i;
		}
	}
	printf("\nThe character %c occur %d times: ",s[k], max);
}


/*output:->
Enter the string:gauravlagad

The character a occur 4 times:
*/