#include <stdio.h>

#define VTAB '\013'    /* ASCII vertical tab */
#define BELL '\007'    /* ASCII bell character */

#define VTAB2 '\xb'    /* ASCII vertical tab */
#define BELL2 '\x7'    /* ASCII bell character */

#define MAXLINE 1000
char line[MAXLINE + 1];

#define LEAP 1   /* in leap years */
int days[31 + 28 + LEAP + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31];

int main(void) {
    printf("VTAB = %d\n", VTAB);
    printf("BELL = %d\n", BELL);
    printf("VTAB2 = %d\n", VTAB2);
    printf("BELL2 = %d\n", BELL2);
    printf("Days in array = %zu\n", sizeof(days) / sizeof(days[0]));
    return 0;
}

// Reference: https://chatgpt.com/c/68ba9c7d-c264-8328-a0bb-253171e3d04a
