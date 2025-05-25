#include <stdio.h>

void strncpy(char* s, char* t, int n);
void strncpy2(char* s, char* t, int n);
void strncpy3(char* s, char* t, int n);

int main() {

	char destination[100];

	strncpy2(destination, "punctual", 9);

	printf("%s\n", destination);

	char destination2[100];

	strncpy(destination2, "punctual", 9);
	
	printf("%s\n", destination2);

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

//  copies at most n characters of t to s.
void strncpy3(char* s, char* t, int n) {

	int i;

	for (i = 0; i < n - 1; i++) {

		*(s + i) = *(t + i);

	}

	s[n - 1] = '\0';

}