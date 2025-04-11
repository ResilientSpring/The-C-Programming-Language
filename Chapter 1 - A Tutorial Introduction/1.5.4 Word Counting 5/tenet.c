#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {

	int word_count = 0;
	char character = '0';
	int status = OUT;

	while ((character = getchar()) != EOF) {

		// A word is defined as a sequence of characters that does not 
		// contain a blank, tab, or newline.
		if (character != ' ' && character != '\t' && character != '\n')
		{

			if (status == OUT) {

				++word_count;

				status = IN;

			}

		}

	}
}