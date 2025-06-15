// Problem: Age Limit
// Link to the problem: https://www.codechef.com/problems/AGELIMIT
package main

import "fmt"

func main() {
	var t int
	fmt.Scanf("%d", &t)

	for t > 0 {
		var x, y, a int

		fmt.Scanf("%d %d %d", &x, &y, &a)

		if a >= x && a < y {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}

		t--
	}
}
