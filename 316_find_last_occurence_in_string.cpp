//15.Write a C program to find last occurrence of a character in a given string.
#include<stdio.h>
#include <string.h>

int main()
{
    char s[1000], ch;
    int i, n, k = 0;

    printf("Enter  the string :");
    gets(s);
    printf("Enter character to be searched: ");
    ch = getchar();

    printf("%c", ch);

    for (i =strlen(s-1) ; i >=0; i--) {

        if (s[i] == ch ){
            k = 1;
            break;            
        }

    }

    if (k)
        printf("character  %c  is last occurrence at location:%d ", ch, i);
    else
        printf("character is not in the string ");
    return 0;


}

/*output:->
Enter  the string :vvgauravasdf
Enter character to be searched: v
vcharacter  v  is last occurrence at location:7
*/