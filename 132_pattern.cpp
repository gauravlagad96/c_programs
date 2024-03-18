/*

	A A A A A
	B B B B B
	C C C C C 
	D D D D D 
	E E E E E

	*/
#include<stdio.h>
void main() {

	int i,j;
	char ch = 'A';

	for (i = 1; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			printf("%c ", ch);
			
		}
		ch++;
		printf("\n");
	}

	
 }