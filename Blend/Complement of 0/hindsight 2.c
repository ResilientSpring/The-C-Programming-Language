#include <stdio.h>

int main() {


	printf("%d.\n", ~0);

	printf("%u.\n", ~0);    // [Note1]

	printf("%d.\n", ~5);

}

// Notes:
// 
// 1. Bits will be the same but the numerical values will be interpreted differently.
// 2. If on the other hand you used the %u format specifier, it would print the value as unsigned. 
//    Depending on the size of int, this value will be:
//
//       65535 (16 bit)
//       4294967295 (32 bit)
//       18446744073709551615 (64 bit)
// 
//    


// References:
// 1. https://stackoverflow.com/questions/1036141/bitwise-not-operator-in-c-with-regards-to-little-endian-and-big-endian