// write a c program to display three digit no to reverse.
#include<stdio.h>
#include<conio.h>


int main() {
    int no, d1, d2, d3, rev;
    printf("Enter the three digit no :");
    scanf("%d", &no);
    d1 = no / 100;  // 234/100=2          
    d2 = (no % 100) / 10; // 34/10 =3
    d3 = no % 10;   // 234/10=4
    rev = d3 * 100 + d2 * 10 + d1;
    printf("reverse no is %d\n", rev);

    return 0;
}
