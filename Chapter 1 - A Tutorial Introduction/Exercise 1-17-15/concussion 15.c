//  Write a program to print all input lines that are longer than 20 characters.

#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000 /* maximum input line size */
#define ALL_INPUT_LINES_LONGER_THAN_TWENTY 500

int getline(char s[], int lim);
int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim);

char* copy_string(char* to, char* from);
void write_text_lines(char* an_array_of_pointers[]);
void write_text_lines2(char* an_array_of_pointers[]);
int string_length2(char* array_of_characters);
int string_length3(char* array_of_characters);
char* alloc_memory(int n_characters);

// Make it a global variable, so that write_text_line()'s for-loop will know the boundary.
int index = 0;

int main() {

	int length;   // current line length
	char current_input_line[MAX_CHARACTERS_PER_LINE];  // current input line

	char* more_than_20_characters[ALL_INPUT_LINES_LONGER_THAN_TWENTY] = { 0 };

	char* p;

	// Because getline() now returns 
	while ((length = getline(current_input_line, MAX_CHARACTERS_PER_LINE)) > 1) {

		printf("\n%d, %s\n", length, current_input_line);

		if (length > 20) {

			p = alloc_memory(length);

			more_than_20_characters[index++] = copy_string(p, current_input_line); // [3][4]

		}

	}

	if (more_than_20_characters[0] != NULL) {

		write_text_lines2(more_than_20_characters);

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

		++i;  // a line containing only a newline has length 1 plus 1, i.e., '\0'.

	}

	s[i] = '\0'; // getline puts the character ¡¬\0¡¬ (the null character, whose ASCII value is zero) 
				 // at the end of the array it is creating, 
				 // to mark the end of the string of characters.

	// Because i starts at 0, so i is plus 1 to include the seat for '\0'.
	return i + 1;

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


char* copy_string(char* to, char* from) {

	char* original = to;

	while (*to++ = *from++)
		;

	return original;
}

#define max_total_characters 50000

char buffer_of_char[max_total_characters];

char* p = buffer_of_char;

// When alloc is asked for n characters (i.e, an array of n characters.),
char* alloc_memory(int n_characters) {

	// This is my original solution.
	if (&buffer_of_char[max_total_characters] - 1 - p - n_characters >= 0) {

		p = p + n_characters;  // The next available position.

		return p - n_characters;  // The first position of the alloted array.
	}
	else
		return 0;  //  0 in pointer means "no address".   See also:[2]

}

void write_text_lines(char* an_array_of_pointers[]) {

	for (int i = 0; i < index; i++) {

		printf("%s\n", an_array_of_pointers[i]);

	}

}

void write_text_lines2(char* an_array_of_char_pointers[]) {

	for (int i = 0; i < index; i++) {

		printf("\n%d: ", string_length3(an_array_of_char_pointers[i]));

		printf("%s\n", an_array_of_char_pointers[i]);

	}

}

int string_length(char* array_of_characters) {

	int length = 0;
	char character;

	for (int i = 0; i != '\0'; i++) {

		character = array_of_characters[i];

	}

	while ((character = array_of_characters[length]) != '\0')
		length++;
}

int string_length2(char* array_of_characters) {

	int length = 0;

	while (array_of_characters[length++])
		;

	return length;
}

int string_length3(char* array_of_characters) {

	int length = 0;
	char character;

	while ((character = array_of_characters[length]) != '\0')
		length++;

	return length;
}

// References:
// 1. https://github.com/ResilientSpring/The-C-Programming-Language/blob/main/CH%205%20-%20Pointers%20and%20Arrays/5.4%20Address%20Arithmetic%205-6/non-static.c
// 2. https://chatgpt.com/c/684c490b-5e64-8008-9104-f11502a55156
// 3. https://chatgpt.com/c/685423d4-7e98-8008-8d71-a5e1af8bda31
// 4. https://chatgpt.com/c/6854384b-82c4-8008-b1c3-dd209a5c2424
