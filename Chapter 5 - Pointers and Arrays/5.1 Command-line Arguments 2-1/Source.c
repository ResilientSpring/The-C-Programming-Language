#include <stdio.h>

int main() {

	char* arr[] = { "argv", "argument vector" };

	char* (*p)[] = &arr;   // p points to the *whole array* arr

	printf("%c\n", (*p)[0]);

	printf("%s\n", *p);

	printf("%p\n", *p);

	printf("%p\n", **p);

	printf("%p\n", &arr[0]);

	printf("%s\n", arr[0]);

	printf("%s\n", (*p)[0]);

	printf("%c\n", arr[0][0]);

	printf("%c\n", (*p)[0]);
}