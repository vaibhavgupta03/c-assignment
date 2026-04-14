/*Q-13) Write a C program that takes a decimal number and prints its binary equivalent and then 
reveres the bits and prints it.*/

#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");

    printf("Reversed bits: ");
    for (int j = 0; j < i; j++)
        printf("%d", binaryNum[j]);
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}