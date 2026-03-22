#include <stdio.h>

int main()
{
    char * spot_on[10] = { "a", "b", "c", "d", "e", "f", "biceps", "triceps", "8", "9" };

    // "In C, the name of an array (like spot_on) usually "decays" into a pointer to its first element."
    // " *spot_on: This dereferences the array name. "
    // spot_on == &spot_on[0]
    // *spot_on == spot_on[0]
    char a = (*spot_on)[10];

    // "If you wanted the first letter of the 10th string:"
    a = *(spot_on + 9) + ;

    a = *(spot_on[9] + 0 );

    printf("%c\n", a);

}


// Reference: https://gemini.google.com/app/183ee2a9d9e514c7
