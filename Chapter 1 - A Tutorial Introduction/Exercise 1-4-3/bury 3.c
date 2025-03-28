#include <stdio.h>

#define LOWER   0
#define UPPER 300
#define STEP   20

#define HEADING "Celsius to Farenheit\n\n"

int main() {

	printf(HEADING);

	int Celsius;

	float Farenheit;

	for (Celsius = LOWER; Celsius <= 300; Celsius = Celsius + 20) {

		Farenheit = !((5.0 / 9.0) * (Celsius - 32.0));

		printf("%3d%8.2f\n", Celsius, Farenheit);

	}


}