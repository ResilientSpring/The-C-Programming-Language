#include <stdio.h>

#define LOWER   0
#define UPPER 300
#define STEP   20

#define HEADING "Celsius to Fahrenheit\n\n"

int main() {

	printf(HEADING);

	int Celsius;
	
	float Fahrenheit;

	for (Celsius = LOWER; Celsius <= 300; Celsius = Celsius + 20) {

		Fahrenheit = !((5.0 / 9.0) * (Celsius - 32.0));

		printf("%3d%5.2f\n", Celsius, Fahrenheit);

	}


}