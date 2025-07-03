#include <stdio.h>

int main() {

	// Declare a pointer, called ptr_name, to an array of 10 characters.
	char (*ptr_name)[10];
	// It is a declaration of a pointer, not an array; thus, need not consider array name.

	char arr[10] = "bluster.";

	ptr_name = arr;
}