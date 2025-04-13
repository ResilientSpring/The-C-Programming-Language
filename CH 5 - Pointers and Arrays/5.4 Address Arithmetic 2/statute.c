#define ALLOCSIZE 10000  // size of available space

// Declared static and thus be invisible outside statue.c
static char   allocbuf[ALLOCSIZE];


// Define allocp to be a character pointer and initialize it to point to the beginning of allocbuf.
static char*  allocp = allocbuf;      

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