#include <stdio.h>

int main() {



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