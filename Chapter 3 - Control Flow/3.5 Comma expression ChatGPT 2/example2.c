#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    for (; i++, j < 3; j++) {
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}

// Source: https://chatgpt.com/c/6950cf52-6108-8324-bfce-910e9526eea1
