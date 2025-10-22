#include <stdio.h>

void leap_year(int year) {

    //  a year is a leap year if it is divisible by 4 but not by 100, 
    //  except that years divisible by 400 are leap years.

    // Except that years divisible by 400 are leap years, 
    // a year is a leap year if it is divisible by 4 but not by 100.

    // If 
    if (

        // a year is divisible by 4 and the year is not divisible by 100
        (year % 4 == 0 && year % 100 != 0)

        ||

        // except that years divisible by 400 are leap years.
        year % 400 == 0

        )

        printf("%d is a leap year\n", year); // the year is a leap year.

    else

        printf("%d is not a leap year\n", year);

}


int main() {

    leap_year(2025);

}