/*Q-5) Given a 4-digit number, write a program that prints:                                                           
1. "Up" : if the sum of the first two digits is greater than the sum of the last two digits 
2. "Down" : if the sum of the last two digits is greater 
3. "Left" : if both sums are equal but the number has more even digits 
5 marks 
4. "Right" : if both sums are equal but the number has more odd digits 
5. "Stay" : if the count of even and odd digits are equal 
6. If the input number satisfies multiple criteria, it prints all applicable results*/

#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;

    printf("Enter a 4 digit number : ");
    scanf("%d", &num);



    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10;
    d4 = num % 10;

    int sum1 = d1 + d2;
    int sum2 = d3 + d4;
    int evenCount = (d1 % 2 == 0) + (d2 % 2 == 0) + (d3 % 2 == 0) + (d4 % 2 == 0);
    int oddCount = 4 - evenCount;

    if (sum1 > sum2) {
        printf("Up\n");
    }
    if (sum2 > sum1) {
        printf("Down\n");
    }
    if (sum1 == sum2 && evenCount > oddCount) {
        printf("Left\n");
    }
    if (sum1 == sum2 && oddCount > evenCount) {
        printf("Right\n");
    }
    if (evenCount == oddCount) {
        printf("Stay\n");
    }

    return 0;
}