// 3. Write a  C program to concatenate two strings. 

#include <stdio.h>
#include<string.h>
void main() {

    char str1[200], str2[200];
    printf("enter something in string 1 \n");
    gets(str1);
    printf("enter something in string 2 \n");
    gets(str2);

    // using strcat() function.
   // strcat(str1, str2);

    // concatenate logic
   int len= strlen(str1);
   int i = len,count=0;

   while (str2[count] !=0)
   {
       str1[i] = str2[count];
       i++;
       count++;
   }
   str1[i] = '\0';
   printf("\nAfter concatenate:\n");
   printf("%s", str1);

}
/*output:-
enter something in string 1
gaurav 
enter something in string 2
 lagad

After concatenate:
gaurav lagad
*/