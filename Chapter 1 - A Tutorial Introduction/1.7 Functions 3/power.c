#include <stdio.h>

// Parameter names are optional in a function prototype.
int power(int, int);

/* test power function*/

int main() {

	printf("%d\n", power(10, 3));

	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {

	int i, p;

	p = 1;

	for (i = 1; i <= n; ++i)
		p = p * base;

	return p;

}