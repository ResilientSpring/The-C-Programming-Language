#include <stdio.h>

int main() {

	char * argv[1] = { "ambush" };

	++ * *argv;

	printf("%s\n", *argv);

}