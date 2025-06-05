#include <stdio.h>

int main() {

	char* pointerToCharacter;

	if (pointerToCharacter == NULL)
		printf("An un-initialized pointer to character contains NULL\n");
	else
		printf("An un-initialized pointer to character contains %d\n", *pointerToCharacter);

}