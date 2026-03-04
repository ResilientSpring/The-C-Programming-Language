#include <stdio.h>

typedef struct MyStruct {

	int x;

} MyClass;


int main()
{
	MyClass a;
	MyClass b, c, d;

	a.x = 0;
	b.x = 1;
	c.x = 2;
	d.x = 3;

	MyClass obs[4] = { a, b, c, d };

	printf("a.x = %d\n", obs[0].x);

	printf("b.x = %d\n", obs[1].x);

	printf("c.x = %d\n", &obs[2].x);

	printf("d.x = %d\n", &obs[3].x);
}