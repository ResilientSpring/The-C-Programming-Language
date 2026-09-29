#include <stdio.h>
#include <stdlib.h> /* for atof() */

#define MAXOP 100   // max size of operand or operator.
#define NUMBER '0'  // signals that a number was found.

int getop(char[]);
void push(double);
double pop(void);

/* reverse Polish calculator */
int main()
{

	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {

		switch (type)
		{
		case NUMBER:
			push(atof(s));
			break;

		case '+':
			push(pop() + pop());
			break;

		default:
			break;
		}

	}

}
