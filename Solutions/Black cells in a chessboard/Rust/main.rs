// Problem: Black cells in a chessboard
// Link to the problem: https://www.codechef.com/problems/BLACKCEL
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let n: i32 = input.trim().parse().expect("Failed to parse integer");

    println!("{}", ((n * n) / 2))
}
