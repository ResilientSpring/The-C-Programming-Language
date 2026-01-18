#include <stdio.h>

int main() {

	char * an_array_of_char_strings[] = { "sloppy", "careless" };

	printf("%d bytes.\n", sizeof an_array_of_char_strings);       // size of the whole array (2 pointers)

	printf("%d bytes.\n", sizeof(an_array_of_char_strings + 0));   // size of a pointer (char **)
}

/*   Why does sizeof(an_array_of_char_strings + 0) become pointer-sized?
     
	 sizeof is a unary operator. 

     So, here, the operand of sizeof is the expression (an_array_of_char_strings + 0).

	 Per K&RII A7.7 Additive Operators, 
	 "A pointer to an object in an array and a value of any integral type may be added."
	 " The sum is a pointer of the same type as the original pointer,"
	 " the expression P+1 is a pointer to the next object in the array."

	 So, (an_array_of_char_strings + 0) is a pointer.

*/

// Reference:
// 1. https://chatgpt.com/c/695538fa-95d4-8323-8f11-86b096fe4c82
