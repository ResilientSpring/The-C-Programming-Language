#include <stdio.h>

char func(char* arr);

int main() {

	char arr[10] = { 'a', 'c', 'f', 'h', 'k', 'l', 'v' };

	printf("%d\n", func(arr));

}

char func(char* arr) {

	return *(arr + 2);

}