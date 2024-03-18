//write a program in c to accept a grade and declare the equivalent description:
/*  Grade       Description
    A           Excellent
    V           Very good
    G           Good
*/

#include<stdio.h>
#include<conio.h>

void main() {
    char ch;
    printf("Enter the grade");
    scanf("%c",&ch);

    (ch =='a' || ch == 'A') ? printf("Excellent") : (ch == 'v' || ch == 'V') ? printf("Very Good") :
        printf("Goood");




}