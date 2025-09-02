#include <stdio.h>

int main() {

	int arr[3] = { 10, 20, 30 };
	int(*pa)[3] = &arr;

	printf("%d\n", (*pa)[1]); // object: the array `arr`

	int(*p)[3] = &arr;

	printf("%d\n", *p);

}

// Reference: https://chatgpt.com/c/68ad93ce-74dc-8323-838c-3527c0ce6d36
