#include <stdio.h>

int main() {

	char* arr[] = { "argv", "argument vector" };

	char* (*p)[] = &arr;   // p points to the *whole array* arr

	printf("%c\n", (*p)[0]);

	printf("%s\n", *p);

	printf("%p\n", *p);

	printf("%p\n", **p);

	printf("%c\n", ***p);

	printf("%p\n", &arr[0]);

	printf("%s\n", arr[0]);

	printf("%s\n", (*p)[0]);

	printf("%c\n", arr[0][0]);

	printf("%c\n", (*p)[0]);
}

// References:
// 1. https://chatgpt.com/c/69552691-0368-8321-929b-f6c03a2987c1
// 2. https://chatgpt.com/c/6958e546-f038-8320-bfe0-466a97215356
// 3. https://chatgpt.com/c/WEB:19c933ef-3d0b-4eec-8cf9-cfb7a61780d9
