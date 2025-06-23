// Problem: Add Two Numbers
// Link to the problem: https://www.codechef.com/problems/FLOW001
package main

import "fmt"

func main() {
	var t int

	fmt.Scanf("%d", &t)

	for t > 0 {
		var a, b int
		fmt.Scanf("%d %d", &a, &b)

		fmt.Println(a + b)

		t--
	}
}
