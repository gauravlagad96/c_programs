/*
   
   *
   *  #
   *  # *
   *  # * #
   *  # * # *
   
   */

#include<stdio.h>
void main() {
	int i, j;

	for (i = 1; i <= 5; i++) {  //row
		for (j = 1; j<= 5; j++) { //column

			if (i >= j)
			{
				if (j % 2 == 1) {
					printf(" * ");
				}
				else
				{
					printf(" # ");
				}
			}
		}
		printf("\n");
	}
}

/*
	#include<stdio.h>
void main() {
	int i, j;

	for (i = 1; i <= 5; i++) {  //row
		for (j = 1; j <= i; j++) { //column
			if (j%2==1) {
				printf(" * ");
			}
			else
			{
				printf(" # ");
			}
		}
		printf("\n");
	}
}
*/