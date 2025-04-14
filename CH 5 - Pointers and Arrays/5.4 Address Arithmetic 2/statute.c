#define ALLOCSIZE 10000  // size of available space

// Declared static and thus be invisible outside statute.c
static char   allocbuf[ALLOCSIZE];


// Define allocp to be a character pointer and initialize it to point to the beginning of allocbuf.
// Define allocp to be a pointer to characters.
// Define allocp to be a pointer to character.
// Define allocp to be a pointer that can hold the memory address of a character.
// Define allocp to be the type "pointer to character".
// Define allocp to be a variable of type char* which can hold the memory address of 
// a variable of type char.
static char*  allocp = allocbuf; // allocp will be used to point to the first non-occupied element in allocbuf.     

char* alloc(int n)  // return a pointer to n characters.
{

	if (allocbuf + ALLOCSIZE - allocp >= n) {   // it fits

		allocp += n;

		return allocp - n;  // old p

	}
	else
		return 0;  // not enough roon.
}

void afree(char* p)  // free storage pointed to by p
{

	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;

}