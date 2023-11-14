# TICTACTOE
This C code implements a simple command-line-based Tic-Tac-Toe game where a player competes against a computer. 

The code simulates a simple game of Tic-Tac-Toe where the player competes against a computer with random moves. The game continues until there's a winner or the board is full, and it then displays the result of the game.


    Header Files: Includes standard headers for input/output operations (stdio.h), character handling functions (ctype.h), general utilities (stdlib.h), and time manipulation functions (time.h).

    Global Variables:
        board: A 3x3 two-dimensional array representing the Tic-Tac-Toe board.
        PLAYER: A constant character 'X', representing the player's symbol.
        COMPUTER: A constant character 'O', representing the computer's symbol.

    Function Prototypes: Declarations of functions used in the program like resetBoard, printBoard, etc.

    Main Function:
        Initializes the game and enters a loop that continues until a winner is determined or the board is full.
        Calls playerMove and computerMove alternately for each turn.
        Uses checkWinner to determine if there's a winner after each move.
        Breaks the loop if there's a winner or no more free spaces are left.

    Function Implementations:
        resetBoard: Initializes the board with empty spaces.
        printBoard: Prints the current state of the board.
        checkFreeSpace: Counts and returns the number of free spaces left on the board.
        playerMove: Handles the player's move, prompting for row and column numbers and validating the move.
        computerMove: Randomly determines the computer's move using rand and checks for free spaces.
        checkWinner: Checks rows, columns, and diagonals for three consecutive identical symbols, returning the winning symbol or a space if there's no winner yet.
        printWinner: Prints the outcome of the game based on the winner ('X' for player win, 'O' for computer win, or ' ' for a tie).

The game follows the typical rules of Tic-Tac-Toe, with the player and computer taking turns to place their symbols on a 3x3 grid. The game ends when one of the players forms a straight line of three symbols horizontally, vertically, or diagonally, or when the board is full, resulting in a tie. The program uses a simple random strategy for the computer's moves.

[Credit Source](https://www.youtube.com/watch?v=_889aB2D1KI)
