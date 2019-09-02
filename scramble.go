package scramble

import "C"
import (
	"strings"
	"unsafe"
)

// #include <stdlib.h>
// #include <string.h>
// #include "cubiecube.h"
// #include "coordcube.h"
// #include "kttools.h"
// #include "search.h"
// #include "scramble.h"
import "C"

type (
	Scrambles []Scramble

	// Scramble is combination facelets and sequence
	Scramble struct {
		Facelets string `json:"facelets"`
		Sequence string `json:"sequence"`
	}
)

var (
	empty = Scramble{
		Facelets: strings.Repeat(" ", 56),
		Sequence: strings.Repeat(" ", 256),
	}
)

func Init() {
	C.scramble_init()
}

// NewScrambles return scramble specified number of times
func NewScrambles(count int) Scrambles {
	var (
		scrambles Scrambles
		facelets  = C.CString(empty.Facelets)
		sequence  = C.CString(empty.Sequence)
	)
	defer C.free(unsafe.Pointer(sequence))
	defer C.free(unsafe.Pointer(facelets))

	for i := 0; i < count; i++ {
		C.scramble(facelets, sequence)
		scrambles = append(scrambles, Scramble{
			Facelets: C.GoString(facelets),
			Sequence: C.GoString(sequence),
		})
	}

	return scrambles
}
