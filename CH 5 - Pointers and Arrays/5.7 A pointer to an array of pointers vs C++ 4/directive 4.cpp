#include <stdio.h>

char daytab[3][13] = {

	{'d', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', ' ', 'o', 'n', '\0'},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	"direction"
};


int main() {

	char (*a_pointer_to_a_one_dimensional_array_of_chars)[13];

	a_pointer_to_a_one_dimensional_array_of_chars = daytab[3];

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_chars[0][0]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_chars[0][1]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_chars[1][0]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_chars[1][11]);

}