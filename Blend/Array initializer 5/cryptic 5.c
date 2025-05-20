#include <stdio.h>

int main() {

	//  \\ for the backslash itself.[1]:23
	char cosy[6] = { 'z', '0', 0, '\0', '\\0' }; // [Note1][Note2]

	printf("1:%c\n", cosy[0]);  // 'z'

	printf("2:%d\n", cosy[0]);  // 122

	printf("3:%c\n", cosy[1]);

	printf("4:%d\n", cosy[1]);

	printf("5:%d\n", cosy[2]);

	printf("6:%c\n", cosy[2]);

	printf("7:%d\n", cosy[3]);

	printf("8:%c\n", cosy[3]);

	printf("9:%d\n", cosy[4]);

	printf("10:%c\n", cosy[4]);

	printf("11:%c\n", cosy[5]);

	printf("12:%d\n", cosy[5]);

}

// See also:
// https://github.com/ResilientSpring/Example/blob/master/Example/src/CharArithDemo.java

// Reference:
// 1. The C Programming Language, section 1.1
// 2. https://chatgpt.com/c/682b4943-93c8-8008-bded-424aa36d2f97
// 3. https://www.onlinegdb.com/online_c_compiler

// Notes:
// 1. '\\0' is not valid as a character literal (it has two characters), 
//     so this results in a warning or implementation-defined behavior.[2] 
// 
// 2. Copy the code in OnlineGDB, and you will see a more clear syntax color.[3]
//    Run  the code in OnlineGDB, and you will see a warning of overflow. [3]