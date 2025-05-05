#include <stdio.h>

char amessage[] = "now is the time";

char* pmessage = "now is the time";

int main() {


	printf("%s\n", amessage);

	printf("%s\n", pmessage);

	pmessage = amessage;

	//	char* lastPtr = amessage + (sizeof(amessage) / sizeof(amessage[0])) - 1;
	char* lastPtr = amessage + (sizeof(amessage) / sizeof(amessage[0])) - 2; // bypass '\0'
//	pmessage = *lastPtr;
	pmessage = lastPtr;

	*pmessage = '!';

	printf("%s\n", amessage);

	printf("%s\n", pmessage);

	printf("\n\n");

	pmessage = "nuance.";

	printf("%s\n", amessage);
	printf("%s\n", pmessage);
	printf("%s\n", *pmessage);
	printf("%c\n", *pmessage);

	printf("\n");
}