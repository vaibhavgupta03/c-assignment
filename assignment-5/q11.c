/* 
Q-11) Write a C program to simulate a calculator where the user enters two integer numbers and an 
operator (+, -, *, /, %). The program then carries out the specified operation and displays the result. 
Write using if statements as well as a switch statement.*/

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("Result (if): %d\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result (if): %d\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result (if): %d\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result (if): %d\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            printf("Result (if): %d\n", num1 % num2);
        } else {
            printf("Error: Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }

    switch (operator) {
        case '+':
            printf("Result (switch): %d\n", num1 + num2);
            break;
        case '-':
            printf("Result (switch): %d\n", num1 - num2);
            break;
        case '*':
            printf("Result (switch): %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result (switch): %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result (switch): %d\n", num1 % num2);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}