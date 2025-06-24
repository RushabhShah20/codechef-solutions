// Problem: Add Two Numbers
// Link to the problem: https://www.codechef.com/problems/FLOW001
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let t: i32 = input.trim().parse().expect("Failed to parse integer");

    for _ in 0..t {
        let mut input = String::new();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read line");

        let mut iter = input.trim().split_whitespace();
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

        println!("{}", (a + b))
    }
}
