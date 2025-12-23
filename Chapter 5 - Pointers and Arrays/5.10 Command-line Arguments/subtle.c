#include <stdio.h>

/* echo command-line argument; 1st version */
int main(int argc, char* argv[]) {

	int i;

	for (i = 1; i < argc; i++)
		printf("%s%s", argv[i], (i < argv - 1) ? " " : "");

	printf("\n");

	return 0;

}