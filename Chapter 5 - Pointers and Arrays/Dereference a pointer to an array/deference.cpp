#include <stdio.h>

int main() {

	int arr[3] = { 10, 20, 30 };
	int(*p)[3] = &arr;

	printf("%d\n", *p);

}


