#include <stdio.h>

int main() {

	int* an_array_of_pointers[10];

	int an_array_of_13_integers[13];

	int(*a_pointer_to_an_array_of_13_integers)[13];

	an_array_of_pointers[0] = a_pointer_to_an_array_of_13_integers;
}
