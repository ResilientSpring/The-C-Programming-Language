#include <stdio.h>

int strlen(const char* str) {

	int length;

	for (length = 0; *str != NULL; str++)
		length++;

	return length;
}


int main() {

	int length = strlen("accommodation.");  // string c constant.

	printf("The length of the string is %d.\n", length);

	char array[100] = "stipulate.";

	length = strlen(array);  // char array.

	printf("The length of the array of character excluding \\0 is %d.\n", length);

	length = strlen("");

	printf("The length of the string \"\" is %d.\n", length);

	char* ptr;


}
