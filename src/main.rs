use std::io;

fn main() {
    //    A 3x3 grid is represented using a 2D array of characters.
    //    Initial values ('1' to '9') help users choose their moves by number.

    let mut board = [['1', '2', '3'], ['4', '5', '6'], ['7', '8', '9']];

    let mut turn = 'X';

    turn = if turn == 'X' { 'o' } else { 'x' };

    // Reads user input as a string from standard input.
    // expect(...) handles any potential error.
    
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
}
