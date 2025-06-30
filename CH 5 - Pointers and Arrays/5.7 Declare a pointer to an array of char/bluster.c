#include <stdio.h>

void f(int* arr);

int main() {

	int arr[10] = { 0, 2, 4, 6, 8, 9, 10 };

	printf("%d\n", f(arr));

}

void f(int* arr) {

	return *(arr + 2);

}