#include <stdio.h>

//  Since the number of days per month differs for leap years and non-leap years, 
//  it’s easier to separate them into two rows of a two-dimensional array.
char daytab[2][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};

// The implicit conversion of an array name to a pointer to the initial element of the array 
// is extensively used in function calls in C - style code.[2]
char (*a_pointer_to_a_one_dimensional_array_of_char)[13];       // syntax [3]

a_pointer_to_a_one_dimensional_array_of_char = daytab;

int main() {



}

// References:
// 
// 1. The C Programming Language
// 
// 2. The C++ Programming Language (4th edition)
// 
// 3. https://chatgpt.com/c/6861195b-bc90-8008-8b9c-d1c500d03caf
//