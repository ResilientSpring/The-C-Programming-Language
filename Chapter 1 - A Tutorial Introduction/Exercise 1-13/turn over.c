#include <stdio.h>

#define IN 1;  // Inside a word.
#define OUT 0; // Outside a word.


int main() {

	char character;
	int row = 1;

	while ((character = getchar()) != EOF)
	{
		if ((character != ' ') && (character != '\n') && (character != '\t')) {

			printf("%d: %c", row, '-');

		}
	}

}