/* strlen: return length of string s */

int strlen(char* s) {

	char* p = s;

	while (*p != '\0')
	{
		p++;
	}

	return p - s;
}


int main() {

	int number_of_elements;

	printf("%d.\n", "badge");
}