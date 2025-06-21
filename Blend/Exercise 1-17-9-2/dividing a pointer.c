//  Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000 /* maximum input line size */
#define ALL_INPUT_LINES_LONGER_THAN_EIGHTY 500

int getline(char s[], int lim);
int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim);
void copy(char to[], char from[]);
char* copy_string(char* to, char* from);
void write_text_lines(char* an_array_of_pointers[]);
int string_length2(char* array_of_characters);
int string_length3(char* array_of_characters);

// Make it a global variable, so that write_text_line()'s for-loop will know the boundary.
int index = 0;

int main() {

	//	int index = 0;  
	int length;   // current line length
	int lengthiest = 0;   // maximum length seen so far
	char current_input_line[MAX_CHARACTERS_PER_LINE];  // current input line
	char longest_line[MAX_CHARACTERS_PER_LINE];  // longest line saved here.

	char* more_than_80_characters[ALL_INPUT_LINES_LONGER_THAN_EIGHTY] = { 0 };

	char* p;

	while ((length = getline(current_input_line, MAX_CHARACTERS_PER_LINE)) > 0) {

		printf("%d, %s", length, current_input_line);

		if (length > lengthiest) {

			lengthiest = length;
			copy(longest_line, current_input_line);
		}

		if (length > 80) {

			p = alloc_memory(length);

			// more_than_80_characters[index++] = current_input_line;

			// copy(more_than_80_characters[index++], current_input_line);

			// copy_string(p, current_input_line);

			// more_than_80_characters[index++] = p - length;

			more_than_80_characters[index++] = copy_string(p, current_input_line); // [3][4]

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