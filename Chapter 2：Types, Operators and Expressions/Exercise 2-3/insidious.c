// Write the function htoi(s), which converts a string of hexadecimal digits 
// (including an optional 0x or 0X) into its equivalent integer value.
// The allowable digits are 0 through 

#include <stdio.h>

int htoi(char* parameter) {

	int i, n;

	for (i = 0; parameter[i] >= '0' && parameter[i] <= '9' ||
		parameter[i] >= 'a' && parameter[i] <= 'f' || parameter[i] >= 'A' && parameter[i] <= 'F'; i++) {

		if (parameter[i] == '0') {

		}
		else if (parameter[i] == 'X') {

		}
		else if (parameter[i] == 'x') {


		}

	}

}

int main() {



}