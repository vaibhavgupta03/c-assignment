/* Q-1) Print the square of numbers in a zigzag pattern, where even-numbered rows go left to right and 
odd-numbered rows go right to left. User gives the value of N which is the number of rows and 
columns */

#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N : ");
    scanf("%d", &N);


    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            for (int j = i*N; j >= (i-1)*N+1; j--) {
                printf("%d ", j*j);
            }
        } else { 
            for (int j = (i-1)*N+1; j<= i*N ; j++) {
                printf("%d ", j*j);
            }
        }
        printf("\n");
    }

    return 0;
}