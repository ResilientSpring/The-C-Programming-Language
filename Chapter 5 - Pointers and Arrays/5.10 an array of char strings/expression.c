#include <stdio.h>

int main() {

	char * an_array_of_char_strings[] = {"sloppy", "careless"};

	printf("%d bytes.\n", sizeof an_array_of_char_strings);       // size of the whole array (2 pointers)

	printf("%d bytes.\n", sizeof(an_array_of_char_strings + 0) );   // size of a pointer (char **)
}