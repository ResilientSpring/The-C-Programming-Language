#include <stdio.h>

void copy(char* to, char* from);

int main() {

	char* comfy = "comfy";

	char cozy[10];

	copy(cozy, comfy);
}


void copy(char* to, char* from) {

	while ( (*to = *from) != '\0')
	{
		to++;
		++from;
	}

}