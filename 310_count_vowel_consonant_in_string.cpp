//9. Write a  JAVA program to count total number of vowels and consonants in a string. 
#include<stdio.h>
#include<string.h>
void countVowelConsonat(char[]);

void main() {
	char str[96];
	printf("Enter the string: ");
	gets(str);
	printf("\nInput string is: %s", str);
	countVowelConsonat(str);
}
void countVowelConsonat(char str[]) {
	int i, vowel=0, consonants = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
			if (str[i] == 'a' || str[i]=='e' || str[i] == 'i' || str[i] == 'o' || str[i]=='u'
				|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i]=='U')
			{
				vowel++;
			}
			else {
				consonants++;
			}
		}
	}
	printf("\nThe count of vowel is: %d", vowel);
	printf("\nThe count of consonant is: %d", consonants);

}