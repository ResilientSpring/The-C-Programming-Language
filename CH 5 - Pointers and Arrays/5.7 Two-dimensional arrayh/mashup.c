#include <stdio.h>

//  Since the number of days per month differs for leap years and non-leap years, 
//  it’s easier to separate them into two rows of a two-dimensional array.
char daytab[2][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};

// The implicit conversion of an array name to a pointer to the initial element of the array 
// is extensively used in function calls in C - style code.

int main() {



}

// References:
// 
// 1. The C Programming Language
// 
// 
//