#include <stdio.h>

int main() {

	int counter = 0;
	char character;

	while ((character = getchar()) != EOF) {

		counter++;

		putchar(character);

		putchar("\n");

		character = getchar();

	}

}