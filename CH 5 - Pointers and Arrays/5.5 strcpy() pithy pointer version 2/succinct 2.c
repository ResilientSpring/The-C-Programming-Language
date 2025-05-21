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

// References:
// 1. https://chatgpt.com/c/682db353-4404-8008-b15e-1e631bfe9b95