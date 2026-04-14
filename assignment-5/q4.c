/*Q-4) Find the maximum of N numbers using a do-while loop. */
#include <stdio.h>
int main() {
    int n, i = 1, num, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    do {
        i++;
        if (i > n) {
            break;
        }
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    } while (i < n);
    printf("The maximum number is: %d\n", max);
    return 0;
}