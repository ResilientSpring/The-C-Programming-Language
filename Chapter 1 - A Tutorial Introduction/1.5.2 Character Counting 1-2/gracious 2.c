#include <stdio.h>

int main() {

	int counter = 0;

	char c;

	while ((c = getchar()) != EOF) {

		counter++;

		putchar(c);

		printf("\n");

		c = getchar();

	}

	printf("%d\n", counter);

}