/*
  Function /Recursion Example

1. Program to print an array using function */


#include <stdio.h>
int i = 0;
void displayArray(float []);

int main() {
    float  num[] = { 23.4, 55, 22.6, 3, 40.5, 18 };

    // num array is passed to displayArray()
    printf("The given array is:\n");
     displayArray(num);   
}

void displayArray(float num[]) {
   
   if(i<6)
   {
        printf("%f  ", num[i]);
        i++;
        displayArray(num);
    }
}

/*output:->

The given array is :
23.400000  55.000000  22.600000  3.000000  40.500000  18.000000 

*/