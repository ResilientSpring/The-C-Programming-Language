#include <stdio.h>

int main() {

	char * arr[2] = { "argv", "argument vector" };

	char*(*p)[2];

	p = &arr;

	printf("%s\n", (*p)[1]);

}
