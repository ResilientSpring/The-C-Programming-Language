#include <stdio.h>

int main() {


	// In C, a[i] == i[a]

	int a[5] = { 10, 20, 30, 40, 50 };

	printf("a[2] = %d\n", a[2]);
	printf("2[a] = %d\n", 2[a]);

}