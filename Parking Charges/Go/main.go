// Problem: Parking Charges
// Link to the problem: https://www.codechef.com/problems/PARKINGCHARG
package main

import "fmt"

func main() {
	var x, y, h int
	fmt.Scan(&x, &y, &h)
	fmt.Println(x + (y * (h - 1)))
}
