// write a c program to check wheather the character is alphabet digit or special character using switch case.
#include <stdio.h>
/*
int main() {
    char ch;

    // Input from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet, digit, or special character using switch case
    switch (ch) {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("%c is a digit.\n", ch);
        break;
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G':
    case 'H': case 'I': case 'J': case 'K': case 'L': case 'M':
    case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S':
    case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
    case 'h': case 'i': case 'j': case 'k': case 'l': case 'm':
    case 'n': case 'o': case 'p': case 'q': case 'r': case 's':
    case 't': case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
        printf("%c is an alphabet.\n", ch);
        break;
    default:
        printf("%c is a special character.\n", ch);
    }
    return 0;
}
*/
void main() {
    char ch;
    printf("Enter the character.");
    scanf("%c", &ch);

    switch (ch>='a' && ch<='z')
    {
    case 1:
        printf("%c is a alphabat.", ch);
        break;
    case 0:
        switch (ch >= '0' && ch <= '9')
        {
        case 1:
            printf("%c is a digit.", ch);
            break;
        case 0:
            printf("%c is a special character.", ch);
            break;
        }
    default:
        printf("Wrong Input");
    }
 }