#include <stdio.h>

void leap_year(int year) {

    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

        printf("%d is a leap year\n", year);

    else
    
        printf("%d is not a leap year\n", year);

}


int main() {

    leap_year(2025);

}