#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
static char*  allocp = allocbuf;
// allocp will be used to point to the first non-occupied element in allocbuf.     

// When alloc is asked for n characters (i.e, an array of n characters.),
char* alloc(int n)
{
	// it checks to see if there is enough room left in allocbuf
	if (allocbuf + ALLOCSIZE - allocp >= n) { // An address minus an address is valid, see [1].
		// In C, address minus address yields the number of elements between the two memory address, 
		// not the byte difference.[2] [Note1]

		// increment allocp by n to point to the next foremost non-occupied element in allocbuf.
		allocp += n;

		return allocp - n;    // return a pointer to n characters.
		                      // return a pointer to a block of storage with a capacity of n elements of characters.
	}
	else
		return 0;  // If there is no room, alloc returns zero.
}

// afree(p) merely sets allocp to p if p is inside allocbuf.
void afree(char* p)
{

	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;

}

int main() {

	char* a_block_of_memory;

	a_block_of_memory = alloc(9000);

	if (a_block_of_memory != 0) {

		a_block_of_memory[0] = 'a';
		*(a_block_of_memory + 1) = 'b';

		a_block_of_memory[9000] = 'z';

		a_block_of_memory[9001] = '!';

	}
	else {

		printf("Memory didn't have enough space for your request for an array of character that \n");
		printf("can hold upto n elements.");

	}

	for (int i = 0; i < sizeof(a_block_of_memory) / sizeof(char); i++) {

		if (a_block_of_memory[i] != NULL) {

			printf("a_block_of_memory[%d] is %c.\n", i, a_block_of_memory[i]);

		}

	}


	printf("\nEnter how many characters do you want the returned array to hold? \n");

	int size;

	if ((scanf("%d", &size)) == 1) {

		char* second_block_of_memory = alloc(size);

		if (second_block_of_memory != 0) {

			printf("%s", "Operation succeeded.\n");

		}
		else if (second_block_of_memory == NULL) {

			printf("%s", "We don't have enough space for your request for an array of character ");
			printf("that can hold %d elements/characters.\n", size);

		}

	}
	else if ((scanf("%d", &size)) == 0) {

		printf("What you entered was not a number. This program is closing now.\n");

	}


	printf("\na_block_of_memory[9000] = %c.\n", a_block_of_memory[9000]);

	printf("\na_block_of_memory[9001] = %c.\n", a_block_of_memory[9001]);
}

// Notes:
// 
// 1. It is also the case when it comes to pointer minus pointer as 
//    "if p and q point to elements of the same array, and p < q, then q-p+1 is 
//     the number of elements from p to q inclusive." [3]

// References:
// 1. https://github.com/ResilientSpring/C-Plus-Plus_homogeneous/blob/master/Assortment/Address%20Arithmetic%20-%20Address%20minus%20Address/statute.c
// 2. https://chatgpt.com/c/67fe1ea4-0204-8008-a12d-e6e6de00d2f4
// 3. <The C Programming Language>:117