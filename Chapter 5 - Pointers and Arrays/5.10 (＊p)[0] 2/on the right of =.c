#include <stdio.h>

int main() {

	// argv is an array of pointer to char.
	char*argv[] = { "argv", "argument vector" };

	char*(*p)[] = &argv;

	p = &argv;

	void * p2;

	p2 = (void *)'a';

	p2 = (*p)[0];

	// expression1[expression2] == *(expression1 + expression2).
	// One of expression1 and expression2 must be of pointer type and the other be of integral type.
	// expression1 and expression2 are commutative, 
	// meaning expression1[expression2] == expression2[expression1], 
	// *(expression1 + expression2) == *(expression2 + expression1).

	// (*p)[0] == *( (*p) + 0  ).

	// p is holding the memory address of argv - the address of an array of pointer to char.
	// Dereferencing p yields the array object argv - an array of pointer to char.

	// According to K&RII A7.1 Pointer Generation, 
}