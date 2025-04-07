#include <stdio.h>

#define IN 1     /*  inside a word */
#define OUT 0    /*  outside a word */

/*  count lines, words, and characters in input */
int main() {

	int c, number_of_new_line, number_of_word, number_of_character, state;

	state = OUT;
	number_of_new_line = number_of_word = number_of_character = 0;

	while ((c = getchar()) != EOF)
	{
		++number_of_character;

		if (c == '\n')
			++number_of_new_line;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {

			state = IN;
			++number_of_word;

		}

	}

	printf("%d  %d  %d\n", number_of_new_line, number_of_word, number_of_character);

}