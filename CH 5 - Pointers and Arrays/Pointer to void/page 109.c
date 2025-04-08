#include <stdio.h>

int main() {

	int i = 5;

	// a "pointer to void" is used to hold any type of pointer,
	void* p = &i;

	// but cannot be dereferenced itself.
	printf("%d\n", *p);


}