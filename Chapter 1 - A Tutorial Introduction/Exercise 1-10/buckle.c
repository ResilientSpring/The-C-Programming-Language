#include <stdio.h>

int main() {

	char character;
	char intermediate;

	while ((character = getchar()) != EOF) {

		if (character == '\t')
			printf("%s", "\\tab");
		else if (character == '\b')
			printf("%s", "\\b");
		else if (character == '\\')
			printf("%s", "\\");
		else
			printf("%c", character);

	}

}