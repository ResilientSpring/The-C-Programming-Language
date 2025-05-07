#define _CRT_SECURE_NO_WARNINGS

// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

float Celsius_to_Fahrenheit(float Celsius);

int main() {

	float Celsius;

	printf("Enter a Celsius degree for conversion to Fahrenheit: ");
	
	if (!scanf("%f", &Celsius))
		printf("Error: Celsius should be a numeric value!\n");
	

	printf("\n%.2f degrees in Celsius is equivalent to %.2f degree in Fahrenheit.\n", Celsius, Celsius_to_Fahrenheit(Celsius));
	
	
}

float Celsius_to_Fahrenheit(float Celsius) {

	float Fahrenheit = Celsius * 9 / 5 + 32;

	return Fahrenheit;
}

float Fahrenheit_to_Celsius(float Fahrenheit) {

	float Celsius = (Fahrenheit - 32) * 5 / 9;

	return Celsius;
}