#include <stdio.h>

int main() {

	int* an_array_of_pointers[10];

	int an_array_of_13_integers[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

	int(*a_pointer_to_an_array_of_13_integers)[13] = &an_array_of_13_integers;

	an_array_of_pointers[0] = a_pointer_to_an_array_of_13_integers;

	int(* another_pointer_to_an_array_of_integers)[13];

	int another_array_of_13_integers[13] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};


}
