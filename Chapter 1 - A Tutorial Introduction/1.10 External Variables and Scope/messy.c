#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
int getline(void);
void copy(void);

/* print longest input line; specialized version */
int main() {

	int len;

	extern int max;
	extern char longest[];

	max = 0;
	while( (len = getline() ) > 0)
		if (len > max) {

			max = len;

			copy();

		}
	if (max > 0)  // there was a line.
		printf("%s", longest);
}