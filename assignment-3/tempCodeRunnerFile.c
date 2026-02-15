#include <stdio.h>

int primeCheck(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number, d1, d2, d3, d4;

    printf("Enter a 4 digit number: ");
    scanf("%d", &number);


    d1 = number / 1000;
    d2 = (number / 100) % 10;
    d3 = (number / 10) % 10;
    d4 = number % 10;

    int s = d1 + d4;
    int p = d2 * d3;

    if (s == p) {
        printf("Accepted\n");
    } else if (primeCheck(d1) && primeCheck(d4) && (d2 % 2 == 0) && (d3 % 2 == 0)) {
        printf("Considered\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}