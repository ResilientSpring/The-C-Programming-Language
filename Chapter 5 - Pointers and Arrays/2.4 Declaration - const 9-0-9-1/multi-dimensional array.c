#include <stdio.h>

int* count_lengths(char(*arr)[][5]) {

//    int size_ptr = sizeof(*arr);

    int rows = sizeof( *arr ) / sizeof( (*arr)[0] );         // total rows
    int cols = sizeof( (*arr)[0] ) / sizeof( (*arr)[0][0] ); // total columns

    static int lengths[6];  // static so it persists after return

    for (int i = 0; i < rows; i++) {

        int len = 0;
        
        for (int j = 0; j < cols && (*arr)[i][j] != '\0'; j++)
            len++;
        
        lengths[i] = len;

    }

    return lengths;
}

int main(void) {

    char argument[][5] = {

        {'f', 'o', 'a', 'm', '\0'},
        {'l', 'i', 'm', 'b', '\0'},
        {'l', 'i', 'm', 'p', '\0'},
        {'c', 'r', 'i', 'p', 0},
        "set",
        "Acer"
    };

    int* lengths = count_lengths(&argument);

    printf("[");
    for (int i = 0; i < 6; i++) {
        printf("%d", lengths[i]);
        if (i < 5) printf(", ");
    }
    printf("]\n");

    return 0;
}
