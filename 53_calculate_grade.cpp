/* write a c program to input mark of 5 subject physics, chemistry, Biology, Mathamatics and computer,
 calculate percentage and grade according to given conditions.
   
   per >= 90%   : grade A
   per >= 80%   : grade B
   per >= 70%   : grade C
   per >= 60%   : grade D
   per >= 40%   : grade E
   per < 40%   : grade F

*/

#include<stdio.h>
void main() {

	int phy, che, bio, math, comp,total;
	printf("Enter the 5 subject marks:");
	scanf("%d%d%d%d%d", &phy, &che, &bio, &math, &comp);

	total = phy + che + bio + math + comp;
	float per = (float)total / 5;

	printf("Percentage:%f", per);

	if (per >= 90) {
		printf(" Grade:A" );
	}
	else if (per<=90 && per>=80)
	{
		printf(" Grade:B");
	}
	else if (per <= 80 && per >= 70)
	{
		printf("Grade:C");
	}
	else if (per <= 70 && per >= 60)
	{
		printf("Grade:D");
	}
	else if (per <= 60 && per >= 40)
	{
		printf( "Grade:E");
	}
	else {
		printf("Grade:F");
	}





}