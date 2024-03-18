/*write a c program to input amount form user and print number of notes(Rs 500, 100, 50, 20, 10, 5, 2, 1)
  required for the amount.
  Example Input:   Input amount :   575
   output:  Total number of notes:
			500:1
			100:0
			50 : 1
			20: 1
			10 : 1
			5: 1
			2:0
			1:0

*/

#include<stdio.h>
void main() {
	int amt;
	int a500 = 0, b100 = 0, c50 = 0, d20 = 0, e10 = 0, f5 = 0, g2 = 0, h1 = 0,rem=0;


	printf("Enter the amount:");
	scanf("%d", &amt);

	printf("\nTotal number of Notes :");
	if (amt >= 500) {
		a500 = amt / 500;   // 575/500 = 1;
		rem = amt % 500;    // 575%500 =75
		amt = rem;
		printf("\n500:%d", a500);
	}
	if (amt >= 100 && amt < 500) {
		b100 = amt / 100;  // 75/100= 0;
		rem = amt % 100;   //
		amt = rem;
		printf("\n100:%d", b100);
	}
	if (amt >= 50 && amt < 100) {
		c50 = amt / 50;   // 75/50 =1
		rem = amt % 50;    // 25
		amt = rem;
		printf("\n50:%d", c50);
	}

	if (amt >= 20 && amt < 50) {
		d20 = amt / 20;   // 25/20 = 1
		rem = amt % 20;   // 5
		amt = rem;
		printf("\n20:%d", d20);
	}

	if (amt >= 10 && amt < 20)
	{
		e10 = amt / 10;  // 5 / 10  = 0
		rem = amt % 10;  // 5%10    = 5 
		amt = rem;
		printf("\n10:%d", e10);

	}
	if (amt >= 5 && amt < 10) {
		f5 = amt / 5;   // 5/5 =1
		rem = amt % 5;  // 5%5 = 0
		amt = rem;
		printf("\n5:%d", f5);
	}
	if (amt >= 2 && amt < 5) {
		g2 = amt / 2;  //0/0=0
		rem = amt % 2;     // 0%0=0
		amt = rem;
		printf("\n2:%d", g2);

	}
	if (amt == 1) {
		h1 = amt / 1;  //0/1=0
		printf("\n1:%d", h1);

	}


}