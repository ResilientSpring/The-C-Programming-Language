#include <stdio.h>

#define IN 1   // inside a word.
#define OUT 0  // outside a word.


int main() {

	// Tip: print horizontally into an array and print the array 
	// in the direction you want. [1]
	int freq_of_each_word[100] = { 0 };

	int idx = 0;

	char character;
	int row = 1;  // 1 means the first word in the input.
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

		//	freq_of_each_word[++idx] = num_of_characters_in_a_word;

		//	num_of_characters_in_a_word = 0;

			if (status == IN) {

				status = OUT;

			//	printf("\n");

				freq_of_each_word[++idx] = num_of_characters_in_a_word;

				num_of_characters_in_a_word = 0;

			}
			else if (status == OUT) {



			}

		}

		for (int i = 1; i < *(freq_of_each_word + i); i++)
		{

		}

	}

}

// References:
// 1. https://stackoverflow.com/questions/17390074/what-ways-using-stdio-can-i-print-a-vertical-histogram