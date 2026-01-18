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

	 Per K&RII A7.1 Pointer Generation,
	 "This conversion does not take place if the expression is the operand of the unary & operator, 
	  or of ++, --, sizeof, or as the left operand of an assignment operator or the . operator."

	  Since A7.1 does not preclude the binary + operator, 

*/




// Reference:
// 1. https://chatgpt.com/c/695538fa-95d4-8323-8f11-86b096fe4c82
