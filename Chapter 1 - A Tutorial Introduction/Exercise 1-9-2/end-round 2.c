#include <stdio.h>

// replace string of blanks with a single blank 
int main() {

	char character;
	int cumulative_blank = 0;

	while ((character = getchar()) != EOF) {

		if (character == ' ') {

			printf("%c", character);

			cumulative_blank++;

		}

	}

}