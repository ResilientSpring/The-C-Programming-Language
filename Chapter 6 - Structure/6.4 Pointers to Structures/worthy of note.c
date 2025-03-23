#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

int getword(char*, int);
struct key *binsearch(char*, struct key*, int);

// count C keywords; pointer version
main() {

	char word[MAXWORD];
	
	struct key* p;



}

/* binsearch: find word in tab[0] ... tab[n-1] */
struct key* binsearch(char* word, struct key* tab, int n) {

	int cond;
	struct key* low = &tab[0];
	struct key* high = &tab[n];
	struct key* mid;

	while (low < high) {

		mid = low + (high - low) / 2;

		if((cond = strcmp(word, mid.)) < 0)

	}

}