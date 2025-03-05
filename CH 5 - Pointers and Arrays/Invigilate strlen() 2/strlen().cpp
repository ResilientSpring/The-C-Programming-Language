#include <stdio.h>

/*
* strlen: return the length of string s
*/

int strlen(char* str) {

	int length;

	for (length = 0; *str != '\0'; str++)
		length++;


	return length;

}

int main() {

	char str[] = "invigilator";

	int length = strlen(str);

	printf("String's length is: %d.\n", length);

//	str = "Will he invigilate the invigilators?";

	char str2[] = "Will he invigilate the invigilators?";

	length = strlen(str2);

	printf("String's length is: %d.\n", length);

}