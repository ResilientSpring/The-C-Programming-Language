#include <stdio.h>

struct S {
    int arr[5];
};



int main()
{
    struct S s;

    s.arr[0] = 0;
    s.arr[1] = 1;
    s.arr[2] = 2;
    s.arr[3] = 3;
    s.arr[4] = 4;

    printf("%d\n", s.arr[4]);

    printf("%d\n", s.arr[1]);

    return 0;
}