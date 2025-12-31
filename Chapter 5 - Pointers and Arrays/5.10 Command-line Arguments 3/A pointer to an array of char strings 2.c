#include <stdio.h>

int main() {

//	char* (*a_pointer_to_an_array_of_char_strings)[] = { "argv", "argument vector" };

	char* an_array_of_char_strings[] = { "argv", "argument vector" };

	char* (*a_pointer_to_an_array_of_char_strings)[];

	a_pointer_to_an_array_of_char_strings = &an_array_of_char_strings;

}