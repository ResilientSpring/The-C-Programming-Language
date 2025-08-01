﻿/* This program sorts each input line of texts by length from short to long. */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* max # lines to be sorted */

#define ALLOCSIZE 10000

char* lineptr[MAXLINES];  /* line's pointer: pointers to text lines */

int readlines(char* lineptr[], int n_lines);

void writelines(char* lineptr[], int n_lines);



/* sort input lines */
int main() {

	char   allocbuf[ALLOCSIZE];

	extern void qsort(char* lineptr[], int left, int right);

	int n_lines;

	/* The sorting process has three steps: */  // [2]

	// Step1: read all the lines of input
	if ((n_lines = readlines(lineptr, MAXLINES)) >= 0) {

		// Step2: sort them
		qsort(lineptr, 0, n_lines - 1);

		// Step3: print them in order
		writelines(lineptr, n_lines);

		return 0;

	}
	else {

		printf("error: too many lines to sort\n");

		return 1;
	}

	printf("allocbuf[9999] is %d.\n", allocbuf[9999]);

}

#define MAXLEN 1000 /* max length of any input line */
int getlines(char*, int);
char* alloc(int);

/* readlines: read input lines */
/* Step1 has to record (namely to get and save each character of) each input line,
   and build an array of pointers to these lines. [2] */
int readlines(char* lineptr[], int maxlines) {

	// Step1 also has to count the number of input lines, 
	// since that information is needed for sorting and printing.[2]
	int the_number_of_input_lines = 0;

	int length;
	char* p;
	char line[MAXLEN];

	while ((length = getlines(line, MAXLEN)) > 0)

		//  Since Step1 is designed to only cope with a finite number of input lines, 
		//  it will return illegal line count like −1 if too much input lines are present.[2]
		if (the_number_of_input_lines >= maxlines || (p = alloc(length)) == NULL)
			return -1;
		else {

			line[length - 1] = '\0';  // substitute 0 for newline ('\n').
			strcpy(p, line);
			lineptr[the_number_of_input_lines++] = p;
		}

	return the_number_of_input_lines;
}


/* writelines: output lines */
/* The output routine only has to print the lines in the order in which they appear in the array
	of pointers. [2] */
void writelines(char* lineptr[], int n_lines) {

	int i;

	for (i = 0; i < n_lines; i++)
		printf("%s \n", lineptr[i]);

}

/* qsort: sort v[left]...v[right] into increasing order */
void qsort(char* v[], int left, int right) {

	int i, last;

	void swap(char* v[], int i, int j);

	if (left >= right)  /* do nothing if array contains */
		return;         /* fewer than two elements */

	swap(v, left, (left + right) / 2);
	last = left;

	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);

	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}


/* swap: interchange v[i] and v[j] */
void swap(char* v[], int i, int j) {

	char* temp;

	temp = v[i];

	v[i] = v[j];

	v[j] = temp;

}

/* getline: read a line into s, return length, limit is the max # characters per line */
int getlines(char s[], int limit) {

	int i;
	char character;

	for (i = 0; i < (limit - 2) && (character = getchar()) != EOF && (character != '\n'); ++i)
		s[i] = character;


	if (character == '\n') {

		s[i] = character;

		++i;  // a line containing only a newline has length 1.

	}

	s[i] = '\0';

	return i;

}

#define ALLOCSIZE 10000  

char   allocbuf[ALLOCSIZE];
char*  allocp = allocbuf;

char* alloc(int n)  // return pointer to n characters.
{

	if (allocbuf + ALLOCSIZE - allocp >= n) {   // it fits

		allocp += n;

		return allocp - n;  // old p

	}
	else
		return 0;  // no enough room.
}
