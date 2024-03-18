/*
11.Write a  C program to find reverse of a string.  strrev(str)->library funtion .
  Input:-> abcd
  output:-> dcba

*/
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    int i, j;
    char temp;

    // Loop to swap characters from start to end
    /*
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    */

    for (i = 0; i < len/2;i++) {   
            temp = str[i];              
            str[i] = str[len-i-1];
            str[len-i-1] = temp;
        }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reverse of the string: %s\n", str);

    return 0;
}
