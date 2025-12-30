#include <stdio.h>

int main(void)
{
    char buf[10] = "hello";
    int i = 0;

    for (; i < 1, buf; i++) {
        printf("Loop body runs\n");
        break;
    }

    return 0;
}

// Source: https://chatgpt.com/c/6950cf52-6108-8324-bfce-910e9526eea1
