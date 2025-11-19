#include <stdio.h>

int main() {

	char arr[][5] = { "peda", "l   " }; // each row must fit in 5 chars
	char(*parameter)[][5] = &arr;

	char arr2[][5] = { {'p','e','d','a','l'} };
	parameter[1] = &arr2;
}