#include <stdio.h>

// int string_length(const char parameter[]);
int string_length(const char(*parameter)[5]);
int string_length_2_(const char parameter[][5]);
int string_length_3_(char parameter[]);

int main() {

	//	char argument[][5] = { "foam", "limb", "limp", "cripple"};

	char argument[][5] = {

		{'f', 'o', 'a', 'm', '\0'},
		{'l', 'i', 'm', 'b', '\0'},
		{'l', 'i', 'm', 'p', '\0'},
		{'c', 'r', 'i', 'p', 0},
		"set",
		"Acer"
	};

	printf("%d\n", string_length(argument));      printf("%d\n", string_length_2_(argument));
	printf("%d\n", string_length_3_(argument));   printf("%s\n", argument[1]);
}

int string_length(const char(*parameter)[5]) {

	//	char* character = parameter;

	const char(*character)[] = parameter;

	int counter = 0;

	while (*(character) != '\0')
		counter++;

	return counter;
}


// Print out the length of each line in the two-dimensional array.
int string_length_2_(const char(*parameter)[5]) {

	//	char* character = parameter;

	const char(*character)[5] = parameter;

	//	parameter[0] = 0;

	//	character[0] = '\0';

	int counter = 0;

	//	while ((**character++) != '\0')  // character++ means the next one-dimensional array.
	//		counter++;

	char* letter = 1;

	for (int i = 1; i <= 5; i++) {

		while ((**character) != 0 && letter != 0) {

			counter++;

			letter = &(**character) + 1;

			while (*letter != '\0') {

				counter++;
				letter++;
			}

			break;

		}

		character++;
	}

	return counter;
}

//  "When an array name is passed to a function, the function can at its convenience believe that 
//  it has been handed either an array or a pointer, and manipulate it accordingly. 
//  It can even use both notations if it seems appropriate and clear."[1]:114
int string_length_3_(char parameter[][5]) {

	char* character = parameter;

	//	const char* character = parameter;

	parameter[0] = 0;

	character[0] = '\0';

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}


// References:
// 1. K&RII
