// write a c program to create a calculator using switch case.

#include <stdio.h>

 void main() {
    char op;
    int num1, num2, result;

    
    printf("Enter an operator (+, -, *, /,%): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    
    switch (op) {
    case '+':
        result = num1 + num2;
        printf("Result: %d\n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result: %d\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %d\n", result);
        break;

    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %d\n", result);
        }
        else {
            printf("Error: Division by zero is undefined.\n");
        }
        break;
    case '%':
        result = num1 % num2;
        printf("Result:%d", result);
    default:
        printf("Error: Invalid operator.\n");
    }

}
