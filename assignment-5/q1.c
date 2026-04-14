/*
Q-1) Write a program to print all numbers from 1 to 50, but skip those divisible by 3 using  
continue inside a for loop. */


#include <stdio.h>
int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}