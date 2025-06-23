// Problem: Chef and Brain Speed
// Link to the problem: https://www.codechef.com/problems/CBSPEED
package main

import "fmt"

func main() {
	var x, y int
	fmt.Scan(&x)
	fmt.Scan(&y)
	if y > x {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
