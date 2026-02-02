#include <stdio.h>

enum traffic { STOP = 0, GO = 1, CAUTION = 1 };
enum traffic_lights { RED, YELLOW, GREEN };

int main() {

    enum traffic exterior = CAUTION;

    printf("%d\n", exterior);
}

// Reference: https://chatgpt.com/c/68cfbaf9-03f0-8325-a1a5-92efdcc617fc
