#include <stdio.h>

// replace string of blanks with a single blank 
int main() {

	char character, previous_character;
	int cumulative_blank = 0;

	while ((character = getchar()) != EOF) {

		if (character == ' ' && cumulative_blank <2) {

			printf("%c", character);

			cumulative_blank++;

		}
		else if(character == ' ' && cumulative_blank == 2)
		{

			cumulative_blank = 0;

		}

	}

}