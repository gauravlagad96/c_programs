/*


			1
		  1   2
		1   2   3
	  1   2   3   4
	1   2   3   4   5

*/

#include<stdio.h>

void main(){
	int i, j;
	for (i = 1; i <= 5; i++) {
		int k = 1;
		for (j = 1; j <= 9; j++) {
			
			if (j >= 6 - i && j <= 4 + i) {
				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) 
				{
					printf(" %d", k++);
				}
				else {
					printf("  ");
				}
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

}