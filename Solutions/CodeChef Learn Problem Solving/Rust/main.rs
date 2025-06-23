// Problem: CodeChef Learn Problem Solving
// Link to the problem: https://www.codechef.com/problems/CCLEARN
fn main() {
    let mut input = String::new();
    std::io::stdin()
        .read_line(&mut input)
        .expect("Failed to read linr");
    let mut numbers = input.trim().split_whitespace();
    let x: i32 = numbers.next().unwrap().parse().unwrap();
    println!("{}", 2 * x);
}
