/*Q-3) Two numbers are entered through the keyboard. Write a program to find the HCF and LCM 
of those numbers. */

#include <stdio.h>
int main() {
    int num1, num2, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int a = num1, b = num2;
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    hcf = a;
    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}