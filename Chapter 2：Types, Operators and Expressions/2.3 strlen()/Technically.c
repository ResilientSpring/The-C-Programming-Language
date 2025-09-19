#include <stdio.h>

int strlen(char str[]);

int main() {

	printf("%d\n", strlen("snug"));

}

int strlen(char str[]) {

	int i = 0;

	int counter = 0;

	while (str[i] != '\0') {

		i++;
		counter++;

	}

	return counter;
}