#include <stdio.h>

int main() {

	int i = 5;

	int* pointer_to_integer = &i;

	// a "pointer to void" is used to hold any type of pointer,
	void* p = &i;

	// but cannot be dereferenced itself.
	// printf("%d\n", *p);

	printf("%d\n", *pointer_to_integer);


}