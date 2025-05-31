#include <stdio.h>

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