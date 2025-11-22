#include <stdio.h>

int row(char(*p)[80]);

int main() {

	//	4.7 Arrays of Strings from C++: A Beginner's Guide
	char numbers[][80] = {
		"Tom",
		"555-3322",
		"Mary",
		"555-8976",
		"Jon",
		"555-1037",
		"Rachel",
		"555-1400",
		"Sherry",
		"555-8873"
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


	printf("%c\n", numbers[3][4]);
	printf("%c\n", name[3][4]);

}


int row(char (*p)[80]) {

	int the_number_of_rows;

}

int row2(char** p) {

	int the_number_of_rows;

}