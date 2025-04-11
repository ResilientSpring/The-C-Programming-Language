#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {

	int word_count = 0;
	char character = '0';
	int status = OUT;

	while ((character = getchar()) != EOF) {

		if (character != ' ' && character != '\n' && character != '\t' && status == OUT)
		{
			++word_count;

			status = IN;
		}

	}


}