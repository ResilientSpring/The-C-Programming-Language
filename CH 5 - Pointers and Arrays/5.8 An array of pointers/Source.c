#include <stdio.h>

char* children_name(int n);
char* children_name2(int n);

int main() {

	printf("%s", children_name(1));
	printf("%s", children_name2(1));


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