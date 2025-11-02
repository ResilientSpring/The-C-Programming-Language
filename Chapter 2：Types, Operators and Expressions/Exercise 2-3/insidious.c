#include <stdio.h>

int htoi(char* parameter) {

	int i, n = 0;

	for (i = 0; parameter[i] >= '0' && parameter[i] <= '9' ||
		parameter[i] >= 'a' && parameter[i] <= 'f' || parameter[i] >= 'A' && parameter[i] <= 'F'; i++) {

		if (parameter[i] == '0') {

		}
		else if (parameter[i] == 'X') {

		}
		else if (parameter[i] == 'x') {

		}
		else if (parameter[i] >= '0' && parameter[i] <= '9') {

			n = 16 * n + (parameter[i] - '0');

		}
		else if (parameter[i] >= 'a' && parameter[i] <= 'f') {

		}
		else if (parameter[i] >= 'A' && parameter[i] <= 'F') {

		}

	}

	return n;
}

int main() {



}

// Follow-up: https://chatgpt.com/c/69021d8e-a380-8322-b6c1-71b57263abf2
