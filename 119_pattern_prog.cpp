/*
      * * * * *
      *       *
      * * * * *
 
 
 */


#include<stdio.h>

void main() {
	int i, j;

	for (i = 1; i <= 3; i++) {  //row
		for (j = 1; j <= 5; j++) { //column
			if (i == 1 || i == 3 || j == 1 || j == 5)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");

	}


}