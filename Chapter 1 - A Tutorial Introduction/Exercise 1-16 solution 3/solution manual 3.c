/* Revise the main routine of the longest-line program so it will correctly print the
length of arbitrary long input lines, and as much as possible of the text. */

// Adapted from solution manual 2.c in order to improve my understanding of the code.

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {

		// This prints the length of the input line (le n) and as many characters as 
		// it is possible to save in the array called line.
		printf("%d, %s", len, line);  

		if (len > max) {
			max = len;
			copy(longest, line);
		}

	}

	if (max > 0) /* there was a line */
		printf("%s", longest);
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	char c;
	int i;
	int j; // j keeps track of the number of characters copied to the string.

	j = 0;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim - 2) {

			s[j] = c; // line still in bounderies 

			++j;
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
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}