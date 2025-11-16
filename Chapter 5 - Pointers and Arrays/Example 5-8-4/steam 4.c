// Add error checking in day_of_year or month_day.

#include <stdio.h>

char daytab[2][13] = {
	// We started the array daytab with a column of zero so that month numbers can run from the
	// natural 1 to 12 instead of 0 to 11.[1]
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int* pmonth, int* pday)
{
	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	if (yearday < 1 || yearday >(leap ? 366 : 365)) {
		*pmonth = *pday = -1;
		return;
	}

	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];

	*pmonth = i;
	*pday = yearday;

}

/* month_name: return name of n-th month */
char* month_name(int n)
{
	char* name[] = {

		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};

	return (n < 1 || n > 12) ? name[0] : name[n];
}


int main() {

	int month, day;
	month_day(2024, 60, &month, &day);
	printf("Month: %s, Day: %d\n", month_name(month), day);


}

// Code review: https://chatgpt.com/c/6915fd71-41b8-8322-ac61-b7f039493337

	// References:
	// 
	// 1. The C Programming Language
	// 
	// 2. https://dictionary.cambridge.org/dictionary/english/leap-year
	//
