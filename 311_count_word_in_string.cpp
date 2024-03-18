//10.Write a C program to count total number of words in a string. 

#include<stdio.h>;
#include <string.h>

void countWord(char*);
void main()
{
    char s[1000];
    int i;

    printf("Enter  the string : ");
    gets(s);

    printf("Input String is ='%s'\n", s);
    
    countWord(s);
   // printf("%d ",sizeof(char));

}

void countWord(char s[]) {
    int i=0, count = 1;

    while (s[i]!='\0')
    {
        if (s[i] == ' ' || s[i]=='\t' || s[i]=='\n') {
            ++count;
      }
        i++;
    }
    printf("total words count is: %d ", count);

}

/*output:-
Enter  the string : I am Gaurav I like to play cricket
Input String is ='I am Gaurav   I like to play cricket'
total words count is: 8
*/