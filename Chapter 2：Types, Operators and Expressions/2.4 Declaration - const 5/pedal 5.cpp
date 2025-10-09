#include <stdio.h>

int string_length(const char parameter[]);
int string_length_2_(const char parameter[]);
int string_length_3_(char parameter[]);

int main() {
	char argument[] = "foam";
	printf("%d\n", string_length("pedal"));      printf("%d\n", string_length_2_("atrophy"));
	printf("%d\n", string_length_3_(argument));  printf("%s\n", argument);
}

int string_length(const char* parameter) {

	//	char* character = parameter;

	const char* character = parameter;

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}

int string_length_2_(const char* parameter) {

	//	char* character = parameter;

	const char* character = parameter;

	//	parameter[0] = 0;

	//	character[0] = '\0';

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}

int string_length_3_(char* parameter) {

	char* character = parameter;

	//	const char* character = parameter;

	parameter[0] = 0;

	character[0] = '\0';

	int counter = 0;

	while (*(character++) != '\0')
		counter++;

	return counter;
}
