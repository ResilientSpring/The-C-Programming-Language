#include <stdio.h>

int main() {




}

char* children_name(int n) {


	char* name[] = {

		"Invalid"
		"Huaei Gii",
		"Agao",
		"Meiren"
	};

	return (n < 1 || n > 3) ? name[0] : name[n];
}