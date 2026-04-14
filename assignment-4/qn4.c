/*Write a C program to calculate mean, sum, and maximum of integers entered by the user. The user 
continues to enter the numbers in ascending order and when it wants to stop it presses “0”. You are 
not allowed to use arrays or functions other than main.  */

#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, max = 0;
    int prev = -1;

    printf("Enter integers in ascending order (press 0 to stop):\n");
    
    while (1) {
        scanf("%d", &num);
        
        if (num == 0) {
            break; 
        }
        
        if (num < 1) {
            printf("Invalid input. Please enter integers greater than or equal to 1.\n");
            continue;
        }
        
        if (prev != -1 && num <= prev) {
            printf("Invalid input. Please enter integers in ascending order.\n");
            continue;
        }
        
        sum += num;
        count++;
        
        if (num > max) {
            max = num;
        }
        
        prev = num;
    }

    if (count > 0) {
        double mean = (double)sum / count;
        printf("Mean: %.2f\n", mean);
        printf("Sum: %d\n", sum);
        printf("Maximum: %d\n", max);
    } else {
        printf("No valid numbers entered.\n");
    }

    return 0;
}