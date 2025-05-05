#include <stdio.h>

char amessage[] = "now is the time";

char* pmessage = "now is the time";

int main() {


	printf("%s\n", amessage);

	printf("%s\n", pmessage);

	pmessage = amessage;

	char* lastPtr = amessage + (sizeof(amessage) / sizeof(amessage[0])) - 1;
	pmessage = *lastPtr;


	

}