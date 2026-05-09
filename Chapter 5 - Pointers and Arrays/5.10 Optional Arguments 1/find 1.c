#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline(char * line, int max);

enum bool{ FALSE = 0, TRUE = 1 };

typedef enum bool bool;

/* find: print lines that match pattern from 1st arg */
int main(int argc, char * argv[])
{
	char line[MAXLINE];

	long lineno = 0;

	char c;
	
	bool except, number, found;

	while (--argc > 0 && (*++argv)[0] == '-')
		while (c = *++argv[0])
			switch (c)
			{
			case 'x':
				except = TRUE;
				break;
			case 'n':
				number = TRUE;
				break;

			default:
				printf("find: illegal option %c\n", c);
				argc = 0;
				found = -1;
				break;
			}
	if (argc != 1)
		printf("Usage: find -x -n pattern \n");
	else
		while (getline(line, MAXLINE) > 0) {
			lineno++;
			if ((strstr(line, *argv) != NULL) != except) {

				if (number)
					printf("%ld:", lineno);

				printf("%s", line);
				found++;
			}
		}
	return found;
}