#include <stdio.h>

int main() {

	char*argv[] = { "arg", "argument vector" };

	char*pointer1 = argv;

	char**pointer2 = &pointer1;

	printf("Memory address of pointer1: %p \n", &pointer1);
}