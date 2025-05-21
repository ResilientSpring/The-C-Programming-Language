#include <stdio.h>

void string_copy(char* to, char* from);

int main() {

	char adept[50];

	string_copy(adept, "succinct");

	printf("%s\n", adept);

}

void string_copy(char* to, char* from) {

	// Use parentheses whenever using complex pointer expressions that combine dereferencing, 
	// increments, or assignments. This improves clarity and helps prevent subtle bugs.[1]
	while (*to++ = *from++);


}