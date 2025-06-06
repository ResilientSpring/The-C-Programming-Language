#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* max # lines to be sorted */

char* lineptr[MAXLINES];  /* pointers to text lines */

int readlines(char* lineptr[], int n_lines);

void writelines(char* lineptr[], int n_lines);

void qsort(char* lineptr[], int left, int right);

/* sort input lines */
int main() {

	int n_lines;

	/* number of input lines read */
	if ((n_lines = readlines(lineptr, MAXLINES)) >= 0) {

		qsort(lineptr, 0, n_lines - 1);

		writelines(lineptr, n_lines);

		return 0;

	}
	else {

		printf("error: input too big to sort\n");

		return 1;
	}

}

#define MAXLEN 1000 /* max length of any input line */
int getline(char*, int);
char* alloc(int);

/* readlines: read input lines */
int readlines(char* lineptr[], int maxlines) {

	int length, n_lines;
	char* p, line[MAXLEN];

	n_lines = 0;

	while ( (length = getline(line, MAXLEN) ) > 0 )
	
		if (n_lines >= maxlines || (p = alloc(length)) == NULL)
			return -1;
		else {

			line[length - 1] = '\0';  // delete newline
			strcpy(p, line);
			lineptr[n_lines++] = p;
		}
	
	return n_lines;
}


/* writelines: write output lines */
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

//  parameter names are optional in a function prototype.[2]:41 This is not a function prototype.
int getline(char*, int) {

	/* 
	
	   This is a function definition (because it has a body {}), 
	   but the parameters are unnamed (char*, int) �X they only have types, 
	   not variable names. [1]
	   
	 */

}

// Reference:
// 1. https://chatgpt.com/c/683aa6b2-72ac-8008-98a1-2ca6f062281c
// 2. The C Programming Language