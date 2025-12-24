#include <stdio.h>

int test() {

	int a[3][4] = {  

		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	
	};

	int(*p)[4] = a;

	p + 1;        // moves by sizeof(int[4])
	*(p + 1);     // the 2nd row
	(*p)[2];      // element access

}



int main()
{



}