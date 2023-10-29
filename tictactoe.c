#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define global Variables
char board[3][3];      // 2D array to represent the tic-tac-toe board
const char PLAYER = 'X';    // Symbol for the player
const char COMPUTER = 'O';  // Symbol for the computer

// Function prototypes (declaring functions before they are defined)
void resetBoard();
void printBoard();
int checkFreeSpace();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main() {
  char winner = ' ';  // Stores the winner of the game, initialized as a space

  resetBoard();  // Initialize the game board with empty spaces

  // Main game loop: continues until there's a winner or the board is full
  while (winner == ' ' && checkFreeSpace() != 0) {

    printBoard();  // Display the current state of the board

    playerMove();  // Player's move
    winner = checkWinner();  // Check if the player has won

    // If the player won or there are no more free spaces, exit the loop
    if (winner != ' ' && checkFreeSpace() == 0) {
      break;
    }

    computerMove();  // Computer's move
    winner = checkWinner();  // Check if the computer has won

    // If the computer won or there are no more free spaces, exit the loop
    if (winner != ' ' && checkFreeSpace() == 0) {
      break;
    }
  }

  printBoard();  // Display the final state of the board
  printWinner(winner);  // Print the result of the game (win, lose, or tie)
  return 0;
}

// Function to reset the game board with empty spaces
void resetBoard() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }
}

// Function to print the current state of the board
void printBoard() {
  printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
  printf("\n---|---|---\n");
  printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
  printf("\n---|---|---\n");
  printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
  printf("\n---|---|---\n");
}

// Function to check the number of free spaces on the board
int checkFreeSpace() {
  int freeSpaces = 9;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] != ' ') {
        freeSpaces--;
      }
    }
  }
  return freeSpaces;
}

// Function for the player's move
void playerMove() {
  int x;
  int y;

  do {
    printf("Enter Rrow #(1-3): ");
    scanf("%d", &x);
    x--;
    printf("Enter Column #(1-3): ");
    scanf("%d", &y);
    y--;

    if (board[x][y] != ' ') {
      printf("Invalid move\n");
    } else {
      board[x][y] = PLAYER;  // Place the player's symbol on the board
      break;
    }
  } while (board[x][y] != ' ');
}

// Function for the computer's move
void computerMove() {
  srand(time(0));  // Seed the random number generator with the current time

  int x;
  int y;

  if (checkFreeSpace() > 0) {
    do {
      // Generate random coordinates for the computer's move
      x = rand() % 3;
      y = rand() % 3;
    } while (board[x][y] != ' ');
    board[x][y] = COMPUTER;  // Place the computer's symbol on the board
  } else {
    printWinner(' ');  // If there are no more free spaces, it's a tie
  }
}

// Function to check if there is a winner and return the winning symbol
char checkWinner() {
  // Check rows for a winner
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
      return board[i][0];
    }
  }
  
  // Check columns for a winner
  for (int i = 0; i < 3; i++) {
    if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
      return board[0][i];
    }
  }

  // Check diagonals for a winner
  if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
    return board[0][0];
  }
  if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
    return board[0][2];
  }

  return ' ';  // If there is no winner, return a space
}

// Function to print the result of the game
void printWinner(char winner) {
  if (winner == PLAYER) {
    printf("You win!!! :)\n");
  } else if (winner == COMPUTER) {
    printf("You lose :(\n");
  } else {
    printf("Tie :|\n");
  }
}

