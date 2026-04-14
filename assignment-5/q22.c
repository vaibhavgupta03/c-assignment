/*Q-22) Print this pattern by taking n as input from the user. For example,
taking n = 5
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int size = 2 * n - 1;
    int center = size / 2;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int value = abs(i - center);
            if (abs(j - center) > value)
                value = abs(j - center);

            printf("%d ", value + 1);
        }
        printf("\n");
    }

    return 0;
}