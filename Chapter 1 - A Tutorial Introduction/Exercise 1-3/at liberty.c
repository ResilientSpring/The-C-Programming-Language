#include <stdio.h>

main() {

	int fahr, celsius;

	int lower, upper, step;

	char heading[] = "Temperature Conversion";

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("%25s", heading);

	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;

		printf("%d\t%d\n", fahr, celsius);


		fahr = fahr + step;
	}
}