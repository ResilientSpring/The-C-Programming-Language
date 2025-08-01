#include <stdio.h>

int main() {

	int* an_array_of_pointers_to_integers[10];

	int an_array_of_13_integers[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

	int(*a_pointer_to_an_array_of_13_integers)[13] = &an_array_of_13_integers;

	an_array_of_pointers_to_integers[0] = a_pointer_to_an_array_of_13_integers;

	int(*another_pointer_to_an_array_of_integers)[13];

	int another_array_of_13_integers[13] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 };

	int third_array_of_13_integers[13] = { 144, 89, 55, 34, 21, 13, 8, 5, 3, 2, 1, 1, 0 };

	int* decay = third_array_of_13_integers;

	another_pointer_to_an_array_of_integers = &another_array_of_13_integers;

	// another_pointer_to_an_array_of_integers is a pointer, not an array, so it won't decay.
	// Need not precede another_pointer_to_an_array_of_integers with &.
	an_array_of_pointers_to_integers[1] = another_pointer_to_an_array_of_integers;

	int(*a_pointer_to_a_one_dimensional_array_of_integers)[13];

	a_pointer_to_a_one_dimensional_array_of_integers = &third_array_of_13_integers;

	int* another_array_of_pointers_to_integers[] = {
		a_pointer_to_a_one_dimensional_array_of_integers,
		a_pointer_to_an_array_of_13_integers
	};

	int (*an_array_of_pointers_to_an_array_of_integers)[][13];

//	int(*an_array_of_pointers_to_arrays_of_integers[]);

	int (*an_array_of_10_pointers_to_10_arrays_of_integers[10])[10];

	an_array_of_10_pointers_to_10_arrays_of_integers[0] = &an_array_of_13_integers;

	printf("%d\n", an_array_of_10_pointers_to_10_arrays_of_integers[0][0]);

	printf("%d\n", an_array_of_10_pointers_to_10_arrays_of_integers[0][0][0]);

	printf("%d\n", an_array_of_10_pointers_to_10_arrays_of_integers[0][0][1]);

	printf("%d\n", an_array_of_10_pointers_to_10_arrays_of_integers[0][0][2]);

	int (*an_array_of_9_pointers_to_9_arrays_of_integers[9])[9];
}
