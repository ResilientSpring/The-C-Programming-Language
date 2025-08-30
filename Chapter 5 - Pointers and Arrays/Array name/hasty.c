#include <stdio.h>

int *get_arr();

int main() {



}


int *get_arr() {
    static int arr[4];
    return arr; // decay occurs here
}
