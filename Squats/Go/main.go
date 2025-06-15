// Problem: Squats
// Link to the problem: https://www.codechef.com/problems/SQUATS
package main

import "fmt"

func main() {
	var t int

	fmt.Scanf("%d", &t)

	for t > 0 {
		var x int
		fmt.Scanf("%d", &x)

		fmt.Println(x * 15)

		t--
	}
}
