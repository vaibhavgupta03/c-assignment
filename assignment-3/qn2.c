/*
Q2) On a standard N×N chessboard, each square is identified by a coordinate pair (x, y), where x represents the row number and y represents the column number. The rows and columns are numbered from 1 to N. The square in the top-left corner (1,1) is Black, and the colors alternate between Black and White as you move to the right or downward. For example, (1,2) is White, (1,3) is Black again, and so on. Write a C program that takes two integers as input, representing the coordinates (x, y) of a square on the chessboard. The program should determine whether the square is Black or White. Also, take the N as input and check that the inputs (x,y) will always be between 1 and N. If not then give error to the user.*/

#include <stdio.h>

int main() {
    int N, x, y;

    printf("Enter the size of the chess: \n");
    scanf("%d", &N);

    printf("Enter the coordinates (x, y) of the square: ");
    scanf("%d %d", &x, &y);

    if (x < 1 || x > N || y < 1 || y > N) {
        printf("Coordinates is not found in the chess.\n");
    } else if ((x + y) % 2 == 0) {
        printf("The square at (%d, %d) is Black.\n", x, y);
    } else {
        printf("The square at (%d, %d) is White.\n", x, y);
    }

    return 0;
}