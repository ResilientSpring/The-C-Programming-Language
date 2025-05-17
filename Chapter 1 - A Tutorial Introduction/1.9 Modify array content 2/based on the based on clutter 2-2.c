#include <stdio.h>

void Modify(char A[], char B[]);

int main() {

	char destination[50] = {' '};

	Modify(destination, "clutter is uncountable.");

	printf("%s\n", destination);
}


void Modify(char* A, char* B) {

	A[0] = 'c';
	A[1] = 'l';
	A[2] = 'u';
	A[3] = 't';
	A[4] = 't';
	A[5] = 'e';
	A[6] = 'r';
}

