#include <stdio.h>

/*
* strlen: return the length of string s
*/

int strlen(char* s) {

	int n;

	for (n = 0; *s != '\0'; s++)
		n++;


	return n;

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