#include <stdio.h>

main() {

	float fahr, celsius;

	int lower, upper, step;

	lower = 0;  
	upper = 300;
	step = 20; 

	fahr = lower;

	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);

		// %2f says that the number is to be "at least" two characters wide, 
		// but the number of characters that must follow the decimal point is not constrained. 
		printf("%2f %6.1f\n", fahr, celsius);

		fahr = fahr + step;  // fahr will be 3 character wide when reaching 100.
	}

}