#include <stdio.h>

void strncpy(char* s, char* t, int n);

int main() {



}

//  copies at most n characters of t to s.
void strncpy(char* s, char* t, int n) {

	int i;

	for (i = 0; i <= n; i++) {

		*s = *t;

	}

}