// Write a program to print a histogram of the frequencies of different characters 
// in its input,

#include <stdio.h>

int main() {

	int uppercase[26] = { 0 };

	int lowercase[26] = { 0 };

	char character;

	while ((character = getchar()) != EOF) {

		if (character >= 65 && character <= 90) {

			++(uppercase[character - 65]);

		}
		else if (character >= 'a' && character <= 'z') {

			(lowercase[character - 'a'])++;

		}


	}

}