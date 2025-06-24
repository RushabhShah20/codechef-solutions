// Problem: Water Consumption
// Link to the problem: https://www.codechef.com/problems/WATERCONS
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

        let x: i32 = input.trim().parse().expect("Failed to parse integer");

        if (x >= 2000) {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}
