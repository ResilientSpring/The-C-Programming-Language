#include <stdio.h>

void func(char* arr);

int main() {

    char arr[10] = { 'a', 'c', 'f', 'h', 'k', 'l', 'v'};

	printf("%d\n", func(arr));

}

void func(char* arr) {

	return *(arr + 2);

}