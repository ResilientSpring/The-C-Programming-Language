#include <stdio.h>
int main(void)
{
    char word[20];
    if (scanf("%19s", word) == 1)
        puts(word);
    return 0;
}

/*

An address-of operator (&) is not used for the argument: as word is the name of an array of char, 
as such it is (in all contexts in which it evaluates to an address) equivalent to a pointer to 
the first element of the array. 

While the expression &word would numerically evaluate to the same value, semantically, 
it has an entirely different meaning in that it stands for the address of the whole array rather than 
an element of it.

array_name == &array_name[0]



*/