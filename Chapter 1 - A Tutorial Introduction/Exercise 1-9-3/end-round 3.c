#include <stdio.h>

enum boolean {false, true};

typedef enum boolean boolean;

// replace string of blanks with a single blank 
int main() {

	char character, previous_character;
//	enum boolean cumulative_blank;
	boolean cumulative_blank;

	while ((character = getchar()) != EOF) {

		if (character == ' ' && cumulative_blank < 2) {

			printf("%c", character);

			cumulative_blank++;

		}
		else if (character == ' ' && cumulative_blank == 2)
		{

			cumulative_blank = 0;

		}
		else {

			printf("%c", character);

		}

	}

}