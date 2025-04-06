#include <stdio.h>

#define LOWER   0
#define UPPER 300
#define STEP   20

#define HEADING "Celsius to Fahrenheit\n\n"

int main() {

	printf(HEADING);

	int Celsius;

	float Fahrenheit;

	for (Celsius = LOWER; Celsius <= UPPER; Celsius = Celsius + STEP) {

		// ~x flips all bits in x, which is fine for integers but undefined for floats. [1]
		// Fahrenheit = ~((5.0 / 9.0) * (Celsius - 32.0));

		Fahrenheit = ~((5 / 9) * (Celsius - 32)); // [Note1]

		printf("%3d%8.2f\n", Celsius, Fahrenheit);

	}


}

// References:
// 
// 1. https://chatgpt.com/c/67e6983a-ca14-8008-8593-50c0e229f56a
// 2. https://copilot.microsoft.com/chats/i2Ae65Mu5eakrJqANa8mh
// 

// Notes:
// 
// 1. 5/9 is treated as integer division, which results in 0 because both operands are integers.[2]
// 
// 