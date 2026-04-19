/*Write a C program that performs a sequence of arithmetic operations on 
integers using a switch statement. Operators can be +, -, *, /, or % and are 
treated as equal precedence and the expression ends with =. The evaluation 
happens from left to right. Your program should compute the result, handle 
division/modulo by zero, and report invalid operators or if the expression is invalid i.e 
two operator/number consecutive and all possible checking should be done. Use 
switch for operation control, and include appropriate logic where appropriate. 
Output: 
Input ending with = : 
100 + 20 * 2 / 5 - 10 = 
Output: 
Result = 38 */

#include <stdio.h>
6
int main() {
    int result = 0, num;
    char operator;

    printf("Input ending with = :\n");
    
    if (scanf("%d", &result) != 1) {
        printf("Invalid expression.\n");
        return 1;
    }

    while (1) {
        if (scanf(" %c", &operator) != 1 || operator == '=') {
            break; 
        }

        if (scanf("%d", &num) != 1) {
            printf("Invalid expression.\n");
            return 1;
        }

        switch (operator) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num == 0) {
                    printf("Error: Division by zero.\n");
                    return 1;
                }
                result /= num;
                break;
            case '%':
                if (num == 0) {
                    printf("Error: Modulo by zero.\n");
                    return 1;
                }
                result %= num;
                break;
            default:
                printf("Invalid operator: %c\n", operator);
                return 1;
        }
    }

    printf("Result = %d\n", result);
    return 0;
}