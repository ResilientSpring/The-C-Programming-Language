#include <stdio.h>

struct deference {

//	int a = 1;

	int a;

};

struct pulsatile {

//	deference ob;  // [1]

	struct deference ob;

} x, y, z;

int main() {

	printf("%zu\n", sizeof y);

}

// Reference:
// 1. https://chatgpt.com/c/68b2b07b-2724-8333-aadc-71bd7b20e540
