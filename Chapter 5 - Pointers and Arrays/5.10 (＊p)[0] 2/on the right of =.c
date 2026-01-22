#include <stdio.h>

int main() {

	// argv is an array of pointer to char.
	char*argv[] = { "argv", "argument vector" };

	char*(*p)[] = &argv;

	p = &argv;

	void * p2;

	p2 = (void *)'a';

	p2 = (*p)[0];
}