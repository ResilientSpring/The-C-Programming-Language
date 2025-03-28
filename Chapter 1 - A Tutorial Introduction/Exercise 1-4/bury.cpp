#include <stdio.h>

#define LOWER   0
#define UPPER 300
#define STEP   20

int main() {

	int Celsius;
	
	float Farenheit;

	for (Celsius = LOWER; Celsius <= 300; Celsius = Celsius + 20) {

		Farenheit = !((5.0 / 9.0) * (Celsius - 32.0));



	}


}