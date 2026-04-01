#include <stdio.h>

int main() {

	char * argv[1] = { "Hello" };

	printf("%s\n", *argv);

	printf("%s\n", ++ ** argv);

}