/*

  * * * * *
  * * * *
  * * *
  * *
  * 
  
 */


#include<stdio.h>

void main() {
	int i, j;

	for (i = 1; i <= 5; i++) {  //row
		for (j = 1; j <= 5; j++) { //column

			if (6 - i >= j) {
				printf("* ");
			}
		}
		printf("\n");

	}


}
