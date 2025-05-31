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



}