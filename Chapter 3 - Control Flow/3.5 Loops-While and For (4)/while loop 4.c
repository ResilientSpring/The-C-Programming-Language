#include <stdio.h>

int main() {

	int z = 5;

	while (z = z - 1)
		printf("-");

	z = 5;  printf("\n");

	while (z--)
		printf("-");

	z = 5;  printf("\n");

	while (--z)
		printf("-");

}