/* Write a C program to print Pascal's Triangle up to n rows. Pascal's Triangle is a triangular array 
where each number is the sum of the two numbers directly above it. 
The first few rows of Pascal’s Triangle look like this:  make normal triangle not right angled*/


#include <stdio.h>

int main()
{
    printf("Enter the number of rows for Pascal's Triangle: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i - 1; s++)
            printf(" ");

        int val = 1;

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}