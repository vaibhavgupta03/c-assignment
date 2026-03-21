/*
3. A sequence of integers is called “magical” if the absolute difference between every pair of 
consecutive numbers is exactly 1, and none of the numbers in the sequence is less than 1. Your task 
is to write a program that first accepts an integer N representing the length of the sequence (where 2 ≤ 
N ≤ 100), then reads N integers that form the sequence. The program should determine whether the 
sequence is magical according to the rules described. If the sequence is magical, it should print the 
maximum number found in the sequence. If the sequence is not magical, the program should identify 
and print all the numbers that violate the magical conditions. 
*/

// solve without array online loop and if-else statements

#include <stdio.h>
#include <math.h>

int main() {
    int N, prev, current;
    int max = 0;
    int isMagical = 1;

    printf("Enter the length of the sequence (2 ≤ N ≤ 100): ");
    scanf("%d", &N);

    if (N < 2 || N > 100) {
        printf("Invalid input. N must be between 2 and 100.\n");
        return 1;
    }

    printf("Enter the sequence of integers:\n");
    scanf("%d", &prev);
    if (prev < 1) {
        printf("The number %d violates the magical condition (less than 1).\n", prev);
        return 1;
    }
    
    max = prev;
    for (int i = 1; i < N; i++) {
        scanf("%d", &current);

        if (current < 1) {
            printf("The number %d violates the magical condition (less than 1).\n", current);
            isMagical = 0;
        } else if (abs(current - prev) != 1) {
            printf("The numbers %d and %d violate the magical condition (absolute difference not equal to 1).\n", prev, current);
            isMagical = 0;
        }

        if (current > max) {
            max = current; 
        }

        prev = current;
    }

    if (isMagical) {
        printf("The sequence is magical. The maximum number in the sequence is: %d\n", max);
    }

    return 0;
}