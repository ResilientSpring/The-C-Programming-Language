#include <stdio.h>

int main() {

	char cosy[5] = { 'z', '0', 0, '\0', '\\0'};

	printf("1:%c\n", cosy[0]);

	printf("2:%d\n", cosy[0]);

	printf("3:%c\n", cosy[1]);

	printf("4:%d\n", cosy[1]);

	printf("5:%d\n", cosy[2]);

	printf("6:%c\n", cosy[2]);

	printf("7:%d\n", cosy[3]);

	printf("8:%c\n", cosy[3]);

}