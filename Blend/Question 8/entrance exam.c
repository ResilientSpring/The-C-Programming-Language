#include <stdio.h>

void hexadecimal_to_decimal(int hex);


int main() {

	int hexadecimal = 0x3f;

	hexadecimal_to_decimal(hexadecimal);

}


void hexadecimal_to_decimal(int hex) {

	printf("The hexadecimal expressed as a decimal is %d.\n", hex);

}