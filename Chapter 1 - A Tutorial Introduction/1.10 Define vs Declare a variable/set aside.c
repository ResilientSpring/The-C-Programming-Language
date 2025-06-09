#include <stdio.h>

int main() {

	//  The variable must also be declared in each function that wants to access it; 
	//  this states the type of the variable.
	extern char longest[];

	longest[0] = 'c';

	printf("%c\n", longest[0]);

}

#define MAXLINE 1000

char longest[MAXLINE];