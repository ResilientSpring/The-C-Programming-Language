#include <stdio.h>

int main() {

	int a[10][20];
	int *b[10];

	a[3][4] = 42;

	printf("%d\n", *(*(a + 3) + 4) );



	int row0[20], row1[20], row2[20];
	int *b[10] = { row0, row1, row2 };   // remaining pointers = NULL

	for (int i = 3; i < 10; i++) 
		b[i] = malloc(20 * sizeof(int)); // now all remaining pointers are initialized. 
	


}