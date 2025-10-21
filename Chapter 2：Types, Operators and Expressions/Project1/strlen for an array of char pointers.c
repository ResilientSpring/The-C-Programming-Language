#include <stdio.h>
#include <string.h>
void string_lengths(char* sentences[]);

int main() {

    const char* sentences[] = { "fleet", "draining the swamp", "volitional" };

    string_lengths(sentences);
}

void string_length(char* (*parameter)[]) {

}

void string_lengths(const char* sentences[]) {

    int i = 0;

    while (sentences[i] != NULL) {  // loop until NULL pointer (end of array)

        printf("%zu\n", strlen(sentences[i]));

        i++;
    }

}