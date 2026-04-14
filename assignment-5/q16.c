/*Q-16) Write a C program to find the median of n unsorted numbers given by the user.*/

#include <stdio.h>
void sort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    sort(arr, n);

    float median;
    if (n % 2 == 0) {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2;
    } else {
        median = arr[n / 2];
    }

    printf("The median is: %.2f\n", median);
    return 0;
}