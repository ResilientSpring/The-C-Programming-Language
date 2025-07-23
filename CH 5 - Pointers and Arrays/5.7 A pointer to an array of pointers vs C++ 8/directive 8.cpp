#include <stdio.h>

char daytab[3][13] = {

	{'d', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', ' ', 'o', 'n', '\0'},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	"direction"
};


int main() {

	char (*directive)[13] = &daytab[2];

	char* stipulate = daytab[2];          // printf("hello, world\n");
	                                      // printf receives a pointer to the beginning of the character array.
	                                      // That is, a string constant is accessed 
	                                      // by a pointer to its first element. (K&RII:118)
}