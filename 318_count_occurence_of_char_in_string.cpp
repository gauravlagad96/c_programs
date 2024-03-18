
//17.Write a c program to count occurrences of a character in given string.

#include <string.h>
#include<stdio.h>
int main()
{
    char s[1000], c;
    int i, count = 0;

    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c = getchar();

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }

    printf("character '%c' occurs %d times \n ", c, count);

    return 0;
}
/*output
Enter  the string : gauravafg
Enter character to be searched: n
character 'n' occurs 0 times

Enter  the string : vaibhav
Enter character to be searched: v
character 'v' occurs 2 times

*/