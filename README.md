Here’s a **revised, Rust-focused version** of your Tic-Tac-Toe article. It reflects idiomatic Rust, removes C-like references (e.g., "Function Prototypes"), and emphasizes Rust principles like safety, enums, and pattern matching.

---

# 🦀 Tic-Tac-Toe in Rust

This Rust program implements a simple command-line Tic-Tac-Toe game where the player competes against a computer that makes random moves.

It uses fundamental Rust concepts like `enum`, `match`, and array manipulation while demonstrating safe, readable code practices. The game continues until a winner is determined or the board is full, at which point the result is displayed.

---

## 🧱 Core Components

### 📋 Board Representation

* The game board is a 3x3 array of `Option<char>`, where:

  * `Some('X')` = Player move
  * `Some('O')` = Computer move
  * `None` = Empty cell

### 🔁 Game Loop

* Alternates between `player_move()` and `computer_move()`
* After each turn, it checks for a winner using `check_winner()`
* Game ends if there’s a winner or no empty cells remain

---

## 🧠 Key Functions

| Function          | Purpose                                     |
| ----------------- | ------------------------------------------- |
| `reset_board()`   | Initializes the board with `None` values    |
| `print_board()`   | Displays the current state of the board     |
| `check_winner()`  | Determines if either player has won         |
| `player_move()`   | Accepts validated user input for their move |
| `computer_move()` | Chooses a random available cell             |
| `print_result()`  | Displays the final outcome (win/loss/tie)   |

---

## 🦀 Rust-Specific Features

* **Enums**: For game status or player types (`Player::Human`, `Player::Computer`)
* **Pattern Matching**: Clean checking of board cells (`match cell`)
* **Ownership & Borrowing**: Ensures safe data access across functions
* **Randomness**: Uses the `rand` crate to simulate computer decisions
* **Error Handling**: Uses `Result` or graceful input recovery via `loop`

---

## 🎮 Game Rules Recap

* Players alternate placing their symbol (`X` or `O`) on a 3×3 grid.
* The first player to align three of their symbols horizontally, vertically, or diagonally wins.
* If all cells are filled and no one wins, the game ends in a tie.
* The computer plays randomly but legally — no cheating!

---

## 📚 Source & Credits

This version is a Rust adaptation of the original concept presented in [this video tutorial](https://www.youtube.com/watch?v=_889aB2D1KI). It preserves the game logic but showcases the power of Rust for writing safe, readable, and robust system-level applications.

---

Would you like:

* The **actual Rust code implementation**?
* A **step-by-step explanation** for each function?
* A **tutorial-style blog post version** of this?

Let me know how you'd like to expand it!

