#include <stdio.h>

enum boolean { false, true };

typedef enum boolean boolean;

// replace string of blanks with a single blank 
int main() {

	char character, previous_character;
	//	enum boolean cumulative_blank;
	boolean previous_char_is_blank = 0;

	while ((character = getchar()) != EOF) {

		if (character == ' ' && previous_char_is_blank == false) {

			printf("%c", character);

			previous_char_is_blank = true;

		}
		else if (character == ' ' && previous_char_is_blank == true)
		{

			// replacing two or more blanks by a single blank.
			printf("%c", ' ');

			previous_char_is_blank = 0;

		}
		else {

			printf("%c", character);

		}

	}

}