/* Write a program that prints its input one word per line. */

#include <stdio.h>

int main() {

	char character;

	while ((character = getchar()) != EOF) {

		if (character == ' ' || character ==  '\t' || character == '\n') {

			printf("\n");
		}
		else {

			printf("%c", character);

		}
	}
}