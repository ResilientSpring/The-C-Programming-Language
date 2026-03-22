#include <stdio.h>

int main(void)
{
    char *i = "Hello";
    char *j = "World";
    char k[] = "C language";

    char *arr[] = { i, j, k };

    printf("Addresses of the pointer variables:\n");
    printf("&i      = %p\n", (void*)&i);
    printf("&j      = %p\n", (void*)&j);
    printf("&k      = %p\n", (void*)&k);

    printf("\nAddresses of the array elements:\n");
    printf("&arr[0] = %p\n", (void*)&arr[0]);
    printf("&arr[1] = %p\n", (void*)&arr[1]);
    printf("&arr[2] = %p\n", (void*)&arr[2]);

    printf("\nArray decay result:\n");
    printf("arr     = %p\n", (void*)arr);

    printf("\nPointer values stored inside:\n");
    printf("arr[0]  = %p\n", (void*)arr[0]);
    printf("i       = %p\n", (void*)i);

    printf("\nEquality checks:\n");
    printf("arr == &arr[0] : %d\n", arr == &arr[0]);
    printf("arr[0] == i    : %d\n", arr[0] == i);
    printf("&arr[0] == &i  : %d\n", &arr[0] == &i);

    return 0;
}

// Src: https://chatgpt.com/c/69a68288-1074-8322-9450-188fbc936ec0
