#include <stdio.h>

int main() {

	enum colors appearance = GREEN;

    enum colorful exterior = BLUE;
}

enum colors { RED, GREEN, BLUE };
enum traffic { STOP, GO, CAUTION };
enum traffic_lights { RED, YELLOW, GREEN };

enum escape {
    BELL = '\a',     // ASCII 7
    BACKSPACE = '\b',// ASCII 8
    TAB = '\t',      // ASCII 9
    NEWLINE = '\n',  // ASCII 10
    VTAB = '\v',     // ASCII 11
    RETURN = '\r',   // ASCII 13
    CR = '\r'        // same as RETURN, value 13
};

enum colorful { RED, GREEN, BLUE, BLUE }; // Within the same enumeration, names must also be distinct.


// Reference: https://chatgpt.com/c/68cfbaf9-03f0-8325-a1a5-92efdcc617fc

