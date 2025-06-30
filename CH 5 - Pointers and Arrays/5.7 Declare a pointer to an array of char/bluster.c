#include <stdio.h>

void func(int* arr);

int main() {

	int arr[10] = { 0, 2, 4, 6, 8, 9, 10 };

	printf("%d\n", func(arr));

}

void func(int* arr) {

	return *(arr + 2);

}