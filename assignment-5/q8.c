/* Q-8) Write a C program to multiply two numbers without using the * operator. */

#include <stdio.h>
int multiply(int a, int b)
{
    int result = 0;
    for (int i = 0; i < b; i++)
    {
        result += a;
    }
    return result;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Product of %d and %d is %d\n", num1, num2, multiply(num1, num2));
    return 0;
}