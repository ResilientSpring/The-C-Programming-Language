#include <stdio.h>

int strlen(char* str) {

	int length;

	for (length = 0; *str != '\0'; str++)
		length++;

	return length;
}


int main() {

	int length = strlen("accomodation.");

	printf("The length of the string is %d.\n", length);

	length = strlen("Interface in C/C++.");

	printf("The length of the string is %d.\n ", length);
}
