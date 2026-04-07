#include <stdio.h>

/* echo command-line arguments*/
int main(int argc, char* argv[]) {

	while (--argc > 0)
		printf("%c%s", *(*++argv + 1), (argc > 1) ? " " : "");

	printf("\n");

	return 0;

}