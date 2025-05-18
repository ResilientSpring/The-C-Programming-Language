#include <stdio.h>

int main() {

	char cryptic[8];

	cryptic[0] = 'c';
	cryptic[1] = 'l';
	cryptic[2] = 'u';
	cryptic[3] = 't';
	cryptic[4] = 't';
	cryptic[5] = 'e';
	cryptic[6] = 'r';

	cryptic[7] = '\0';

	printf("%s\n", cryptic);
}