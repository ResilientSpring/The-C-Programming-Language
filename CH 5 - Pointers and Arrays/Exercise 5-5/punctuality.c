#include <stdio.h>

void strncpy(char* s, char* t, int n);

int main() {

	char destination[100];

	strncpy(destination, "punctual", 9);

	printf("%s\n", destination);

}

//  copies at most n characters of t to s.
void strncpy(char* s, char* t, int n) {

	int i;

	for (i = 0; i <= n; i++) {

		*s = *t;

	}

}