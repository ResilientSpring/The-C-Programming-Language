#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000 /* maximum input line size */

int getline(char s[], int lim);
int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim);
void copy(char to[], char from[]);

int main() {

	int len;   // current line length
	int max;   // maximum length seen so far
	char line[MAX_CHARACTERS_PER_LINE];  // current input line
	char longest[MAX_CHARACTERS_PER_LINE];  // longest line saved here.

	max = 0;

	while ((len = getline_2_(line, MAX_CHARACTERS_PER_LINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}

	if (max > 0)   // there was a line
		printf("%s", longest);

	return 0;

}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {

	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {

		s[i] = c;

		++i;

	}

	s[i] = '\0'; // getline puts the character ¡¬\0¡¬ (the null character, whose value is zero) 
				 // at the end of the array it is creating, 
				 // to mark the end of the string of characters.

	return i;

}

//  The purpose of supplying the size of an array in a declaration is to set aside storage.
//  The length of the array s is not necessary in getline since its size is set in main.
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

// copy: copy "from" into "to"; assume "to" is big enough.
void copy(char to[], char from[]) {

	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;

}
