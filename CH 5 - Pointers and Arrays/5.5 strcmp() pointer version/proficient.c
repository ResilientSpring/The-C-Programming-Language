#include <stdio.h>

int strcmp(char* s, char* t);

int main() {

	int comfy = strcmp("stinky", "sticky");

	printf("%d\n", comfy);

	printf("%d\n", 'n' - 'c');
}

/* strcmp: return <0 if s < t, 0 if s == t, >0 if s > t */
int strcmp(char* s, char* t) {

	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;

	return *s - *t;
}