#include <stdio.h>

//  Since the number of days per month differs for leap years and non-leap years, 
//  it¡¦s easier to separate them into two rows of a two-dimensional array.
char daytab[2][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};


int main() {

	char(*a_pointer_to_a_one_dimensional_array_of_char)[13];      

	a_pointer_to_a_one_dimensional_array_of_char = daytab;

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_char[0][0]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_char[0][1]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_char[1][0]);

	printf("%d\n", a_pointer_to_a_one_dimensional_array_of_char[1][11]);

}