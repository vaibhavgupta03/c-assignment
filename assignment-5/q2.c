/*
Q-2) Write a C program that takes an integer input from the user and determines whether the entered number is even or odd using switch case. Note: you are not allowed to use if-else statement.*/

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    switch (num % 2) {
        case 0:
            printf("%d is even.\n", num);
            break;
        case 1:
            printf("%d is odd.\n", num);
            break;
        default:
            printf("Invalid input.\n");
    }
    return 0;
}