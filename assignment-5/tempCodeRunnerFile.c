#include <stdio.h>


long long int isPowerOfTwo(long long int n) {
    if (n <= 0) {
        return 0;
    }
    return (n & (n - 1)) == 0;
}

void generatePowersOfTwo(int count) {
    printf("The first %d powers of 2 are:\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", 1 << i);
    }
    printf("\n");
}

int main() {
    long long int n;

    printf("Enter an integer to check if it is a power of 2: ");
    scanf("%lld", &n);

    if (isPowerOfTwo(n)) {
        printf("%lld is a power of 2.\n", n);
    } else {
        printf("%lld is not a power of 2.\n", n);
    }

    generatePowersOfTwo(50);

    return 0;
}