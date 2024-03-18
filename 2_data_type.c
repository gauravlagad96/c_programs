//write a c program to input all basic data types and print output.

#include <stdio.h>
#include <conio.h>

void main() {
    int a;
    //char character;
    float c;
    double d;
    long int b;
    long double s;
    printf("\nEnter the Integer value : ");
    scanf("%d", &a);

    // Input a character
    //printf("\nEnter a character: ");
    //scanf("%c", &character);

    printf("\nEnter the float value :");
    scanf("%f", &c);

    printf("\nEnter the double value : ");
    scanf("%lf", &d);

    printf("\nEnter the long_int value : ");
    scanf("%ld", &b);

    printf("\nEnter the long_double value : ");
    scanf("%Lf", &s);

    printf("\na=%d\nc=%f\nd=%lf\nb=%ld\ns=%Lf",a,c,d,b,s);
    /*
    printf("value of int is : %d", a);
    printf("\nvalue of char is : %c", character);
    printf("\nvalue of float is : %f", c);
    printf("\nvalue of double is : %lf", d);
    printf("\nvalue of long_int is : %ld", b);
    printf("\nvalue of long_double is : %Lf", s);
    */

}
