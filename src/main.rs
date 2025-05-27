use std::io;

fn print_board(board: &[[char; 3]; 3]) {
    for i in 0..3 {
        println!(" {} | {} | {} ", board[i][0], board[i][1], board[i][2]);
        if i < 2 {
            println!("---|---|---");
        }
    }
}

fn check_winner(board: &[[char; 3]; 3]) -> Option<char> {
    for i in 0..3 {
        if board[i][0] == board[i][1] && board[i][1] == board[i][2] {
            return Some(board[i][0]);
        }
        if board[0][i] == board[1][i] && board[1][i] == board[2][i] {
            return Some(board[0][i]);
        }
    }

    if board[0][0] == board[1][1] && board[1][1] == board[2][2] {
        return Some(board[0][0]);
    }
    if board[0][2] == board[1][1] && board[1][1] == board[2][0] {
        return Some(board[0][2]);
    }

    None
}

fn main() {
    let mut board = [['1', '2', '3'], ['4', '5', '6'], ['7', '8', '9']];
    let mut turn = 'X';

    for _ in 0..9 {
        print_board(&board);
        println!("Player {}'s turn. Enter a number (1-9):", turn);

        let mut input = String::new();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read line");
        let pos: usize = match input.trim().parse() {
            Ok(num) if num >= 1 && num <= 9 => num - 1,
            _ => {
                println!("Invalid input. Try again.");
                continue;
            }
        };

        let row = pos / 3;
        let col = pos % 3;

        if board[row][col] == 'X' || board[row][col] == 'O' {
            println!("Position already taken. Try again.");
            continue;
        }

        board[row][col] = turn;

        if let Some(winner) = check_winner(&board) {
            print_board(&board);
            println!("Player {} wins!", winner);
            return;
        }

        turn = if turn == 'X' { 'O' } else { 'X' };
    }

    print_board(&board);
    println!("It's a draw!");
}
