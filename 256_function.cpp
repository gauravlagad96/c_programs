/*write a c program to perform following operation using function name as:-
calAreaOfCircle() = >    π * r*r;
calAreaOfRactangel()  => length * width;
calAreaOfTriangle()   => 1/2 (base × height)
calAreaOfQuadrilateral() =>  Rectangle/square/parallelogram/Rhombus/Trapezoid/kite
calAreaOfCircumference()  =>  2 × π × r
*/

#include<stdio.h>

void calAreaOfCircle();
void calAreaOfRactangel();
void calAreaOfTriangle();
void calAreaOfQuadrilateral();
void calAreaOfCircumference();

void main() {

	    calAreaOfCircle();
		calAreaOfRactangel();
		calAreaOfTriangle();
	//	calAreaOfQuadrilateral();
		calAreaOfCircumference();

}
void calAreaOfCircle() {
	float radius;
	printf("\nEnter the radius of circle:\n");
	scanf("%f", &radius);

	printf("\nThe area of circle is :%f", 3.14 *( radius * radius));
	}

void calAreaOfRactangel() {
	float l, w;
	printf("\nEnter the length and width of Rectangle:\n");
	scanf("%f%f", &l, &w);
	printf("\nThe area of Rectangle is :%f", l*w);
	}

 void calAreaOfTriangle() {
	float b, h;
	printf("\nEnter the base and height of triangle:\n");
	scanf("%f%f", &b, &h);
	printf("\n The area of Triangle is : %f \n", 0.5*b * h);

}
void calAreaOfCircumference() {
	float radius;
	printf("\nEnter the radius of circle:\n");
	scanf("%f", &radius);
	printf("\n The area of Circumference is : %f  \n", (2 * 3.14) * radius);
}


/*output:=>
Enter the radius of circle:
2

The area of circle is :12.560000
Enter the length and width of Rectangle:
2
5

The area of Rectangle is :10.000000
Enter the base and height of triangle:
2
8

 The area of Triangle is : 8.000000

Enter the radius of circle:
5

 The area of Circumference is : 31.400000

*/
