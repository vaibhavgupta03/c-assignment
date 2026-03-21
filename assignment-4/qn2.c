/* Q-2) Write a C program to print a hollow pyramid with its reflection below. The program should take 
an integer n as input, representing the height of the pyramid. The output should look like this: */


#include <stdio.h>

int main() {
    int n;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}