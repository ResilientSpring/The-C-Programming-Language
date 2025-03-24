#include <stdio.h>

int main() {

	char c;

	// In C, any assignment, such as c = getchar(), is an expression and has a value, which is 
	// the value of the left hand side after the assignment.
	while ((c = getchar()) != EOF)
		putchar(c);

}