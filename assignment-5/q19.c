/*Q-19) Write a C program that takes an integer input from the user and prints the given pattern of 
asterisks (*).*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}