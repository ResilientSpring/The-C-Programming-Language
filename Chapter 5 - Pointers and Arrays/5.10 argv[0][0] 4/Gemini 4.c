#include <stdio.h>

int main(void) {

	char * argv[] = { "argv", "argument vector" };


	printf("%c\n", *(argv + 1));

}