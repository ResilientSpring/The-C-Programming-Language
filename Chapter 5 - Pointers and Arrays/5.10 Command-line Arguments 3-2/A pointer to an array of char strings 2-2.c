#include <stdio.h>

int main() {

	//	char* (*a_pointer_to_an_array_of_char_strings)[] = { "argv", "argument vector" };

	char* an_array_of_char_strings[] = { "argv", "argument vector" };

	char* (*a_pointer_to_an_array_of_char_strings)[];

	a_pointer_to_an_array_of_char_strings = &an_array_of_char_strings;

	char(*a_pointer_to_a_one_dimensional_array_of_characters)[];

	a_pointer_to_a_one_dimensional_array_of_characters = an_array_of_char_strings;

	printf("%c\n", ***a_pointer_to_an_array_of_char_strings);

	// printf expects a pointer to the first element of a character array, so don't be misled by VS2019's
	// so-called "the address of a string". [1]
	printf("%s", *a_pointer_to_an_array_of_char_strings);

	// printf expects a pointer to the first element of a character array, so don't be misled by VS2019's
    // so-called "the address of a string". [1]
	printf("%s", &an_array_of_char_strings[0]);

	printf("%d\n", sizeof (*a_pointer_to_an_array_of_char_strings) );
}

// References:
// 
// 1. https://chatgpt.com/c/69592b2a-5858-8322-82ff-015c1d8128c8
// 