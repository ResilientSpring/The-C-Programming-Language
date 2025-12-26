#include <stdio.h>

int main() {

	printf("%d\n", daytab[0]);

}

static char daytab[2][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};