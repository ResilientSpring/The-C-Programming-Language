#include <stdio.h>

int main() {

	// argv is an array of pointer to char.
	char*argv[] = { "program name", "argument vector" };

	// pointer1 is a pointer to a pointer to a char.
	char**pointer1 = argv;

	printf("%s\n", pointer1[2]);

	// pointer1[2] == *(pointer1 + 2)

}