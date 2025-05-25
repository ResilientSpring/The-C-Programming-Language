#include <stdio.h>

void strncpy(char* s, char* t, int n);
void strncpy2(char* s, char* t, int n);

int main() {

	char destination[100];

	strncpy2(destination, "punctual", 9);

	printf("%s\n", destination);

}

//  copies at most n characters of t to s.
void strncpy(char* s, char* t, int n) {

	int i;

	for (i = 0; i <= n; i++) {

		*(s + i) = *(t + i);

	}

}

//  copies at most n characters of t to s.
void strncpy2(char* s, char* t, int n) {

	int i;

	for (i = 1; i < n ; i++) {

		*(s + i) = *(t + i);

	}

	s[n] = '\0';

}