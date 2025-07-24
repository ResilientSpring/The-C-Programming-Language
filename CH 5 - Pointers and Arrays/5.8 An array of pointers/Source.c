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

char* children_name2(int n) {


	char* name[] = {

		"Invalid"
		"Huaei Gii",
		"Agao",
		"Meiren"
	};

	if (n < 1 || n > 3)
		return name[0];
	else
		return name[n];
}