#include <stdio.h>

int main() {

	char character = 'a';

	char*pointer1 = character;

	char**pointer2 = &pointer1;

	printf("Memory address of pointer1: %p \n", &pointer1);
	printf("Value of pointer1: %p \n", pointer1);
	printf("Memory address of pointer1: %p \n", &pointer1);
	printf("Value of pointer2: %p \n", pointer2);
	printf("Memory address of pointer2: %p \n", &pointer2);

}