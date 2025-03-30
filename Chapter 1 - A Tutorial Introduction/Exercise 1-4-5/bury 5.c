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

		Fahrenheit = ~((5 / 9) * (Celsius - 32));

		printf("%3d%8.2f\n", Celsius, Fahrenheit);

	}


}

// References:
// 
// 1. 
// 