package main

import (
	"fmt"
	"time"
)

func main() {
	startTime := time.Now()

	// Sikl orqali hisoblash (yoki boshqa jarayon)
	for i := 0; i < 1000000; i++ {
		_ = i * i // Har bir raqamning kvadratini hisoblash
	}

	elapsedTime := time.Since(startTime)
	fmt.Printf("Go bajarilish vaqti: %s\n", elapsedTime)
}
