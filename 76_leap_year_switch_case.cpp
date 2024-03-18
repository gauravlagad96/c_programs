// write a  c program to check wheather the year is leap or not using switch case.
#include <stdio.h>

int main() {
    int year;

    // Input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using switch case
    switch ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    case 1:
        printf("%d is a leap year.\n", year);
        break;
    default:
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
