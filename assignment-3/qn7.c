/*Q-7) Take a 3-digit number as input from the user:                                                                    
1. Print "Armstrong" if the number equals the sum of cubes of its digits. 
2. Print "Palindrome" if it reads the same forward and backward. 
10 marks 
3. Print "Mirror" if reversing the digits gives the same number when each digit is replaced with its 
mirror image: 
Mirror pairs: 0↔0, 1↔1, 6↔9, 9↔6, 8↔8 
4. Print "None" if it satisfies none of the above. 
5. If the input number satisfies multiple criteria, it prints all applicable results 
Example : Suppose the number is 619. Reverse the digits: 916. Now replace each digit with its mirror 
pair: 
9 → 6 
1 → 1 
6 → 9 
So, the mirrored reversed number is 619. Since the mirrored reversed number 619 is the same as the 
original number 619, print "Mirror". */

#include <stdio.h>

int main() {
    int num, a, b, c;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;

    int armstrong = a*a*a + b*b*b + c*c*c;
    int reversed = c*100 + b*10 + a;


    int mirror = 0;
    if (c == 0) {
        mirror += 0 * 100;
    } else if (c == 1) {
        mirror += 1 * 100;
    } else if (c == 6) {
        mirror += 9 * 100;
    } else if (c == 9) {
        mirror += 6 * 100;
    } else if (c == 8) {
        mirror += 8 * 100;
    } else {
        mirror = -1;
    }

    if (b == 0) {
        mirror += 0 * 10;
    } else if (b == 1) {
        mirror += 1 * 10;
    } else if (b == 6) {
        mirror += 9 * 10;
    } else if (b == 9) {
        mirror += 6 * 10;
    } else if (b == 8) {
        mirror += 8 * 10;
    } else {
        mirror = -1;
    }

    if (a == 0) {
        mirror += 0;
    } else if (a == 1) {
        mirror += 1;
    } else if (a == 6) {
        mirror += 9;
    } else if (a == 9) {
        mirror += 6;
    } else if (a == 8) {
        mirror += 8;
    } else {
        mirror = -1;
    }


    if ((num != armstrong) && (num != reversed) && (num != mirror)) {
        printf("None\n");
    } else {
        if (num == armstrong) {
            printf("Armstrong\n");
        }
        if (num == reversed) {
            printf("Palindrome\n");
        }
        if (num == mirror && mirror != -1) {
            printf("Mirror\n");
        }
    }

    return 0;
}