#include <stdio.h>

int main() {

	long nc = 0;

	while (getchar() != EOF)
		++nc;

	printf("Character count in decimal is %d and in hexadecimal is %lx.\n", nc, nc);
}