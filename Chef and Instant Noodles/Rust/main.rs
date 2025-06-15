// Problem: Chef and Instant Noodles
// Link to the problem: https://www.codechef.com/problems/INSTNOODLE
fn main() {
    let mut input = String::new();
    std::io::stdin()
        .read_line(&mut input)
        .expect("Failed to read linr");
    let mut numbers = input.trim().split_whitespace();
    let x: i32 = numbers.next().unwrap().parse().unwrap();
    let y: i32 = numbers.next().unwrap().parse().unwrap();
    println!("{}", x * y);
}
