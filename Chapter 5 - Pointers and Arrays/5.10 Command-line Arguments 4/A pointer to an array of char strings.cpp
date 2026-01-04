#include <stdio.h>

int main() {

	//	char* (*a_pointer_to_an_array_of_char_strings)[] = { "argv", "argument vector" };

	const char* an_array_of_char_strings[] = { "argv", "argument vector" };

	const char* (*a_pointer_to_an_array_of_char_strings)[];

	// "this is one of those C vs C++ ¡§same-looking syntax, different rules¡¨ situations." [1]
	a_pointer_to_an_array_of_char_strings = &an_array_of_char_strings;

	char(*a_pointer_to_a_one_dimensional_array_of_characters)[];

	a_pointer_to_a_one_dimensional_array_of_characters = an_array_of_char_strings;

}

// References:
// 1. https://chatgpt.com/c/69552691-0368-8321-929b-f6c03a2987c1
