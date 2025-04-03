#include <stdio.h>

/* count characters in input; 1st version */
int main() {

	long nc;

	nc = 0;

	while (getchar() != EOF)
		++nc;

	printf("%ld\n", nc);
}

// Replies to my confusion:
// https://chatgpt.com/c/67e5275d-d400-8008-a247-f22a44e986a1