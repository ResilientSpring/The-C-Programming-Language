#include <stdio.h>

// Visual Studio 2019 is giving you a green squiggly warning because it is being overly strict 
// or conservative when checking for an exact signature match between the declaration and 
// the definition ¡X even when it shouldn't be.[1]
void swap2(char* C, char* D, size_t size);

int main() {



}

void swap2(char C[], char* D, size_t size) {

	char temporary;

	for (size_t i = 0; i < size; i++) {

		temporary = C[i];

		C[i] = *(D + i);

		*(D + i) = temporary;

	}

}

// References:
// 1. https://chatgpt.com/c/683b29e3-3038-8008-87f3-49b9909f7028