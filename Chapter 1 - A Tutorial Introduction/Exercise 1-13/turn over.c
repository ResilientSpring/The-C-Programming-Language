#include <stdio.h>

#define IN 1  // Inside a word.
#define OUT 0 // Outside a word.


int main() {

	char character;
	int row = 1;
	int status = OUT;
	char histogram = '-';

	while ((character = getchar()) != EOF)
	{
		// A word is defined as a sequence of characters that does not 
        // contain a blank, tab, and newline.
		if ((character != ' ') && (character != '\t') && (character != '\n')) {

			if (status == OUT) {

				printf("%d: ", (row)++);

				printf("%c", histogram);

				status = IN;

			}
			else if (status == IN) {

				printf("%c", histogram);

			}

		}
		else if ((character == ' ') || (character == '\t') || (character == '\n')) {

			if (status == IN) {



			}

		}
	}

}