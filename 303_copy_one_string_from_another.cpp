//2. Write a  C program to copy one string to another string. 

#include <stdio.h>
#include<string.h>
void main() {

    char str1[20],str2[20];
    printf("enter something in string 1 \n");
    gets(str1);
    printf("enter something in string 2 \n");
    gets(str2);
    printf("\nstring 1 before swapping\n");
    puts(str1);
    //int len = strlen(str1);
    int i=0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';

    printf("\nstring 1 After swapping\n");
    puts(str1);
}

/*output:-
enter something in string 1
gaurav
enter something in string 2
lagad

string 1 before swapping
gaurav

string 1 After swapping
lagad

*/