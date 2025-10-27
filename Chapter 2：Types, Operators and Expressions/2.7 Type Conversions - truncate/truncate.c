#include <stdio.h>

int main() {

	int i = 5;
	char c = 72;

	i = c;

	printf("%d\n", i);

	i = 5;

	c = i;

	printf("%d\n", c);
}