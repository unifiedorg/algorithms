package main

import "fmt"

func algorithm(number int) int {
	var sequence = make([]int, number + 1, number + 1)
	sequence[0], sequence[1] = 0, 1

	for i := 2; i <= number; i += 1 {
		sequence[i] = sequence[i-1] + sequence[i-2]
	}

	return sequence[number]
}

func main() {
	fmt.Println(algorithm(69))
	// ^^ Output should be : 117669030460994
}