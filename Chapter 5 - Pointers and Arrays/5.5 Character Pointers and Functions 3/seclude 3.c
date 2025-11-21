#include <stdio.h>

int main() {

	char amessage[] = "now is the time";

	char* pmessage = "I am a string";

	printf("%c\n", pmessage[0]);

	printf("%c\n", pmessage[5]);

	char* an_array_of_pointers[] = { "seclude", "repent", "quell", "markup"};

	printf("%s\n", an_array_of_pointers[2]);

	an_array_of_pointers[2] = pmessage;

	printf("%s\n", an_array_of_pointers[2]);

}