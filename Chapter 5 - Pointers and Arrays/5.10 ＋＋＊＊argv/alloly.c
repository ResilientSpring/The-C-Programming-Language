#include <stdio.h>

int main() {

	char * argv[1] = { "Hello" };

	printf("%c\n", ++ ** argv);

}