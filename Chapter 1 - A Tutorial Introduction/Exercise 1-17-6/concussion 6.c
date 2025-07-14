//  Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000 /* maximum input line size */
#define ALL_INPUT_LINES_LONGER_THAN_EIGHTY 500

int getline(char s[], int lim);
int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim);
void copy(char to[], char from[]);

int main() {

	int index = 0;
	int length;   // current line length
	int lengthiest = 0;   // maximum length seen so far
	char current_input_line[MAX_CHARACTERS_PER_LINE];  // current input line
	char longest_line[MAX_CHARACTERS_PER_LINE];  // longest line saved here.

	char* more_than_80_characters[ALL_INPUT_LINES_LONGER_THAN_EIGHTY] = { 0 };

	while ((length = getline(current_input_line, MAX_CHARACTERS_PER_LINE)) > 0) {

		printf("%d, %s", length, current_input_line);

		if (length > lengthiest) {

			lengthiest = length;
			copy(longest_line, current_input_line);
		}

		if (length > 80) {


			// more_than_80_characters[index++] = current_input_line;

			copy(more_than_80_characters[index++], current_input_line);

		}

	}

	if (lengthiest > 0)   // if there was a line
		printf("%s", longest_line);

	if (more_than_80_characters[0] != NULL) {

		for (int i = 0; i < ALL_INPUT_LINES_LONGER_THAN_EIGHTY; i++) {

			if (more_than_80_characters[i] != NULL) {

				printf("%zu chars: %s\n", sizeof(more_than_80_characters[i]) / sizeof(char), more_than_80_characters[i]);

			}
			else if (more_than_80_characters[i] == NULL) {

				printf("END\n");

				break;

			}

		}

	}

	return 0;

}

/* getline: read a line into s, return length */
int getline(char s[], int limit) {

	int i;
	char c;

	// should be (i < limit - 2). [1] 
	for (i = 0; i < (limit - 2) && (c = getchar()) != EOF && (c != '\n'); ++i)
		s[i] = c;


	if (c == '\n') {

		s[i] = c;

		++i;  // a line containing only a newline has length 1.

	}

	s[i] = '\0'; // getline puts the character ¡¬\0¡¬ (the null character, whose ASCII value is zero) 
				 // at the end of the array it is creating, 
				 // to mark the end of the string of characters.

	return i;

}

//  The purpose of supplying the size of an array in a declaration is to set aside storage.
//  The length of the array s is not necessary in getline since its size is set in main.
int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim) {

	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {

		s[i] = c;

		++i;

	}

	s[i] = '\0';

	return i;

}

// copy: copy "from" into "to"; assume "to" is big enough.
void copy(char to[], char from[]) {

	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;

}

#define max_total_characters 50000

char buffer_of_char[max_total_characters];

char* p = buffer_of_char;

// When alloc is asked for n characters (i.e, an array of n characters.),
char* alloc_memory(int n_characters) {  // parameter is logically of int type.

	// max_total_characters is not (the address of) the last element of 
	// buffer_of_char[max_total_characters].
//	if (max_total_characters - p - n_characters > 0) {

		// An arbitrary integer being subtracted from an memory address is undefined/meaningless.

		// In C, address minus address yields the number of elements 
		// between the two memory address.[1]
//	}


//	if (buffer_of_char + max_total_characters - p >= n_characters) {

	   // This is the solution adapted from [1].

//	}

	// This is my original solution.
	if (&buffer_of_char[max_total_characters] - 1 - p - n_characters >= 0) {

		p = p + n_characters;  // The next available position.

		return p - n_characters;  // The first position of the alloted array.
	}
	else
		return 0;  //  0 in pointer means "no address".   See also:[2]

}

// References:
// 1. https://github.com/ResilientSpring/The-C-Programming-Language/blob/main/CH%205%20-%20Pointers%20and%20Arrays/5.4%20Address%20Arithmetic%205-6/non-static.c
// 2. https://chatgpt.com/c/684c490b-5e64-8008-9104-f11502a55156
