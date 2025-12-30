#include <stdio.h>

int main(void)
{
    char s[] = "ABC";
    char *p;

    for (p = s; p; p++) {
        printf("Character: %c\n", *p);
        if (*p == '\0')
            break;
    }

    return 0;
}

// Source: https://chatgpt.com/c/6950cf52-6108-8324-bfce-910e9526eea1
