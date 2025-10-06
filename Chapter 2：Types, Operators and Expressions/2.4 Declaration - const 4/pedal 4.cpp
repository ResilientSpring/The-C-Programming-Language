#include <stdio.h>

int main() {



}

int string_length(const char parameter[]) {

//	char* character = parameter;

	const char* character = parameter;

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}