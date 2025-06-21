#include <stdio.h>

int string_length(char* array_of_characters) {

	int length = 0;

	while (array_of_characters[length])
		length++;

	return length;
}

int string_length2(char* array_of_characters) {

	int length = 0;

	while (array_of_characters[length++])
		;

	return length;
}

int string_length3(char* array_of_characters) {

	int length = 0;
	char character;

	while ((character = array_of_characters[length]) != '\0')
		length++;

	return length;
}

int main() {

	printf("%d\n", string_length2("tangle"));

	printf("%d\n", string_length3("tangle"));
}