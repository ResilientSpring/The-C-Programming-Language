#include <stdio.h>

int main() {


	printf("%d.\n", ~0);

	printf("%u.\n", ~0);    // [Note1]

	printf("%d.\n", ~5);

}

// Notes:
// 
// 1. Bits will be the same but the numerical values will be interpreted differently.


// References:
// 1. https://stackoverflow.com/questions/1036141/bitwise-not-operator-in-c-with-regards-to-little-endian-and-big-endian