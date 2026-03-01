#include <stdio.h>

int main(void) {

	char * argv[] = { "argv", "argument vector" };


	char * * p1;

	p1 = argv;






	printf("%s\n", *(p1 + 1)  );

	printf("%s\n", *(p1 + 0)  );
}