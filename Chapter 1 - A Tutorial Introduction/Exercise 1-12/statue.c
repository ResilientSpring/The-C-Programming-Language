/* Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN  1  // inside a word
#define OUT 0  // outside a word


int main() {

	char character;

	while ((character = getchar()) != EOF) {

		if (character == ' ' || character ==  '\t' || character == '\n') {

			printf("\n");
		}


		printf("%c", character);

	}


}