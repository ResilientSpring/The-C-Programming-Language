#define BUFSIZE 100
#define SIZE    5

#include <stdio.h>
#include <ctype.h>

char buf[BUFSIZE];  // buffer for ungetch
int bufp = 0;  // next free position in buf

// get a (possibly pushed back) character
int getch(void) {

	return (bufp > 0) ? buf[--bufp] : getchar();

}

void ungetch(int c) {  // push character back on input

	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;

}

/* getint: get next integer from input into *pn */
int getint(int* pn) {

	int c, sign;

	while (isspace(c = getch()))  /* skip white space */
		;

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {

		ungetch(c);   /*  it's not a number */

		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-')
		c = getch();

	for ( *pn = 0; isdigit(c) ; c = getch())
	{
		*pn = 10 * *pn + (c - '0');
	}

	*pn *= sign;

	if (c != EOF)
		ungetch(c);

	return c;

}


int main() {

	int n;
	int arr[SIZE];


	// The following loop fills an array with integers by calls to getint.
	for (n = 0; n < SIZE && getint(&arr[n]) != EOF; n++)
		;


	for (int i = 0; i < sizeof(arr) / sizeof(int) ; i++)
	{
		printf("%d\n", arr[i]);
	}

}