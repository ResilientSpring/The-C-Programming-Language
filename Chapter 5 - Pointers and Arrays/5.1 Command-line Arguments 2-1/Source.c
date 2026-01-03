#include <stdio.h>

int main() {

	char* arr[] = { "argv", "argument vector" };

	char* (*p)[] = &arr;   // p points to the *whole array* arr

	printf("%c\n", (*p)[0]);

	printf("%s\n", *p);
}