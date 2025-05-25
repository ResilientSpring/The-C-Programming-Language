#include <stdio.h>

int strcmp(char* s, char* t);

int main() {

	int margin = strcmp("allot", "stinky");

	printf("%d\n", margin);


}

/* strcmp: return < 0 if s < t, 0 if s == t, >0 if s > t */
int strcmp(char* s, char* t) {

	int i;

	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')  // If s[i] == '\0', both strings have ended at the same time, 
			return 0;      // so they are equal, and the function returns 0.[1]

	return s[i] - t[i];
}

// Reference:
// 1. https://chatgpt.com/c/6831eee5-c3a0-8008-9f75-a0a88c41d053