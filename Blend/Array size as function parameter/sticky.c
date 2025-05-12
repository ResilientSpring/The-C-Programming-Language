#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000 /* maximum input line size */
#define MAX_ARRAY_SIZE           500

int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim);

int main() {

	// What will happen if I pass an array smaller than MAX_CHARACTERS_PER_LINE to getline_2_?

	char* sticky = "sticky";



}

int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim) {

	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {

		s[i] = c;

		++i;

	}

	s[i] = '\0';

	return i;

}