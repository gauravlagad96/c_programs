#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int  i, j, k, count = 0, n;

    printf("Enter  the string : ");
    gets(s);

    for (j = 0; s[j]; j++);  //this loop run end of the string char.
    n = j;
    printf("%d ", n);
         
    printf(" frequency count character in string:\n");

    for (i = 0; i < n; i++)
    {
        count = 1;
        if (s[i])
        {

            for (j = i + 1; j < n; j++)
            {

                if (s[i] == s[j])
                {
                    count++;
                    s[j] = '\0';
                }
            }
            printf(" '%c' = %d \n", s[i], count);

        }
          }


    return 0;
}
/*output:
Enter  the string : gaurav
 frequency count character in string:
 'g' = 1
 'a' = 2
 'u' = 1
 'r' = 1
 'v' = 1
*/