// Example 1

#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5;

    for (i = 0, j = n - 1; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}

// Source: https://chatgpt.com/c/6950cf52-6108-8324-bfce-910e9526eea1
