#include <stdio.h>

int main() {

	int arr[3] = { 10, 20, 30 };
	int(*pa)[3] = &arr;

	printf("%d\n", (*pa)[1]); // object: the array `arr`

	int(*p)[3] = &arr;

	printf("%d\n", (*p)[1]);

	int(*pb)[3];

	pb = &arr;

	printf("%d\n", *pb);

	printf("%d\n", *(&arr));

	printf("%d\n", arr);

	printf("%d\n", *(&arr)[2]);

	printf("%d\n", (*(&arr))[2]);
}

// Reference: https://chatgpt.com/c/68ad93ce-74dc-8323-838c-3527c0ce6d36
