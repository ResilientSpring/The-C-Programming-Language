#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("argv[2] = %s\n", argv[2]);

	printf("argv[0] = %c\n", *argv[0]);

	printf("argv[0] = %c\n", *++argv[0]);

	printf("argv[0] = %c\n", *argv[0]);

	printf("argv[0] = %s\n", argv[0]);

	printf("argv[2] = %s\n", argv[2]);

	return 0;

}
