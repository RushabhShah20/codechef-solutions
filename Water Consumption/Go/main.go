// Problem: Water Consumption
// Link to the problem: https://www.codechef.com/problems/WATERCONS
package main

import "fmt"

func main() {
	var t int

	fmt.Scanf("%d", &t)

	for t > 0 {
		var x int
		fmt.Scanf("%d", &x)

		if x >= 2000 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}

		t--
	}
}
