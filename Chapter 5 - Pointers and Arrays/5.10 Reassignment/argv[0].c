#include <stdio.h>

int main() {

	char *argv[] = { "program name", "Hello" };

	printf("%s\n", argv[0]);

	argv[0] = "World";

	printf("%s\n", argv[0]);






	char* comparison = "reassignment";

	printf("%s\n", comparison);




}