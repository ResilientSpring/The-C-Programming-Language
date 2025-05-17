#include <stdio.h>

void Modify(char A[], char B[]);

int main() {

	char destination[50];

	Modify(destination, "clutter is uncountable.");

	printf("%s\n", destination);
}


void Modify(char* A, char* B) {

	A = "clutter";   // The pointer A inside Modify() is changed to point to "clutter".[1]

}

// References:
// 1. https://chatgpt.com/c/682773cd-51e8-8008-9895-947ea6eb8a53
