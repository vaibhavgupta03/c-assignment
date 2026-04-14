/*Q-23) Write a program to compute: 
Sum=1−2+3−4+5−6+…±n */

#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    printf("Sum = %d\n", sum);
    return 0;
}