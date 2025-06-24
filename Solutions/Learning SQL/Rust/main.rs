// Problem: Learning SQL
// Link to the problem: https://www.codechef.com/problems/LEARNSQL
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
    let (r, c, e) = (values[0], values[1], values[2]);
    println!("{}", (r + e) * c);
}
