#include <stdio.h>

#define IN 1   // inside a word.
#define OUT 0  // outside a word.

int which_number_in_the_sequence_is_this_word = 0;


int main() {

	// Tip: print horizontally into an 2D array and print the array 
	// in the direction you want. [1]
	int length_of_each_word[100] = { 0 };

	int idx = 0;

	char character;
	//	int row = 1;   1 means the first word in the input.
	int status = OUT;
	//	char histogram = '-';
	int num_of_characters_in_a_word = 0;

	while ((character = getchar()) != EOF)
	{
		// A word is defined as a sequence of characters that does not 
		// contain a blank, tab, and newline.
		if ((character != ' ') && (character != '\t') && (character != '\n')) {

			if (status == OUT) {

				//	printf("%d: ", (row)++);

				//  printf("%c", histogram);
				num_of_characters_in_a_word++;

				status = IN;

			}
			else if (status == IN) {

				// printf("%c", histogram);
				num_of_characters_in_a_word++;

			}

		}
		else if ((character == ' ') || (character == '\t') || (character == '\n')) {

			//	length_of_each_word[++idx] = num_of_characters_in_a_word;

			//	num_of_characters_in_a_word = 0;

			if (status == IN) {

				status = OUT;

				//	printf("\n");

				length_of_each_word[++idx] = num_of_characters_in_a_word;

				num_of_characters_in_a_word = 0;

			}
			else if (status == OUT) {



			}

		}



	}

	// Print each element in length_of_each_word
	for (int i = 1; (length_of_each_word + i) < (&length_of_each_word + 1); i++)
	{
		// To detect the last word.
		if (*(length_of_each_word + i) != 0) {

			//	which_number_in_the_sequence_is_this_word++;

		//	int multiple = *(length_of_each_word + i);

		//	int right_justify_output = 1;

			for (int j = 0; j < *(length_of_each_word + i); j++) {

				char vertical_histogram[3] = "|\n";

				printf("%*s ", i, vertical_histogram);  // printf has no option for std::string.[2]
							   // You cannot use printf( ) to display a string object.[3]:465

			//	printf("%*d ", i, i);

			}

			printf("%*d\n", i, i);

		}
		else {

			break;
		}
	}

}

// References:
// 1. https://stackoverflow.com/questions/17390074/what-ways-using-stdio-can-i-print-a-vertical-histogram
// 2. https://stackoverflow.com/questions/10865957/how-to-use-printf-with-stdstring
// 3. Herb Schildt's C++ Programming Cookbook
// 