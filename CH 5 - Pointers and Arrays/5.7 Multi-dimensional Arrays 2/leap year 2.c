static char daytab[2][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

};

/* day_of_year: set day of year from month & day  */
int day_of_year(int year, int month, int day) {

	int i, leap;

	// "Recall that the arithmetic value of a logical expression, such as the one for leap, 
	// is either zero(false) or one(true), " [1]
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	// " so it can be used as a subscript of the array daytab." [1]
	for (i = 1; i < month; i++)
		day += daytab[leap][i];

	return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int* pmonth, int* pday)
{

	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];

	*pmonth = i;
	*pday = yearday;

}

/* month_name: return name of n-th month */
char* month_name(int n)
{
	static char* name[] = {

		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};

	return (n < 1 || n > 12) ? name[0] : name[n];
}

// References:
// 
// 1. The C Programming Language
// 