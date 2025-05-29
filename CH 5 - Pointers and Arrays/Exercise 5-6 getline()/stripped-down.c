/*  Rewrite appropriate programs from earlier chapters and exercises with pointers 
    instead of array indexing. */

#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000

int getline(char s[], int limit);

int main() {

    char current_input_line[MAX_CHARACTERS_PER_LINE];

    int length = 0;

    length = getline(current_input_line, MAX_CHARACTERS_PER_LINE);

    printf("%d  %s\n", length, current_input_line);

}

/* getline: read a line into s, return length */
int getline(char s[], int limit) {

    int index = 0;

    char character;

    character = getchar();

    while ((character = getchar()) != '\n') {

        ++index;

        *(s++) = character;

       // index++;

        if (index == limit)
            break;

    }

    return index;
}
