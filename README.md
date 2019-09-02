# scramble

This repository is a fork of [chample](https://github.com/kotarot/chample) that can be called from Go.

## Usage

### [Example Code](https://github.com/biohuns/scramble/blob/master/_example/main.go)

```go
// First, execute Init()
scramble.Init()

scrambles := scramble.NewScrambles(5)
for _, s := range scrambles {
    fmt.Printf(
        "Facelets: %s\nSequence: %s\n",
        s.Facelets,
        s.Sequence,
    )
}
```

### Result

```console
Facelets: DRDDUFBRLUULFRBRLRDBFLFRFLFUFDDDDLUBLRRFLUUBRBUFLBDUBB
Sequence: R2 B2 R2 U R2 D R2 U L2 D R' B2 F' D L2 R U B D L D2 U2
Facelets: BLLLURLLDRUFFRDULFDDBDFUDFBFRLRDFRFLRBBBLBUBRUUURBUDDF
Sequence: U2 L2 D R2 U' F2 R2 F2 U' L' F R2 B L B2 D' F' R B2 U
Facelets: FDBDUBLLFURLRRFRBLDFRUFUDBDFDBBDURFDLLBDLLBLRURURBFFUU
Sequence: F2 U' L2 F2 U F2 D' F2 U2 R2 B F' U R' F D' U B' F R'
Facelets: URLLULLRUFUBBRBRBFFDLDFURUUBRFDDLRUDLFDRLLBFDDFBDBBRFU
Sequence: F2 R2 U L2 D F2 L2 B2 D2 F R2 B' U L' U R' D2 L R2 D' U
Facelets: UFDLUUFUUFLRFRRUDLUBLLFRDRBRDLDDBLUDBBRDLFBLBFURBBFFRD
Sequence: U R2 F2 D' L2 U2 F2 L2 R2 U B U2 L' B' U' L' U' F D F R U'
```
