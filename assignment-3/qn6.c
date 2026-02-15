/*Q-6) Given three integer weights A, B, and C representing the weights of coins, one of which is fake 
(lighter or heavier), and two of them are equal. Write a program to print the fake coin’s position (1, 2, 
or 3) and print "Lighter" or "Heavier" depending on whether it's less than or more than the others. 
Also, handle the error condition to check the user gives at least two equal values as input.  */

#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter the weights of three coins (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
        if (A == B) {
            if (C < A) {
                printf("Coin 3 is the fake coin and it is Lighter.\n");
            } else {
                printf("Coin 3 is the fake coin and it is Heavier.\n");
            }
        } else if (A == C) {
            if (B < A) {
                printf("Coin 2 is the fake coin and it is Lighter.\n");
            } else {
                printf("Coin 2 is the fake coin and it is Heavier.\n");
            }
        } else { // B == C
            if (A < B) {
                printf("Coin 1 is the fake coin and it is Lighter.\n");
            } else {
                printf("Coin 1 is the fake coin and it is Heavier.\n");
            }
        }
    } else {
        printf("Error: Please enter at least two equal weights.\n");
    }

    return 0;
}