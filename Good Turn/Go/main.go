// Problem: Good Turn
// Link to the problem: https://www.codechef.com/problems/GDTURN
package main

import "fmt"

func main() {
	var t int

	fmt.Scanf("%d", &t)

	for t > 0 {
		var x, y int
		fmt.Scanf("%d %d", &x, &y)

		if x+y > 6 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}

		t--
	}
}
