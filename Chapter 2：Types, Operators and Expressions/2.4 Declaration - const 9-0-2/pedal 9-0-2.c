#include <stdio.h>

// int string_length(const char parameter[]);
int string_length(const char(*parameter)[5]);
int string_length_2_(const char parameter[][5]);
int string_length_3_(char parameter[]);

int main() {

	//	char argument[][5] = { "foam", "limb", "limp", "cripple"};

	char argument[][5] = {

		{'f', 'o', 'a', 'm'},
		{'l', 'i', 'm', 'b'},
		{'l', 'i', 'm', 'p'},
		{'c', 'r', 'i', 'p'},
		"set",
		"Acer"
	};

	printf("%d\n", string_length(argument));      printf("%d\n", string_length_2_(argument));
	printf("%d\n", string_length_3_(argument));   printf("%s\n", argument[1]);
}

int string_length(const char(*parameter)[5]) {

	//	char* character = parameter;

	const char(*character)[] = parameter;

	int counter = 0;

	while (*(character) != '\0')
		counter++;

	return counter;
}


// Print out the length of each line in the two-dimensional array.
int string_length_2_(const char(*parameter)[5]) {

	//	char* character = parameter;

	const char(*character)[] = parameter;

	//	parameter[0] = 0;

	//	character[0] = '\0';

	int counter = 0;

	//	while ((**character++) != '\0')  // character++ means the next one-dimensional array.
	//		counter++;

	char* letter = 1;

	for (int i = 1; i <= 5; i++) {

		while ( (**character) != 0 && letter != 0) {

			counter++;

			letter = &(**character) + 1;

			while (*letter != '\0') {

				counter++;
				letter++;
			}

			break;

		}

	}

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
