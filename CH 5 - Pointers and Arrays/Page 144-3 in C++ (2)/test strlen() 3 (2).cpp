#include <stdio.h>

int strlen(const char* str) {

	int length;

	for (length = 0; *str != NULL; str++)
		length++;

	return length;
}


int main() {

	int length = strlen("accommodation.");  // string c constant.

	printf("The length of the string is %d.\n", length);

	char array[100] = "stipulate.";

	length = strlen(array);  // char array.

	printf("The length of the array of character excluding \\0 is %d.\n", length);

	length = strlen("");

	printf("The length of the string \"\" is %d.\n", length);

	const char* ptr;

	ptr = "backdrop"; // [Note 1]

	length = strlen(ptr);

	printf("The length of a pointer to characters is %d. \n", length);
}

// Note:
// 
// 1. When C++ compiler encounters a string constant, it generates a pointer to the string constant.[1]
//
//    Put in in another way, 
//    
//    a string constant generates a pointer (pointing) to itself. 
//    a string constant generates a pointer that points to itself.
//    a string constant generates a pointer to itself.
//    a string constant generates a pointer that contains the memory address of itself.
//    a string constant generates a pointer containing the memory address of itself.
//    a string constant generates a pointer that is pointing to itself.
//    a string constant generates a pointer that is holding itself
//

// References:
// 
// 1. <C++: a beginner's guide>, page 154.
// 