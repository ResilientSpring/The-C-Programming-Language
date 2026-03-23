#include <stdio.h>

/* echo command-line arguments; 1st version */
int main(int argc, char* argv[]) {

	int i;

	while (--argc > 0)
//		printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
		printf("%s%s", *++argv, (i < argc - 1) ? " " : "");

	printf("\n");

	return 0;

}