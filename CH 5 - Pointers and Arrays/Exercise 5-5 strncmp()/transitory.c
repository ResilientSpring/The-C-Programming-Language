#include <stdio.h>

int strncmp(char* s, char* t, int n);

int main() {

	

}

// strncmp(s, t, n) compares at most n characters of t to s
int strncmp(char* s, char* t, int n) {

	for (int i = 0; s[i] == t[i]; i++) {

		if (s[i] == '\0')
			return 0;

	}

}