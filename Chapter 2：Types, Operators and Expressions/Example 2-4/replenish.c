//  Write an alternate version of squeeze(s1,s2) 
//  that deletes each character in s1 that matches any character in the string s2.

#include <stdio.h>

void squeeze(char* s1, char* s2) {

	int i, j;

	for (i = 0; s1[i] != '\0'; i++) {

		for (j = 0; s2[j] != 0; j++) {

			if (s1[i] == s2[j]) {

				s1[i] = s1[i + 1];

			}

		}

	}

}

int main() {

	char s1[] = "ABCDE";
	char s2[] = "ABC";

	squeeze(s1, s2);

	printf("%s\n", s1);
}