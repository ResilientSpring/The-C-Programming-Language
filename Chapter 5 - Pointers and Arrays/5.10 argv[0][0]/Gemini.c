#include <stdio.h>

int main() {

	char * argv[] = { "argv", "argument vector" };

	printf("%c\n", argv[0]);

	printf("%s\n", argv[0]);

	// Grab 'v' from "argv".
	printf("%s\n", argv[1][1]);

}