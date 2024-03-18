// write a c program to input basic salary of an employee and calculate its Gross salary according to foll:
// BS <=10000: HRA = 20% , DA=80%
// BS <=20000: HRA = 25% , DA=90%
// BS >20000: HRA = 30% , DA=95%

#include<stdio.h>

void main() {

	long int bs,gs;
	printf("Enter the basic salary of Employee :");
	scanf("%ld", &bs);

	if (bs <= 10000) {
		gs = bs+(bs/100*20) + (bs/100*80);
		printf("The Gross salary is :%ld", gs);
	}
	 else if (bs >10000 && bs<=20000) {
		gs = bs + (bs / 100 * 25) + (bs / 100 * 90);
		printf("The Gross salary is :%ld", gs);
	}

	 else {
		gs = bs + (bs / 100 * 30) + (bs / 100 * 95);
		printf("The Gross salary is :%ld", gs);

	}

}