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
