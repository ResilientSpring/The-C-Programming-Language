//  Write a loop equivalent to the for loop above without using && or ¦¦.

#include <stdio.h>

int main() {

	int i, lim = 10, c, s[100];

	for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;


}