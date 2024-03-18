//5. Write a  C program to convert lowercase string to uppercase. 
#include<stdio.h>;
#include <string.h>
/*
int main()
{
    char s[1000];
    int i;

    printf("Enter  the string : ");
    gets(s);

    printf("Input String is ='%s'\n", s);

    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }

    printf("string in uppercase ='%s'\n", s);
    return 0;
}

*/

/*output:-

Enter  the string : Gaurav
Input String is  ='Gaurav'
string in uppercase ='GAURAV'

*/

// 2. using function.
#include <string.h>
#include<stdio.h>

void stringuppercase(char s[])// char *s;
{
    int i;

    for (i = 0; s[i]; i++)
    {
       if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
}
int main()
{
    char s[1000];
    int i;

    printf("Enter  the string : ");
    gets(s);
    printf("input String is  ='%s'\n", s);

    stringuppercase(s);

    printf("string in uppercase ='%s'\n", s);

}