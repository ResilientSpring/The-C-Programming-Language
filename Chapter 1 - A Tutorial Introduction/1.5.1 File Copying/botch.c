// Copy input to output one character at a time.

#include <stdio.h>

int main() {

	char c;

	c = getchar();  // read a chracter.

	while (c != EOF) // while (character is not end-of-file indicator)
	{  
		putchar(c);  // output the character just read.
	}

}