// Problem: Alice and Marks
// Link to the problem: https://www.codechef.com/problems/MARKSTW
package main

import "fmt"

func main() {
	var x, y int
	fmt.Scan(&x)
	fmt.Scan(&y)
	if x >= 2*y {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
