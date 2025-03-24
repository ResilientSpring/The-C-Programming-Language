#include <stdio.h>

main() {

	int fahr, celsius;

	int lower, upper, step;

	char heading[] = "Temperature Conversion";

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;



	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;

		printf("%25s\n%d\t%d\n", heading, fahr, celsius);


		fahr = fahr + step;
	}
}