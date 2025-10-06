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

int string_length_2_(const char parameter[]) {

	//	char* character = parameter;

	const char* character = parameter;

//	parameter[0] = 0;

//	character[0] = '\0';

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}

int string_length_3_(char parameter[]) {

	char* character = parameter;

//	const char* character = parameter;

	parameter[0] = 0;

	character[0] = '\0';

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}
