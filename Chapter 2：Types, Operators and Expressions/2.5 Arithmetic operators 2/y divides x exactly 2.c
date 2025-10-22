#include <stdio.h>

void leap_year(int year) {

    //  a year is a leap year if it is divisible by 4 but not by 100, 
    //  except that years divisible by 400 are leap years.


    // If a year is divisible by 4 and the year is not divisible by 100
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

        printf("%d is a leap year\n", year); // a year is a leap year.

    else

        printf("%d is not a leap year\n", year);

}


int main() {

    leap_year(2025);

}