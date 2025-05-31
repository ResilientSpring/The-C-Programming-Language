#include <stdio.h>

void swap2(char , char D[], size_t );

int main() {

	/* You're absolutely right ¡X in Kernighan & Ritchie (K&R) and in standard C, 
	   parameter names are indeed optional in function prototypes. 
	   
	   So from a syntax and standards perspective, this is perfectly valid:
	   
	   void swap2(char, char D[], size_t);

	   However, this is not just a matter of parameter names being present or not ¡X 
	   the issue in your case is that the types do not match between the prototype and 
	   the definition.[1]
	   
	   */

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
// 1. https://chatgpt.com/c/683b2cee-7e4c-8008-9f0d-47ef0f41a937