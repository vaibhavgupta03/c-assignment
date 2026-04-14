/*Write a C program that first reads two integers: the number of elements n and the spacing integer 
k. Then, it reads n integers one by one from the user. Your program should calculate the maximum 
sum of a non-empty subsequence of the given integers such that any two selected numbers in the 
subsequence are at least k indices apart in the original sequence. 
You are not allowed to use arrays or functions other than main. The program should use only a single 
for loop and primitive variables to compute the answer efficiently. 
Input: 
n=4 k=2 
3 2 7 10 
Maximum sum = 13 
In the example above, the sequence is [3, 2, 7, 10] and spacing k = 2. Valid subsequences 
where every chosen pair of elements are at least 2 indices apart include {3,7}, {3,10}, and 
{2,10}. Among these, {3,10} gives the maximum sum 13. */

#include <stdio.h>

int main() {
    int n, k;
    int current, prev1 = 0, prev2 = 0;
    int maxSum = 0;

    printf("Enter the number of elements (n) and spacing integer (k): ");
    scanf("%d %d", &n, &k);

    if (n <= 0 || k < 0) {
        printf("Invalid input. n must be greater than 0 and k must be non-negative.\n");
        return 1;
    }

    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &current);

        if (i < k) {
            
            prev1 = current > prev1 ? current : prev1;
        } else {
           
            int includeCurrent = current + prev2;
            int excludeCurrent = prev1;

            
            maxSum = includeCurrent > excludeCurrent ? includeCurrent : excludeCurrent;

            
            prev2 = prev1;
           
            prev1 = maxSum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);
    return 0;
}