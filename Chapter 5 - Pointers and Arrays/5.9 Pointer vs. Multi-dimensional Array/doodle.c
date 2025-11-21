#include <stdio.h>

int main() {

	int a[10][20];
	int *b[10];

	a[3][4] = 42;

	printf("%d\n", *(*(a + 3) + 4) );
}