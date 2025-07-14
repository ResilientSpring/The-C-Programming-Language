#include <stdio.h>

void writelines(char* lineptr[], int nlines)
{
	while (--nlines > 0)
		printf("%s\n", *lineptr++);
}


int main() {

	char* arr[10] = { "allude to someone/something", "clutter", "tangle", "tangible assest" };

	writelines(arr, 10);

}
