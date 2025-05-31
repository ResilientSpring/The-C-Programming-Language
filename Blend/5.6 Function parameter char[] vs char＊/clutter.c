#include <stdio.h>

// void swap(char , char B[]);

void swap(char* A, char* B);

void swap2(char* , char D[], size_t );

int main() {

	

}


void swap(char A[], char* B) {

	int i;

	char temp;

	for (i = 0; i < sizeof(A) / sizeof(char); i++) {

		temp = A[i];

		A[i] = *(B + i);

		*(B + i) = temp;

	}

	

}

// char a[] = "Hello"; So its size, sizeof(a), is 6 bytes (5 characters + 1 null terminator).[1]
void swap2(char C[], char* D, size_t size) {

	char temporary;

	// size_t is an alias for unsigned int, unsigned long, or unsigned long long, 
	// depending on the platform. So, i++ behaves as if an increment of integer.[1]
	for (size_t i = 0; i < size; i++) {

		temporary = C[i];

		C[i] = *(D + i);

		*(D + i) = temporary;

	}

}

// References:
// 1. https://chatgpt.com/c/683b1dae-8d78-8008-bdf0-72ce2c680e41