#define _CRT_SECURE_NO_WARNINGS

// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

float Celsius_to_Fahrenheit(float Celsius);
float Fahrenheit_to_Celsius(float Fahrenheit);

int main() {

	float Celsius, Fahrenheit;

	printf("Enter a Celsius degree for conversion to Fahrenheit: ");
	
	if (!scanf("%f", &Celsius))
		printf("Error: Celsius should be a numeric value!\n");
	

	printf("\n%.2f degrees in Celsius is equivalent to %.2f degree in Fahrenheit.\n", Celsius, Celsius_to_Fahrenheit(Celsius));
	
	printf("Now, enter a Fahrenheit for conversion into a Celsius degree: ");

	if (!scanf("%f", &Fahrenheit))
		printf("Error: Fahrenheit should be a numeric value!\n");

	printf("\n%.2f degree in Fahrenheit is comparable to %.2f degree in Celsius. \n", Fahrenheit, Fahrenheit_to_Celsius(Fahrenheit));
}

float Celsius_to_Fahrenheit(float Celsius) {

	float Fahrenheit = Celsius * 9 / 5 + 32;

	return Fahrenheit;
}

float Fahrenheit_to_Celsius(float Fahrenheit) {

	float Celsius = (Fahrenheit - 32) * 5 / 9;

	return Celsius;
}

// Can printf print a double?
// 
// Yes, printf can print a double. 
// The format specifier %f is used to print both float and double values. 
// 
// When a float is passed to printf, it's automatically promoted to a double due to the function's 
// variadic nature. Therefore, using %f works correctly for double values.[1]

// References:
// 1. https://www.google.com/search?q=can+printf+print+a+double%3F
