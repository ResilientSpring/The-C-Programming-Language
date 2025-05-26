#include <stdio.h>
#define ALL_INPUT_LINES_LONGER_THAN_EIGHTY 500

int main() {

	char* more_than_80_characters[ALL_INPUT_LINES_LONGER_THAN_EIGHTY];

	if (more_than_80_characters[0] == 0)

		printf("more_than_80_characters[0] is NULL\n");

	else

		printf("%s\n", more_than_80_characters[0]);

}