package scramble

import (
	"testing"
)

func BenchmarkNewScrambles(b *testing.B) {
	Init()

	b.ResetTimer()
	for i := 0; i < b.N; i++ {
		NewScrambles(1)
	}
}
