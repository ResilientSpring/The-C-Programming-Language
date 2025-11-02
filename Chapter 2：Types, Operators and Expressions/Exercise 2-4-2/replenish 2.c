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
	printf("%s\n", s1);
}

int main() {

	squeeze("ABCDE", "ABC"); // "ABCDE" isn't modifiable.[1]

}

// References:
// 1. https://chatgpt.com/c/69075cb1-1c3c-8322-bc57-d0421da5c052
