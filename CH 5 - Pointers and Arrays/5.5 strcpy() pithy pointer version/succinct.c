#include <stdio.h>

void string_copy(char* to, char* from);

int main() {

	char adept[50];

	string_copy(adept, "succinct");

	printf("%s\n", adept);

}

void string_copy(char* to, char* from) {

	while (*to++ = *from++);


}