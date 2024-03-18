/* Check Number Is Neon Number or Not.

	Example :
	A neon number is a number where the sum of digits of the square of the number is equal to the
	number.

	Input : 9
	Output : Neon Number
	Explanation: square is 9*9 = 81 and
	sum of the digits of the square is 9.*/
#include <stdio.h>
#include<math.h>

int main()
{
	int Number, squr, rem, Sum = 0;

	printf("Enter Number to Check = ");
	scanf("%d", &Number);

	squr = pow(Number, 2);
	printf("The Square of a Number %d = %d\n", Number, squr);

	while (squr > 0)
	{
		rem = squr % 10;
		Sum = Sum + rem;
		squr = squr / 10;
	}
	printf("The Sum of Digits in a Square = %d\n", Sum);
	if (Number == Sum)
		printf("\n%d is a Neon Number.\n", Number);
	else
		printf("\n%d is not.\n", Number);
}