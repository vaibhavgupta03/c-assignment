/*Q-24) Compute the sum: 
Sum=1!+2!+3!+…+n! */

#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += factorial(i);
    }

    printf("Sum = %d\n", sum);
    return 0;
}