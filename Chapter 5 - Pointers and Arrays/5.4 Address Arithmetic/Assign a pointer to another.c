#include <stdio.h>

int main() {

	int a = 0;
	int b = 1; 
	int c = 2;

	a = b + c;

	printf("%d\n", a);

	char* d = "plaudit";

	char* e = d + a;

	printf("%s\n", e);

	char* f = d;

	printf("%s\n", f);

}