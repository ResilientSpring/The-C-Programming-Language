#include <stdio.h>

int main() {

	//	char* (*a_pointer_to_an_array_of_char_strings)[] = { "argv", "argument vector" };

	char* an_array_of_char_strings[] = { "argv", "argument vector" };

	char* (*a_pointer_to_an_array_of_char_strings)[];

	a_pointer_to_an_array_of_char_strings = &an_array_of_char_strings;

	char(*a_pointer_to_a_one_dimensional_array_of_characters)[];

	a_pointer_to_a_one_dimensional_array_of_characters = an_array_of_char_strings;

	printf("%c\n", ***a_pointer_to_an_array_of_char_strings);

}