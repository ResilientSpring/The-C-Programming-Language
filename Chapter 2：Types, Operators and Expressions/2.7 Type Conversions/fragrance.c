#include <stdio.h>

int main() {

	float f = 3.14;
	int i = 7;

	printf("%.3f\n", f + i); // The warning over f + i is VS' overreach.[1]

}

// Reference:
// 1. https://chatgpt.com/c/68fb41e3-29d8-8324-85db-742f352c5fbf
