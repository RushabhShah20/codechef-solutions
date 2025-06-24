// Problem: Parking Charges
// Link to the problem: https://www.codechef.com/problems/PARKINGCHARG
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let values: Vec<i32> = input
        .trim()
        .split_whitespace()
        .map(|s| s.parse().expect("Failed to parse number"))
        .collect();
    let x: i32 = values[0];
    let y: i32 = values[1];
    let h: i32 = values[2];
    println!("{}", x + (y * (h - 1)));
}
