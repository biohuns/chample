package main

import (
	"fmt"

	"github.com/biohuns/scramble"
)

func main() {
	scramble.Init()
	scrambles := scramble.NewScrambles(10)
	for _, s := range scrambles {
		fmt.Printf(
			"Facelets: %s\nSequence: %s\n",
			s.Facelets,
			s.Sequence)
	}
}
