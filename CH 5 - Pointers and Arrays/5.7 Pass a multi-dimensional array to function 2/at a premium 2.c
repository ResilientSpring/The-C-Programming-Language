#include <stdio.h>

char daytab[2][13] = {
	// We started the array daytab with a column of zero so that month numbers can run from the
	// natural 1 to 12 instead of 0 to 11.[1]
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};

void f(int twoD[2][13]) {
	printf("f(int daytab[2][13]) successfully got the 2-dimensional array called daytab.\n");
}

int f2(int twoD[][13]) {
	return 1;
}

char* f3(int(*twoD)[13]) {
	return "Get";
}

int main() {

	f(daytab);
	printf("%d\n", f2(daytab));
	printf("%s\n", f3(daytab));
}