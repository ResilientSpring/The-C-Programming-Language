#include <math.h>

struct point {
    int x;
    int y;
};

struct point pt;
struct point maxpt = { 320, 200 };

double dist;

int main(void)
{
    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

    return 0;
}

// Reference: https://chatgpt.com/c/6a33ca53-d934-83e8-9054-1552209d6a00
