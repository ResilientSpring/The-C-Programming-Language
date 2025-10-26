#include <stdio.h>

// lower: convert c to lower case; ASCII only
int lower(int c) {

	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c; // If the character is not an upper case letter, lower() returns it unchanged.

}

int main() {

	printf("%c\n", lower('B'));

}