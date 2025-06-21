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

// Why I wrote this program: 
// 
// In [1], Visual Studio 2019 didn't underline in green 
// 
//    sizeof(more_than_80_characters[i]) 
//             from 
//    printf("%zu chars: %s\n", sizeof(more_than_80_characters[i]) / sizeof(char), more_than_80_characters[i]); to signal warning that "C6384: Dividing size of a pointer by another value.". 

// However, in [2], which is a substantially shortened version of [1], Visual Studio did underline 
// 
//          sizeof(more_than_80_characters[i]) 
//                     from 
//          printf("%zu chars: %s\n", sizeof(more_than_80_characters[i]) / sizeof(char), more_than_80_characters[i]); 
// 
// in green to signal "C6384: Dividing size of a pointer by another value.". 
// 
// Why? Does the number of lines in a C source code file affect Visual Studio 2019's ability 
// to issue warnings? [3]

// References:
// 1. https://github.com/ResilientSpring/The-C-Programming-Language/blob/main/Chapter%201%20-%20A%20Tutorial%20Introduction/Exercise%201-17-9/concussion%209.c
// 2. https://github.com/ResilientSpring/The-C-Programming-Language/blob/main/Blend/Exercise%201-17-9-2/dividing%20a%20pointer.c
// 3. https://chatgpt.com/c/6856955b-7e38-8008-afeb-5765a0c8e80d
