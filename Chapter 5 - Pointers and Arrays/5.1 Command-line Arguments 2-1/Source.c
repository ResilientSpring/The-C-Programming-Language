#include <stdio.h>

int main() {

	const char *arr[] = { "argv", "argument vector" };
	const char *(*p)[] = &arr;   // p points to the *whole array* arr


}