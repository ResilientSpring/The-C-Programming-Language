#include <stdio.h>

int main() {

//	4.7 Arrays of Strings from C++: A Beginner's Guide
	char numbers[10][80] = { 
		"Tom", "555-3322", 
		"Mary", "555-8976", 
		"Jon", "555-1037", 
		"Rachel", "555-1400",
		"Sherry", "555-8873" 
	};

//  5.8 Initialization of Pointer Arrays from The C Programming Language
	char* name[] = {

		"Illegal month",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};


	printf("%c\n", numbers[1][2]);

}