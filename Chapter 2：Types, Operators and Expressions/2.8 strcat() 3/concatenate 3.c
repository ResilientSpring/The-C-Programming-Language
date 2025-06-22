#include <stdio.h>

/* strcat:  concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[]) {

	int i, j;

	i = j = 0;

	while (s[i] != '\0') /* find the end of s */
		i++;

	while ((s[i++] = t[j++]) != '\0')  /* copy t */
		;

}

int main() {

	char s[200] = "clutter = mess around = messy = ";

	strcat(s, "tangle = untidy.");

	printf("%s\n", s);

}