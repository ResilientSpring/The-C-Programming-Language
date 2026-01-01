#include <stdio.h>

enum First { A = 3, B = A + 2 } deduce ;
enum Second { X = 1, Y = X << 3 } tenure ;

int main() {

	deduce = B;

	printf("%d\n", deduce << 1);
}