/*Q-25)  Write a C program to convert a decimal number to hexadecimal.*/

#include <stdio.h>
void decimalToHexadecimal(int num) {
    char hexadecimal[20];
    int index = 0;

    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hexadecimal[index++] = '0' + remainder;
        } else {
            hexadecimal[index++] = 'A' + (remainder - 10);
        }
        num /= 16;
    }

    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToHexadecimal(decimalNumber);
    return 0;
}