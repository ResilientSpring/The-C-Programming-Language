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

	int number_of_elements;

	printf("%d.\n", strlen("badge"));

	number_of_elements = strlen("badge");

	printf("%d.\n", number_of_elements);

	char arr[100] = "badge";

	printf("%d.\n", strlen(arr));

}