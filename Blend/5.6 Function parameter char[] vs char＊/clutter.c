#include <stdio.h>

void swap(char , char B[]);

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


void swap2(char C[], char* D, size_t size) {

	// size_t is an alias for unsigned int, unsigned long, or unsigned long long, 
	// depending on the platform. So, i++ behaves as if an increment of integer.[1]
	for (size_t i = 0; i < size; i++) {



	}

}

// References:
// 1. https://chatgpt.com/c/683b1dae-8d78-8008-bdf0-72ce2c680e41