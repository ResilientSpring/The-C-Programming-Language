/* Revise the main routine of the longest-line program so it will correctly print the
length of arbitrary long input lines, and as much as possible of the text. */

// Adapted from solution manual 4.c in order to improve my understanding of the code.

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int length; /* current line length */
	int lengthiest = 0; /* maximum length seen so far */
	char current_input_line[MAXLINE]; /* current input line */
	char longest_line[MAXLINE]; /* longest line saved here */

	while ((length = getline(current_input_line, MAXLINE)) > 0) {

		// This prints the length of the input line (len) and as many characters as 
		// it is possible to save in the array called current_input_line. 
		printf("%d, %s", length, current_input_line);

		if (length > lengthiest) {
			lengthiest = length;
			copy(longest_line, current_input_line);
		}

	}

	if (lengthiest > 0) /* there was a line */
		printf("%s", longest_line);
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	char c;

	// The length of the string is returned in i.
	int i;
	int j; // j keeps track of the number of characters copied to the string.;

	for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i, ++j)
		if (i < lim - 2) {

			s[j] = c; // line still in bounderies 

		}

	if (c == '\n') {
		s[j] = c;

		++j;
		++i;
	}

	s[j] = '\0';

	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
