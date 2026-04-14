/*Write a C program to find all perfect numbers between 1 and 100,000. A number 
m is called a perfect number if the sum of all its positive divisors, excluding the 
number itself, equals m. In other words, if σ(m) = m, where σ(m) is the sum of all 
positive divisors of m, excluding m itself. For example, σ(12) = 1 + 2 + 3 + 4 + 6 = 16, 
so 12 is not a perfect number because 16 ̸= 12, 28 is a perfect number because 
σ(28) = 1 + 2 + 4 + 7 + 14 = 28. */

#include <stdio.h>

int main() {
    printf("Perfect numbers between 1 and 100,000:\n");
    for (int num = 1; num <= 100000; num++) {
        int sum = 0;
        for (int divisor = 1; divisor <= num / 2; divisor++) {
            if (num % divisor == 0) {
                sum += divisor;
            }
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}