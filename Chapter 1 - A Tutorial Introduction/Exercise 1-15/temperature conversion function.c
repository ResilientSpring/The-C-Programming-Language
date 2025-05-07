// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

float Celsius_to_Fahrenheit(float Celsius);

int main() {

	float Celsius;

	printf("Enter a Celsius degree for conversion to Fahrenheit: ");
	scanf("%f", &Celsius);

	printf("\n%f degrees in Celsius is equivalent to %f degree in Fahrenheit.", Celsius, Celsius_to_Fahrenheit(Celsius));
	

}

float Celsius_to_Fahrenheit(float Celsius) {

	float Fahrenheit = Celsius * 9 / 5 + 32;

	return Fahrenheit;
}