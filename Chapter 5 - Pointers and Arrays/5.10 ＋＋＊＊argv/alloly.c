#include <stdio.h>

int main() {

	char * argv[1] = { "Hello" };

	// [Note1]
	printf("%c\n", ++ ** argv);  // "argv is NOT a pointer variable here. It is an array object." [1]

}

// Notes:
// 1. 
//  
//  "A pointer is a variable, so pa=a and pa++ are legal. But an array name is not a variable; 
//  constructions like a=pa and a++ are illegal. 
//  
//  When an array name is passed to a function, what is passed is the location of the initial element.
//  Within the called function, this argument is a local variable, 
//  and so an array name parameter is a pointer"-K&RII 5.3 Pointers and Arrrays


// References:
// 1. https://chatgpt.com/c/69ccd5b2-ac3c-83a8-98a7-051758bcb9e2
// 

