// Problem: Chef and Brain Speed
// Link to the problem: https://www.codechef.com/problems/CBSPEED
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let mut iter = input.trim().split_whitespace();
    let x: i32 = iter
        .next()
        .expect("No value found")
        .parse()
        .expect("Failed to parse integer");
    let y: i32 = iter
        .next()
        .expect("No value found")
        .parse()
        .expect("Failed to parse integer");
    if (y > x) {
        println!("YES")
    } else {
        println!("NO")
    }
}
