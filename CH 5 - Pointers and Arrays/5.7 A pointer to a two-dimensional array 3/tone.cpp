#include <stdio.h>

int main() {

	int tone[3] = { 1, 2, 3 };

	int* a_pointer_to_an_integer;

	a_pointer_to_an_integer = tone;

	printf("%d\n", *tone);

	printf("%d\n", tone[0]);

	int(*a_pointer_to_a_one_dimensional_array_of_integers)[];

	a_pointer_to_a_one_dimensional_array_of_integers = &tone;

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_integers[0]);


	int tonic[2][3] = {

		{4, 5, 6},
		{7, 8, 9}

	};

	int(*a_pointer_to_a_two_dimensional_array_of_integers)[2][3];

	a_pointer_to_a_two_dimensional_array_of_integers = &tonic;

	printf("%d\n", a_pointer_to_a_two_dimensional_array_of_integers[1][2]);

	printf("%d\n", a_pointer_to_a_two_dimensional_array_of_integers[1][2][0]);

}

