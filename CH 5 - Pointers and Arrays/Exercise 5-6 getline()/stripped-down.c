/*  Rewrite appropriate programs from earlier chapters and exercises with pointers 
    instead of array indexing. */

#include <stdio.h>
#define MAX_CHARACTERS_PER_LINE 1000

int getline(char s[], int limit);

int main() {

    char current_input_line[MAX_CHARACTERS_PER_LINE];

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
    }

}