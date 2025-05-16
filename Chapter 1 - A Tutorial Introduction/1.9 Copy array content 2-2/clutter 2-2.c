#include <stdio.h>

void Copy(char to[], char from[]);

int main() {

	char destination[50];

	Copy(destination, "clutter is uncountable.");

	printf("%s\n", destination);
}


void Copy(char* to, char* from) {

	int index = 0;

	while (to[index] = from[index]) {

		index++;

	}
}

