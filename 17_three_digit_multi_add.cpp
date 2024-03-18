// write a program to enter 3 digit number and calculate sum of digit and product.
// Input: 124
// Output : addition is : 7
//        : Multiplication is 8

#include<stdio.h>

void main() {

	int no, digit, sum = 0, product = 1;
	printf("Enter the three digit no :");
	scanf("%d", &no);

	digit = no % 10;   // 124%10 -> 4
	sum += digit;      // 0+4 ->4
	product *= digit;  //1*4  ->

	digit = (no / 10) % 10;  // (124/10)%10 -> 12%10 -> 2;
	sum += digit;         // 4+2
	product *= digit;      //4 *2 -> 8

	digit = no / 100;    // 1
	sum += digit;       // 6 + 1
	product *= digit;   //8*1 ->8

	printf("\nThe product of digit is :%d", product);
	printf("\nThe addition of digit is :%d\n", sum);

}