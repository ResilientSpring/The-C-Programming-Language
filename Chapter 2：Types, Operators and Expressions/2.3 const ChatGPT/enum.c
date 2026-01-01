#include <stdio.h>

enum First { A = 3, B = A + 2 } deduce ;
enum Second { X = 1, Y = X << 3 } tenure ;

int main() {

	deduce = B;

	printf("%d\n", deduce << 1);

	tenure = Y;

	printf("%d\n", tenure + 2);
}

// Reference: https://chatgpt.com/c/69562fb0-e7d4-8321-9c2f-8a40c7f5e1ff
