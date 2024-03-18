#include <stdio.h>
#include <string.h>

void reverseWords(char* str) {
    int length = strlen(str);
    int i, j;

    // Reverse the whole string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Reverse each word in the string
    int start = 0;
    for (i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
