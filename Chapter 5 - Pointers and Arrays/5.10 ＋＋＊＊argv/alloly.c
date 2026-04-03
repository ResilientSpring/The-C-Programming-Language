#include <stdio.h>

int main() {

	char * argv[1] = { "Hello" };

	printf("%c\n", ++ ** argv);

}

// "A pointer is a variable, so pa=a and pa++ are legal. But an array name is not a variable; 
//  constructions like a=pa and a++ are illegal. 
//  
//  When an array name is passed to a function, what is passed is the location of the initial element.
//  Within the called function, this argument is a local variable, and so an array name parameter is a pointer"
