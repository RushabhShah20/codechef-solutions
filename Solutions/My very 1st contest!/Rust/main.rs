// Problem: My very 1st contest!
// Link to the problem: https://www.codechef.com/problems/MY1STCONTEST
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let mut iter = input.trim().split_whitespace();
    let n: i32 = iter
        .next()
        .expect("No value found")
        .parse()
        .expect("Failed to parse integer");
    let a: i32 = iter
        .next()
        .expect("No value found")
        .parse()
        .expect("Failed to parse integer");
    let b: i32 = iter
        .next()
        .expect("No value found")
        .parse()
        .expect("Failed to parse integer");

    println!("{} {}", n - a, n - a - b);
}
