#include <stdio.h>

#define IN 1     /*  inside a word */
#define OUT 0    /*  outside a word */

/*  count lines, words, and characters in input */
int main() {

	int character, number_of_new_line, number_of_word, number_of_character, state;

	state = OUT;
	number_of_new_line = number_of_word = number_of_character = 0;

	while ((character = getchar()) != EOF)
	{
		++number_of_character;

		if (character == '\n')
			++number_of_new_line;
		if (character == ' ' || character == '\n' || character == '\t')
			state = OUT;
		else if (state == OUT) {

			state = IN;
			++number_of_word;

		}

	}

	printf("%d  %d  %d\n", number_of_new_line, number_of_word, number_of_character);

}