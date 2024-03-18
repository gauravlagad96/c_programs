/*

			A
		  A B C
		A B C D E
	  A B C D E F G
	A B C D E F G H I 

*/

#include<stdio.h>
  void main() {

	int i, j;
	char ch;

	for (i = 1; i < 6; i++) 
	{
		ch = 'A';
		for (j = 1; j < 10; j++) 
		{
			if (j >= 6 - i && j <= 4 + i) {    // (j >= 6 - i && j <= 4 + i)
				printf("%c ", ch);
				ch++;
			}
			else {
				printf("  ");    // print the space from both side .
			}

		}
		printf("\n");
	}


}