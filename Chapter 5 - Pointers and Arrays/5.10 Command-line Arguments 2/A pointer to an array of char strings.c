#include <stdio.h>

int main() {

	char* (*a_pointer_to_an_array_of_char_strings)[] = {"argv", "argument vector"};

	char* (*a_pointer_to_an_array_of_char_strings_2)[] = &{"argv", "argument vector"};


}

// Explanation: 
// https://chatgpt.com/c/69576de0-a44c-8322-b8dc-5237d574eb9e
