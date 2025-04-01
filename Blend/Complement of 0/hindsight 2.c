#include <stdio.h>

int main() {


	printf("%d.\n", ~0);

	printf("%u.\n", ~0);    // [Note1][Note2][Note3]

	printf("%d.\n", ~5);

}

// Notes:
// 
// 1. Bits will be the same but the numerical values will be interpreted differently.[1]
// 
// 2. If on the other hand you used the %u format specifier, it would print the value as unsigned. 
//    Depending on the size of int, this value will be:
//
//       65535 (16 bit)
//       4294967295 (32 bit)
//       18446744073709551615 (64 bit)
//       
//     [2]
// 
// 3.  unsigned int x = 0;
//     unsigned int y = ~x;
//     cout << y;
// 
//     output is 4294967295 but I expect 1, why is this so?
// 
//     
//        Perhaps you are thinking of a logical NOT. In C++ this is written as !x.
// 
//     [3]
//    


// References:
// 1. https://stackoverflow.com/questions/1036141/bitwise-not-operator-in-c-with-regards-to-little-endian-and-big-endian
// 2. https://stackoverflow.com/questions/39042893/bitwise-not-in-c
// 3. https://stackoverflow.com/questions/3462227/weird-output-for-bitwise-not