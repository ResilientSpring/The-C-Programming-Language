#include <stdio.h>

int main() {

	char characters[] = "clutter = mess around";

	characters = 'a';
}

// array names are not modifiable lvalues; you can't assign to them.
// https://chatgpt.com/c/682864ff-8d50-8008-a66e-b44b852f5ec4