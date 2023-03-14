// Reference URL: https://www.youtube.com/watch?v=98tQPM3R3qU

// Every Go file that is created will be part of a package, which is a collection of files and code.
// If the package is called "main", this tells the Go compiler that the code should be compiled into an executable program at the end.
package main

// Package from the Go standard library. "fmt" is for formatting strings and printing messages to the console.
import "fmt"

// All functions will start with "func" keyword. The main() function is the entry point of our application.
// There must be one and only one main() function.
func main() {

	// Strings in Go are double-quoted. We cannot use single quotes.
	var nameOne string = "mario"
	// Go will look at this and infer the data type instead of it being declared explicitly.
	var nameTwo = "luigi"
	// Declaring a variable with no value. This sets the variable up for future use.
	var nameThree string

	fmt.Println(nameOne, nameTwo, nameThree)

	// Changing the value of the variable
	nameOne = "peach"
	// Giving the variable a value
	nameThree = "bowser"

	fmt.Println(nameOne, nameTwo, nameThree)

	// : can be used instead of the "var" keyword when we initialize or declare a variable the first time.
	// The := shorthand can't be used outside of a function.
	nameFour := "yoshi"

	fmt.Println(nameOne, nameTwo, nameThree, nameFour)

	// Integers
	var ageOne int = 20
	var ageTwo = 30
	ageThree := 40

	fmt.Println(ageOne, ageTwo, ageThree)

	// Bits and memory
	// int8's range is -128 to 127
	var numOne int8 = 25
	var numTwo int8 = -128
	// No negative numbers are allowed with a uint
	// unit8's range is 0 to 255. To go beyond 255, the range needs to be adjusted (i.e. unit16)
	var numThree uint16 = 256

	fmt.Println(numOne, numTwo, numThree)

	var scoreOne float32 = 25.98
	var scoreTwo float64 = 88889234729384702384203974
	// Infered variable declarations for floats are defaulted to float64
	scoreThree := 1.5

	fmt.Println(scoreOne, scoreTwo, scoreThree)

}
