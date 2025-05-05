#include <stdio.h>

// amessage is an array, just big enough to hold the sequence of characters 
// and ¡¬\0¡¬ that initializes it.
char  amessage[] = "now is the time";
// Individual characters within the array may be changed but amessage will always 
// refer to the same storage.


// pmessage is a pointer, initialized to point to a string constant.
char* pmessage = "now is the time";
// The pointer may subsequently be modified to point elsewhere. 
// The result is undefined if you try to modify a string constant.





// Further explanations:
// 
// 1. https://chatgpt.com/c/68189ab5-f3fc-8008-87e1-dfef97528764
// 2. https://chatgpt.com/c/681890a0-50d0-8008-b9c6-f916f32113ba
// 3. https://chatgpt.com/c/68189c04-ba74-8008-aed6-6ef3a85673f8