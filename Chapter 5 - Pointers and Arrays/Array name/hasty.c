#include <stdio.h>

int* get_arr();

int main() {

    int* p = get_arr();

    p[0] = 1;
    *(p + 1) = 2;

    printf("%d\n", p[1]);
    printf("%d\n", *(p + 0));
}


int* get_arr() {

    static int arr[4];

    return arr; // decay occurs here
}

// Reference: https://chatgpt.com/c/687112f9-ef78-8008-a091-2e0b8963a49f