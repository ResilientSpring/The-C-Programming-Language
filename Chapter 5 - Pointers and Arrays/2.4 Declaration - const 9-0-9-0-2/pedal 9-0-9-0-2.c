#include <stdio.h>

// int string_length(const char parameter[]);
int string_length(const char(*parameter)[5]);
int string_length_2_(const char parameter[][5]);
int string_length_3_(const char parameter[][5]);
int string_length_4_(const char(*parameter)[][5]);

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

	//	printf("%d\n", string_length(argument));      printf("%d\n", string_length_2_(argument));
	printf("%d\n", string_length_3_(argument));   printf("%s\n", argument[1]);
	printf("%d\n", string_length_3_(&argument));
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


int string_length_3_(const char parameter[][5]) {  // char (*parameter)[5]

	char(*character)[5] = parameter;

	int counter = 0;

	                    //   size of a pointer to an array of 5 characters.
	int the_number_of_rows = sizeof(parameter) / sizeof(parameter[0][5]);

	int the_number_of_rows_2 = sizeof(*parameter) / sizeof(parameter[0][5]);

	for (int i = 0; i < the_number_of_rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (character[i][j] != 0) {

				counter++;

			}
		}
	}

	return counter;
}


int string_length_3_2_(const char(*parameter)[5]) {  // char parameter[][5]

	char(*character)[5] = parameter;

	int counter = 0;

	                      // size of a pointer to an array of 5 characters.
	int the_number_of_rows = sizeof(parameter) / sizeof(parameter[0][5]);

	int the_number_of_rows_2 = sizeof(*parameter) / sizeof(parameter[0][5]);

	for (int i = 0; i < the_number_of_rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (character[i][j] != 0) {

				counter++;

			}
		}
	}

	return counter;
}

int string_length_4_(const char(*parameter)[][5]) { 

	char(*character)[5] = parameter;

	int counter = 0;

	                      // size of a pointer to an array of 5 characters.
	int the_number_of_rows = sizeof(parameter) / sizeof(parameter[0][5]);

	int the_number_of_rows_2 = sizeof(*parameter) / sizeof(parameter[0][5]);

	for (int i = 0; i < the_number_of_rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (character[i][j] != 0) {

				counter++;

			}
		}
	}

	return counter;
}


#include <stdio.h>
#include <stdlib.h>

#define COLS 5

int* count_lengths(char(*arr)[COLS], int rows) {
	int* result = malloc(rows * sizeof(int));
	if (!result) {
		perror("malloc failed");
		exit(1);
	}

	for (int i = 0; i < rows; i++) {
		int len = 0;

		//  "When an array name is passed to a function, the function can at its convenience believe that 
		//  it has been handed either an array or a pointer, and manipulate it accordingly. 
		//  It can even use both notations if it seems appropriate and clear."[1]:114
		for (int j = 0; j < COLS && arr[i][j] != '\0'; j++) {
			len++;
		}
		result[i] = len;
	}
	return result;
}

int main2(void) {

	char argument[][5] = {
		{'f', 'o', 'a', 'm', '\0'},
		{'l', 'i', 'm', 'b', '\0'},
		{'l', 'i', 'm', 'p', '\0'},
		{'c', 'r', 'i', 'p', '\0'},
		"set",
		"Acer"
	};

	// C reserves space for 5 characters regardless of actual number of characters in each row.
	// because "the purpose of supplying the size of an array in a declaration is to set aside storage."
	// [1][2][3]
	int rows = sizeof(argument) / sizeof(argument[0]);

	int* lengths = count_lengths(argument, rows);

	printf("[");
	for (int i = 0; i < rows; i++) {
		printf("%d", lengths[i]);
		if (i < rows - 1) printf(", ");
	}
	printf("]\n");

	free(lengths);
	return 0;
}



// References:
// 
// 1. K&RII
// 2. https://chatgpt.com/c/69076ad5-da9c-8323-a59c-5f74c747945f
// 3. https://github.com/ResilientSpring/The-C-Programming-Language/blob/main/Chapter%201%20-%20A%20Tutorial%20Introduction/1.9%20Character%20Arrays%202/badge%202.c
// 