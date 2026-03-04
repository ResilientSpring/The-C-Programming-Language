#include <stdio.h>

int main(void) {

	char * argv[] = { "argv", "argument vector" };


	char * * pointer1 = argv;

	printf("%c\n", *(argv + 1) );

}