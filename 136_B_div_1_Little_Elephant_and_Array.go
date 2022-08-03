package main

import (
	"fmt"
	"log"
	"math"
	"os"
)

const mx_sz int = 100005

var arr [mx_sz]int
var blocks [317]int
var blk_sz int

func preprocessor(n int) {
	blk_sz = int(math.Sqrt(float64(n)))
	blk_num := -1
	mp := make(map[int]int)
	for i := 0; i < n; i++ {
		if i%blk_sz == 0 || i == n-1 {
			cnt := 0
			for k, v := range mp {
				if k == v {
					cnt++
					mp[k] = 0
				}
			}
			if blk_num >= 0 {
				blocks[blk_num] = cnt
			}
			blk_num++
		}
		mp[arr[i]]++

	}
}
func queries(l int, r int) int {
	//First block
	sum := 0
	// for l < r && l%blk_sz != 0 && l != 0 {
	// 	sum += arr[l]
	// 	l++
	// }
	// overlap block
	for l+blk_sz-1 <= r {

		sum += blocks[(l / blk_sz)]
		l += blk_sz
	}
	//last block
	// for l <= r {
	// 	sum += arr[l]
	// 	l++
	// }
	return sum
}
func main() {
	stdin, err := os.OpenFile("input.txt",
		os.O_RDONLY|os.O_CREATE, 0666)
	if err != nil {
		log.Fatal(err)
	}
	os.Stdin = stdin
	var n, m, l, r int

	fmt.Scanf("%d %d", &n, &m)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &arr[i])
	}
	preprocessor(n)
	fmt.Println(blocks[0 : n/blk_sz])
	for m > 0 {
		fmt.Scanf("%d %d", &l, &r)

		fmt.Println(queries(l-1, n-1))
		m--
	}
}