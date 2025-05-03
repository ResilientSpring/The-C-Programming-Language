// Write a program to print a histogram of the frequencies of different characters 
// in its input,

#include <stdio.h>

int main() {

	int uppercase[26] = { 0 };

	int lowercase[26] = { 0 };

	int number_of_other_characters = 0;

	char character;

	while ((character = getchar()) != EOF) {

		if (character >= 65 && character <= 90) {

			++(uppercase[character - 65]);

		}
		else if (character >= 'a' && character <= 'z') {

			(lowercase[character - 'a'])++;

		}
		else

			number_of_other_characters++;

	}

	for (char i = 'A', int j = 0; i <= 'Z', j <= 26; i++, j++) {



	}

}