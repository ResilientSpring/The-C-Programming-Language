#include <stdio.h>

int main() {

	//	char* (*a_pointer_to_an_array_of_char_strings)[] = { "argv", "argument vector" };

	char* an_array_of_char_strings[] = { "argv", "argument vector" };

	char* (*a_pointer_to_an_array_of_char_strings)[];

	a_pointer_to_an_array_of_char_strings = &an_array_of_char_strings; // [Note 1]

	if (*a_pointer_to_an_array_of_char_strings == an_array_of_char_strings)
		printf("True");

	if ( (*a_pointer_to_an_array_of_char_strings)[0] == an_array_of_char_strings[0])
		printf("\n\nTrue\n\n");

	if ((*a_pointer_to_an_array_of_char_strings) == &an_array_of_char_strings[0])
		printf("\n\nTrue absolutely.\n\n");

	if ((**a_pointer_to_an_array_of_char_strings) == an_array_of_char_strings[0])
		printf("\n\nTrue\n\n");

	if ((*a_pointer_to_an_array_of_char_strings)[0] == *(an_array_of_char_strings + 0) )
		printf("\n\nThis is True!\n\n");

	if ( *( (*a_pointer_to_an_array_of_char_strings) + 0) == *(an_array_of_char_strings + 0))
		printf("\n\nAgain, This is True!\n\n");

	if ( *(*a_pointer_to_an_array_of_char_strings) == *(an_array_of_char_strings + 0))
		printf("\n\nAgain, This is True!\n\n");

	char(*a_pointer_to_a_one_dimensional_array_of_characters)[];

	a_pointer_to_a_one_dimensional_array_of_characters = an_array_of_char_strings;

}

// Notes:
//
// 1. "In C, an array type with unspecified bound (T[]) is compatible with T[N] (same element type), 
//     so the pointer assignment is allowed." [1]
//     
//     "C++ does not have C¡¦s ¡§compatible types¡¨ rule for T[] vs T[N]". [1]
//


// References:
// 
// 1. https://chatgpt.com/c/69552691-0368-8321-929b-f6c03a2987c1
// 
