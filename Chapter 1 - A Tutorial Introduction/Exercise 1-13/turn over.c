#include <stdio.h>



int main() {

	char character;
	int row = 1;

	while ((character = getchar()) != EOF)
	{
		if ((character != ' ') && (character != '\n') && (character != '\t')) {

			printf("%d: %c", row, '-');

		}
	}

}