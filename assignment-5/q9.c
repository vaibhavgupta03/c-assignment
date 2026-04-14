/*Q-9) Write a program to find the reverse of a number using do-while, while, for loop. */

#include <stdio.h>
int reverse_do_while(int num)
{
    int reversed = 0;
    do
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    } while (num != 0);
    return reversed;
}
int reverse_while(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int reverse_for(int num)
{
    int reversed = 0;
    for (; num != 0; num /= 10)
    {
        reversed = reversed * 10 + num % 10;
    }
    return reversed;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse using do-while: %d\n", reverse_do_while(num));
    printf("Reverse using while: %d\n", reverse_while(num));
    printf("Reverse using for: %d\n", reverse_for(num));
    return 0;
}
