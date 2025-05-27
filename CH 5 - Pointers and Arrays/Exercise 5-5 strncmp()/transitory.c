#include <stdio.h>

int strncmp(char* s, char* t, int n);

int main() {

	if (strncmp("clutter", "mess around") == 0)
		printf("Same!\n");
	else
		printf("Different!\n");

}

// strncmp(s, t, n) compares at most n characters of t to s
int strncmp(char* s, char* t, int n) {

	int i;

	for (i = 0; (s[i] == t[i]) && (i <= n); i++) {

		if (s[i] == '\0')
			return 0;

	}

	return s[i] - t[i];

}