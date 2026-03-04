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

	// According to K&RII A7.1 Pointer Generation, this array object is decayed 
	// to a pointer to the first element of that array.

	// argv is an array of pointer to char. So, each element of the array is a pointer to a char.

	// So, (*p) is a pointer to a pointer to a char.

	// ( a pointer to a pointer to a char + 0 ) is still a pointer to a pointer to char.

	// Dereferencing "a pointer to a pointer to a char" yields the value of the pointer to a char.

	// The value of "the pointer to a char" is the memory address of the char.   

	// *( a pointer to a pointer to a char ) yields the memory address of the char. 

}