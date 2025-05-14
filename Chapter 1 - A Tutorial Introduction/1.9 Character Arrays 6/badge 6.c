#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000 /* maximum input line size */

int getline(char s[], int lim);
int getline_2_(char s[MAX_CHARACTERS_PER_LINE], int lim);
void copy(char to[], char from[]);

int main() {

	int length;   // current line length
	int lengthiest;   // maximum length seen so far
	char line[MAX_CHARACTERS_PER_LINE];  // current input line
	char longest[MAX_CHARACTERS_PER_LINE];  // longest line saved here.

	lengthiest = 0;

	while ((length = getline(line, MAX_CHARACTERS_PER_LINE)) > 0)
		if (length > lengthiest) {
			lengthiest = length;
			copy(longest, line);
		}

	if (lengthiest > 0)   // if there was a line
		printf("%s", longest);

	return 0;

}

/* getline: read a line into s, return length */
int getline(char s[], int limit) {

	int i;
	char c;

	// i is smaller than (limit - 1) indicates that the last two seats of s[] will be reserved.
	// if i is smaller or equal to (limit -1), then only the last seat of s[] will be reserved. 
	for (i = 0; i < (limit - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
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
