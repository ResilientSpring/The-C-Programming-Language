/* strcpy: copy t to s; array subscript version */

#include <stdio.h>

void strcpy(char* s, char* t) {

	int i;

	i = 0;

	while ((s[i] = t[i]) != '\0')
		i++;

}

int main() {

	char* pmessage = "now is the time!";
	char  amessage[] = "time flies.";

	strcpy(amessage, pmessage);

	printf("%s\n", amessage);
}