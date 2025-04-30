#include <stdio.h>

int main() {

	char* pmessage;

	pmessage = "now is the time";

	// %s in printf expects a pointer to the first character of a null-terminated string,
	// i.e., a char *. [1]
	printf("%s\n", pmessage);

	// %c expects a char, not a char *. [1]
	printf("%c\n", pmessage);

	printf("%c\n", *pmessage);

	printf("\t%c\n", pmessage[0]);

}

// Reference:
// 1. https://chatgpt.com/c/68124882-4218-8008-aa17-cdbc54e32542
//