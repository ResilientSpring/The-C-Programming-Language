#include <stdio.h>

int strcmp(char* s, char* t);

int main() {

	int margin = strcmp("allot", "stinky");

	if(margin > 0)
		printf


}

/* strcmp: return < 0 if s < t, 0 if s == t, >0 if s > t */
int strcmp(char* s, char* t) {

	int i;

	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;

	return s[i] - t[i];
}