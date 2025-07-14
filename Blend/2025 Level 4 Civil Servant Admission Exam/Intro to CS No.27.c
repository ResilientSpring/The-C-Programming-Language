#include <stdio.h>

int a = 1, b = 1, c = 0;

int f(int a, int b, int i) {

	if (i == 0)
		return a;
	else {
		c = a + b;
		i = i - 1;

		f(c, a, i);
	}

}

int main() {

	int i = 5;

	int result = f(a, b, i);

	printf("%d\n", result);
}