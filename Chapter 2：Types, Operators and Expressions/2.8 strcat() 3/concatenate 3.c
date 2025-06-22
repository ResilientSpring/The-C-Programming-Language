#include <stdio.h>

/* strcat:  concatenate t to end of s; s must be big enough */
void strcat(char concatenated_string[], char concatenating_string[]) {

	int i = 0, j = 0;

//	i = j = 0;

//	while (s[i] != '\0') /* find the end of s */
//		i++;

	// Find the null terminator in the concatenated string for the concatenating string 
	// to overwrite b/c the concatenating string per se has a null terminator as well and each 
	// string requires only one null terminator.
	while()


	while ((s[i++] = t[j++]) != '\0')  /* copy t */
		;

}

int main() {

	char s[200] = "clutter = mess around = messy = ";

	strcat(s, "tangle = untidy.");

	printf("%s\n", s);

}