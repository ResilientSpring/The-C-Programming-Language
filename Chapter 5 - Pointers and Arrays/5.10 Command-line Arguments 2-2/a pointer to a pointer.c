#include <stdio.h>

int main() {

	char* (*a_pointer_to_an_array_of_char_strings)[] = { "argv", "argument vector" };

	char* (*a_pointer_to_an_array_of_char_strings_2)[] = &{ "argv", "argument vector" };


}