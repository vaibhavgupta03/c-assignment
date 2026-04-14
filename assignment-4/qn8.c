/*Write a C program to print concentric square patterns which use only while 
loops. It only takes an odd number as input. If the user gives an even number it gives 
an error.*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0 || n < 1)
    {
        printf("Error");
        return 0;
    }

    int i = 0;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            int min = i;

            if (j < min) min = j;
            if (n - 1 - i < min) min = n - 1 - i;
            if (n - 1 - j < min) min = n - 1 - j;

            if (min % 2 == 0)
                printf("* ");
            else
                printf("  ");

            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}