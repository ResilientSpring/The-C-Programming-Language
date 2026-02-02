#include <stdio.h>

int atoi(char s[]);

int main() {

	//	printf("%d\n", atoi(18));

	printf("%d\n", atoi("18"));

}

// atoi: convert s to integer.
int atoi(char s[]) {

	int i, n;

	n = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)

		n = 10 * n + (s[i] - '0');  // Logic: https://chatgpt.com/c/68fdb490-2680-8323-b7c5-e5f45cb1f6b8

	return n;
}