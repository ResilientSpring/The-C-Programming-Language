#include <stdio.h>

char daytab[2][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};

int main() {

	printf("%p\n", daytab[1]);

	printf("%p\n", &daytab[1]);

	printf("%d\n", *(daytab[1])  );

	printf("%p\n", (daytab + 1) );

	printf("%d\n", **(daytab + 1) );

	printf("%d\n", *(*(daytab + 1) + 2) );

	printf("%d\n", *(daytab) );

}