#include <stdio.h>

/* strlen: return length of string s */

int strlen(char* s) {

	char* p = s;

	while (*p != '\0')
	{
		p++;
	}

	return p - s;
}


int main() {

	printf("%d.\n", strlen("badge"));  // string constant

	int number_of_elements;

	number_of_elements = strlen("badge");

	printf("%d.\n", number_of_elements);

	char arr[100] = "badge";

	printf("%d.\n", strlen(arr));  // char array

	char* ptr = "delimiter.";

	printf("%d.\n", strlen(ptr)); // char* ptr

	char* p = "badge";

	printf("%d.\n", strlen(p)); //  char* ptr

}