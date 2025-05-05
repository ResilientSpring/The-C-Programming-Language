#include <stdio.h>

// amessage is an array, just big enough to hold the sequence of characters 
// and ¡¬\0¡¬ that initializes it.
char  amessage[] = "now is the time";
// Individual characters within the array may be changed but amessage will always 
// refer to the same storage.


// pmessage is a pointer, initialized to point to a string constant
char* pmessage = "now is the time";