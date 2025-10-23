//  Write a loop equivalent to the for loop above without using && or ¦¦.

#include <stdio.h>

int main() {

	int i, lim = 10, c, s[100];

	for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;

	//  Write a loop equivalent to the for loop above without using && or ¦¦.
	for (i = 0; i < lim - 1; i++)
	{
		if ((c = getchar()) != '\n' && c != EOF) {

			s[i] = c;

		}
		else if ((c = getchar()) == '\n')
			break;
		else if ((c = getchar()) == EOF)
			break;

	}
}

// Assessement: https://chatgpt.com/c/68f8f0ef-ec00-8322-a9ab-be41856ff5c3
