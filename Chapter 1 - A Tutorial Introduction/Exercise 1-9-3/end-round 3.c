#include <stdio.h>

enum boolean {false, true};

typedef enum boolean boolean;

// replace string of blanks with a single blank 
int main() {

	char character, previous_character;
//	enum boolean cumulative_blank;
	boolean consecutive_blank = 0;

	while ((character = getchar()) != EOF) {

		if (character == ' ' && consecutive_blank == false) {

			printf("%c", character);

			consecutive_blank = true;

		}
		else if (character == ' ' && consecutive_blank == true)
		{

			consecutive_blank = 0;

		}
		else {

			printf("%c", character);

		}

	}

}