/*Q-8) You are given an N×N chessboard and an initial position (row, column) of a knight. The knight 
can only move in one restricted way: two steps up and one step left. Given an integer K representing 
the number of moves, determine the knight’s final position after making exactly K valid moves. If at 
any move the knight cannot move without going off the board, it must stop moving. Also, determine 
the color of the final square assuming the top-left corner (1,1) is black and colors alternate like a 
standard chessboard.  Also check if the user enters a valid initial position, otherwise print error.                           
[15 marks] 
Input: Board size N, starting position (r, c), number of moves K (assume K ≤ 10).  
Output: Final position and the color of the square.  
Constraint: Implement the entire logic using only nested if-else statements without any loops or 
functions.*/

#include <stdio.h>

int main() {
    int N, r, c, K;

    printf("Enter the size of the chessboard (N): ");
    scanf("%d", &N);
    printf("Enter the initial position of the knight (row and column): ");
    scanf("%d %d", &r, &c);
    printf("Enter the number of moves (K): ");
    scanf("%d", &K);

    if (r < 1 || r > N || c < 1 || c > N) {
        printf("Invalid initial position.\n");
        return 1;
    }

    if (K >= 1) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 2) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 3) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 4) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 5) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 6) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 7) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    } 
    if (K >= 8) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0; 
        }
    }
    if (K >= 9) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    if (K >= 10) {
        if (r - 2 >= 1 && c - 1 >= 1) {
            r -= 2;
            c -= 1;
        } else {
            K = 0;
        }
    }
    printf("Final position: (%d, %d)\n", r, c);
    if ((r + c) % 2 == 0) {
        printf("Color of the square: Black\n");
    } else {
        printf("Color of the square: White\n");
    }

    return 0;
  }