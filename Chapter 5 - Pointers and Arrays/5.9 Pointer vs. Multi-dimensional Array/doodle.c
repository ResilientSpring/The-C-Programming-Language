#include <stdio.h>

int main() {

	int  a[10][20];
//	int* b[10];

	a[3][4] = 42;

	printf("%d\n", *(*(a + 3) + 4) );



	int  row0[20], row1[20], row2[20];
	int* b[10] = { row0, row1, row2 }; 

	for (int i = 3; i < 7; i++) 
		b[i] = malloc(20 * sizeof(int)); 
	
	b[7] = malloc(50 * sizeof(int));   // row 7: 50 ints
	b[8] = NULL;                       // row 8: no ints
	b[9] = malloc(10 * sizeof(int));   // row 9: 10 ints

	printf("%d\n", b[9][1]);
}


// Source: https://chatgpt.com/g/g-p-691dcce5908c81919567d2a41dfe787d/c/69203576-2004-8321-ba49-e6d1bff741ee
