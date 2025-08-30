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
