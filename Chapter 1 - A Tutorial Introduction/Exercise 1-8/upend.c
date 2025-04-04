/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main() {

	int counter = 0;
	char character;

	// Recall that in C, any assignment such as c = getchar() is an expressin and has a value, 
	// which is the value of the left hand side after the assignment.
	while ((character = getchar()) != EOF) {

		if ((character == ' ') || (character == '\t') || (character == '\n'))
			++counter;

	}


}