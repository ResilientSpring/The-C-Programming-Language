#include <stdio.h>

int main() {

	char* pointerToCharacter;

	if (pointerToCharacter == NULL)
		printf("An un-initialized pointer to character contains NULL\n");
	else
		printf("An un-initialized pointer to character contains %d\n", *pointerToCharacter);

}

// An un-initialized pointer contains an arbitrary value, rather than 0. [1]

// Reference:
// 1. https://www.onlinegdb.com/online_c_compiler