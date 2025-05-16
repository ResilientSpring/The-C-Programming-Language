#include <stdio.h>

void copy(char to[], char from[]);

int main() {

	char destination[];

}

void copy(char to[], char from[]) {

	int index = 0;

	while ( (to[index] = from[index] ) )
	{
		if (to[index] == '\0') {

			break;

		}

		index++;
	}

}