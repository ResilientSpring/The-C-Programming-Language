#include <stdio.h>

int main() {

	// argv is an array of pointer to char.
	char*argv[] = { "program name", "argument vector" };

	// pointer1 is a pointer to a pointer to a char.
	char**pointer1 = argv;

	printf("%p\n", pointer1);

	printf("%p\n", &argv[0]);

	char devour[][123] = { {'a', 'b', 'i', 'l', 'i', 'f', 'y'} , };


	char * spot_on[10];

	char arrOfchar1[] = {'a', 'r', 'g', 'v', '\0'};

	char arrOfchar2[] = "argument vectors";

	char arrOfchar3[] = "Fidelity";

	spot_on[0] = arrOfchar1;

	spot_on[1] = arrOfchar3;

	spot_on[2] = arrOfchar2;


	//                 The type of &arrOfchar1 is char(*)[].
	if (&spot_on[0] == &arrOfchar1)
		printf("&spot_on[0] == &arrOfchar1   \n");
	else
		printf("&spot_on[0] != &arrOfchar1    \n");

	char * prerogative[] = { arrOfchar1, arrOfchar2, arrOfchar3 };



}