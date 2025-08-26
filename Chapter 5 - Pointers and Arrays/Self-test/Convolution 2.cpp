#include <stdio.h>

int main() {

	int tone[3] = { 1, 2, 3 };

	printf("%d\n", *tone);  // 1

	printf("%d\n", tone[0]);  // 1

	printf("%d\n", *(tone + 0));  // 1

	int* a_pointer_to_an_integer;

	a_pointer_to_an_integer = tone;

	printf("%d\n", *a_pointer_to_an_integer);  // 1

	printf("%d\n", a_pointer_to_an_integer[0]);

	printf("%d\n", a_pointer_to_an_integer[2]);

	printf("%d\n", *(a_pointer_to_an_integer + 2));

	int(*a_pointer_to_a_one_dimensional_array_of_three_integers)[3];

	a_pointer_to_a_one_dimensional_array_of_three_integers = &tone;

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_three_integers[0]);

	printf("%d\n", *(a_pointer_to_a_one_dimensional_array_of_three_integers + 0));

	printf("%d\n", (&tone + 0));

	printf("%d\n", *(&tone + 0));

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_three_integers[0][0]);

	printf("Section break: %d\n", *(*(a_pointer_to_a_one_dimensional_array_of_three_integers + 0) + 0));

	printf("%d\n", *a_pointer_to_a_one_dimensional_array_of_three_integers[0]);

	printf("%d\n", *(*(a_pointer_to_a_one_dimensional_array_of_three_integers + 0)));

	printf("%d\n", *(&tone)[0]);

	printf("%d\n", (*a_pointer_to_a_one_dimensional_array_of_three_integers)[0]);

	printf("%d\n", *a_pointer_to_a_one_dimensional_array_of_three_integers[0]);

	printf("%d\n", *((&tone + 0) + 1));

	printf("%d\n", *(&tone + 1));

	printf("%d\n", ((&tone + 0) + 1));

	printf("%d\n", (&tone + 1));

	printf("%p\n", *((&tone + 0) + 1));

	printf("%p\n", *(&tone + 1));

	printf("%p\n", ((&tone + 0) + 1));

	printf("Section breakII: %p\n", (&tone + 1));

	printf("%p\n", a_pointer_to_a_one_dimensional_array_of_three_integers + 1);

	printf("%p\n", a_pointer_to_a_one_dimensional_array_of_three_integers[1]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_three_integers[0][1]);

	printf("%d\n", (*(a_pointer_to_a_one_dimensional_array_of_three_integers + 0) + 1));

	printf("%p\n", (*(a_pointer_to_a_one_dimensional_array_of_three_integers + 0) + 1));

	printf("%p\n", &a_pointer_to_a_one_dimensional_array_of_three_integers[0][1]);

	printf("%p\n", &a_pointer_to_a_one_dimensional_array_of_three_integers[0]);

	printf("%p\n", &a_pointer_to_a_one_dimensional_array_of_three_integers);// pointer's own memory address.

	// printf("%p\n", &a_pointer_to_a_one_dimensional_array_of_three_integers[0]);
	printf("%p\n", &(*(a_pointer_to_a_one_dimensional_array_of_three_integers + 0)));
	printf("%p\n", a_pointer_to_a_one_dimensional_array_of_three_integers);

	int(**a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers)[3];

	a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers = &a_pointer_to_a_one_dimensional_array_of_three_integers; // [2]

	printf("%p\n", a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers);

	printf("%p\n", &a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers);

	int(***a_pointer_to_a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers)[3];

	a_pointer_to_a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers = &a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers;

	printf("%p\n", a_pointer_to_a_pointer_to_a_pointer_to_a_one_dimensional_array_of_three_integers);

	a_pointer_to_an_integer = tone + 1;

	printf("a_pointer_to_an_integer[0] is %d\n", a_pointer_to_an_integer[0]);

	int tonic[2][3] = {

		{4, 5, 6},
		{7, 8, 9}

	};

	int(*a_pointer_to_a_two_dimensional_array_of_integers)[2][3];

	a_pointer_to_a_two_dimensional_array_of_integers = &tonic;

	printf("%d\n", a_pointer_to_a_two_dimensional_array_of_integers[1]);

	printf("%d\n", *(a_pointer_to_a_two_dimensional_array_of_integers + 1));

	printf("%d\n", a_pointer_to_a_two_dimensional_array_of_integers[1][2]);

	printf("%d\n", *(*(a_pointer_to_a_two_dimensional_array_of_integers + 1) + 2));

	printf("%d\n", a_pointer_to_a_two_dimensional_array_of_integers[1][2][0]);

	printf("%p\n", *(a_pointer_to_a_two_dimensional_array_of_integers + 0) + 1);

	printf("%p\n", &a_pointer_to_a_two_dimensional_array_of_integers[1]);

	printf("%p\n", &tonic[1]);
}



// See also:
// 1. https://chatgpt.com/c/689337b4-3da8-832c-874d-a9dab38346ab
// 2. https://chatgpt.com/c/68a84721-b8fc-832d-ba23-dfcd78132205
