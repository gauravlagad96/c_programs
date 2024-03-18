/* write a c program to perform following operation using function name as:-
calAdd()
calSub()
calMul()
calDiv()
calMod()

*/

#include<stdio.h>
void calAdd();
void calMul();
void calSub();
void calDiv();
void calMod();

void main() {
	
	calAdd();
	calSub();
	calMul();
	calDiv();
	calMod();
}

void calAdd() {
	int a, b;
	printf("Enter the two no for Addition :\n");
	scanf("%d%d", &a, &b);
	printf("\nThe Addition of %d and %d is: = %d\n", a, b, a + b);
}

void calSub() {
	int a, b;
	printf("Enter the two no for substraction:\n");
	scanf("%d%d", &a, &b);
	printf("\nThe substraction of %d and %d is: = %d\n", a, b, a - b);
}
void calMul() {
	int a, b;
	printf("Enter the two no for Multiplication:\n");
	scanf("%d%d", &a, &b);
	printf("\nThe multiplication of %d and %d is: = %d\n", a, b, a * b);
}
void calDiv() {
	int a, b;
	printf("Enter the two no for division :\n");
	scanf("%d%d", &a, &b);
	printf("\nThe division of %d and %d is: = %d\n", a, b, a / b);
}
void calMod() {
	int a, b;
	printf("Enter the two no for Remainder:\n");
	scanf("%d%d", &a, &b);
	printf("\nThe Remainder of %d and %d is: = %d\n", a, b, a % b);
}



/*output:->
Enter the two no for Addition :
10
20

The Addition of 10 and 20 is: = 30
Enter the two no for substraction:
10
20

The substraction of 10 and 20 is: = -10
Enter the two no for Multiplication:
10
20

The multiplication of 10 and 20 is: = 200
Enter the two no for division :
10
20

The division of 10 and 20 is: = 0
Enter the two no for Remainder:
10
20

The Remainder of 10 and 20 is: = 10

*/