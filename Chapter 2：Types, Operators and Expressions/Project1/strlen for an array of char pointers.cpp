#include <stdio.h>
#include <string.h>

int main() {

	const char* sentences[] = { "fleet", "draining the swamp", "volitional" };

}

void string_length(char* (*parameter)[]) {

	

}

void string_length(char *sentences[]) {
    int i = 0;
    while (sentences[i] != NULL) {  // loop until NULL pointer (end of array)
        printf("%zu\n", strlen(sentences[i]));
        i++;
    }
}