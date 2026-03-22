#include <stdio.h>

int main()
{
    char * spot_on[10] = { "a", "b", "c", "d", "e", "f", "biceps", "triceps", "8", "9" };

    // spot_on will choose the right hand side first because [] has higher precedence than *.
    char a = *(spot_on)[0];
}


// References: 
// 1. https://gemini.google.com/app/183ee2a9d9e514c7
// 2. https://chatgpt.com/c/69bfc63d-51b8-8322-a4f3-784ca56b087b
