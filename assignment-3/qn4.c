/*Q-4) You are given a 3-digit number where each digit is represented as a, b, and c (from hundreds to 
units place). Your task is to write a C program that analyzes the number and categorizes it based on 
specific patterns found in the digits:                                                                                           
10 marks 
1. If the digits are in strictly ascending order and the sum of the digits is divisible by 15, classify 
the number as "Magic". 
2. Otherwise, if the digits are in strictly descending order and the product of the digits is even, 
classify it as "Mystic". 
3. If the number forms a palindrome (i.e., a == c), classify it as "Enigma". 
4. For all other cases, classify the number as "Ordinary". */

#include <stdio.h>

int main() {
    int number, a, b, c;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);


    a = number / 100;
    b = (number / 10) % 10;
    c = number % 10;

    int sum = a + b + c;
    int product = a * b * c;

    if (a < b && b < c && sum % 15 == 0) {
        printf("Magic\n");
    } else if (a > b && b > c && product % 2 == 0) {
        printf("Mystic\n");
    } else if (a == c) {
        printf("Enigma\n");
    } else {
        printf("Ordinary\n");
    }

    return 0;
}