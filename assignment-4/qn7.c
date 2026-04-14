/*Write a C program that prints numbers from 1 to n*n arranged in a clockwise 
spiral pattern inside an n x n grid, without using any 2D arrays or function calls.
Pattern like this for n=5: same shaoe and same sequence
1   2    3  4    5 
16  17  18  19   6 
15  24  25  20   7 
14  23  22  21   8 
13  12  11  10   9 

*/

#include <stdio.h>

int main()
{
  int n;
    printf("Enter the size of the grid (n): ");
    scanf("%d", &n);
  int a[n][n];

  int top = 0, bottom = n - 1;
  int left = 0, right = n - 1;
  int num = 1;

  while (top <= bottom && left <= right)
  {
    for (int i = left; i <= right; i++)
      a[top][i] = num++;
    top++;

    for (int i = top; i <= bottom; i++)
      a[i][right] = num++;
    right--;

    for (int i = right; i >= left; i--)
      a[bottom][i] = num++;
    bottom--;

    for (int i = bottom; i >= top; i--)
      a[i][left] = num++;
    left++;
  }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%-4d", a[i][j]);
        printf("\n");
    }

    return 0;
}