// WAP check no is spy or not.
#include<stdio.h>
#include<conio.h>

void main() {

	int no;
	printf("Enter the Number:");
	scanf("\n%d",&no);

	int a = no % 10;  // 123/10 =3
	int b = (no / 10)%10;  // =2
	   
	int d = b / 10;   // =1

	int sum = a + b + d;
	int product = a * b * d;

	(sum == product) ? printf("\n%d:is spy Number", no) : printf("\n%d:is not spy Number",no);

}
