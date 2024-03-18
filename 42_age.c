/* write a c program to read the age of a candidate and determine whether he is eligible to cast his own vote 
 Test data : 21
 output : Congratulations you are eligible for casting your vote.
*/

#include<stdio.h>

void main() {
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);

	(age >= 21) ? printf("Congratulations you are eligible for casting your vote.") : printf("you are not eligible ");

}