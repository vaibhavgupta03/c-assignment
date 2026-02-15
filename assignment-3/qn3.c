/*Q-3) An alien gives you a four-digit number ranging between 1000 and 9999. Your task is to write a C 
program that analyzes this number based on the following mysterious rules:                           
10 marks 
1. If the sum of the outer digits (i.e., the 1st and 4th digits) is equal to the product of the inner 
digits (i.e., the 2nd and 3rd digits), then the number is to be "Accepted". 
2. If the outer digits are both prime numbers and the inner digits are both even numbers, then 
the number should be "Considered". 
3. For any other case, the number should be "Rejected". */

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