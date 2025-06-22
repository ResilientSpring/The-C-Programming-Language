#include <stdio.h>

int i = 0, j = 0;

/* strcat:  concatenate t to end of s; s must be big enough */
void strcat(char concatenated_string[], char concatenating_string[]) {


	//	i = j = 0;

	//	while (s[i] != '\0') /* find the end of s */
	//		i++;

		// Find the null terminator in the concatenated string for the concatenating string 
		// to overwrite b/c the concatenating string per se has a null terminator as well and each 
		// string requires only one null terminator.
	while (concatenated_string[i++]);

	i--;  // i is now the position of 0 in the character array concatenated_string.

	// Concatenate (i.e. copy ) "concatenating_string" to the end of "concatenated_string".
	while (concatenated_string[i++] = concatenating_string[j++]);

	//	while ((s[i++] = t[j++]) != '\0')  /* copy t */
	//		;

}

int main() {

	char s[200] = "clutter = mess around = messy = ";

	strcat(s, "tangle = untidy.");

	printf("%s\n", s);

	printf("j now has the value: %d\n", j);

}