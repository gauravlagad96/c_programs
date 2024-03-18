// 1. Write a  C program to find length of a string. 

#include<stdio.h>
#include<string.h>

void main() {
	char ch[30] = { "Good Morning" };
	// printf("The length of String is: %d", strlen(ch));

	// without using function
	int i = 0,count=0;
	while (ch[i] != '\0') {
		count++;
		i++;
	}
	printf("The length of String is: %d", count);
}

/* output:->
The length of String is: 12
*/