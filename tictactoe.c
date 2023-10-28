#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Add global Variables

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

// Main functions for the project

void resetBoard();
void printBoard();
int checkFreeSpace();
void playerMove();
void compuerMove();
char checkWinner();
void printWinner(char);

int main() {
  char winner = ' ';

  resetBoard();

  return 0;
}

void resetBoard() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }
}
void printBoard() {
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");"
    printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");"
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
    printf("\n---|---|---\n");
    "
}
int checkFreeSpace() {}
void playerMove() {}
void compuerMove() {}
char checkWinner() {}
void printWinner(char winner) {}
