#include <stdio.h>

int main() {

	// By declaring in this way, you are telling compiler or operating system about how large
	// the array of characters is. The compiler or OS will find a space to accommodate the array.
	char* a_string_constant = "I am a string";
	// [Note1][Note2]

}

// Notes:
// 
// 1. Need not manually add a null terminator to the end of a string constant because C++ compiler
//    does this for you automatically.[1]
// 
// 2. In the internal representation, the array is terminated with the null character '\0'. [2]

// References:
// 
// 1. <C++: A Beginner's Guide, Second Edition>, section on 4.4 Strings, page 132. 
//
// 2. <The C Programming Language>, section on 5.5 Character Pointers and Functions, page 118.
// 