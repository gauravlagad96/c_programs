/*  Write a c program to enter the length and breadth of rectangle and and find it's area
Area of Rectangle = length  * breadth;
*/

#include<stdio.h>
#include<conio.h>

void main() {
	int l, b;
	printf("Enter the length and breadth of Rectangle :");
	scanf("%d%d", &l, &b);
	int area = l * b;
	printf("\nArea of Rectangle=%d", area);


}