// Problem: AB Difference
// Link to the problem: https://www.codechef.com/problems/ABDIFF
package main

import "fmt"

func Abs(n int) int {
	if n < 0 {
		return (-1 * n)
	} else {
		return n
	}

}
func main() {
	var a, b int

	fmt.Scanf("%d %d", &a, &b)

	fmt.Println(Abs((a * b) - (a + b)))
}
