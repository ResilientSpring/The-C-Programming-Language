#include <stdio.h>

typedef struct MyStruct {

	int x;

} MyClass;

void set_x(MyClass * self, int i) {

	self->x = i;

}

int get_x(MyClass * self) {
	return self->x;
}


int main()
{
	MyClass a;

	set_x(&a, 0);

	MyClass b, c, d;

	set_x(&b, 1);
	set_x(&c, 2);
	set_x(&d, 3);

	MyClass obs[4] = {a, b, c, d};

	int i;

	for (i = 0; i < 4; i++) {

		set_x(&obs[i], i);

	}


	for (i = 0; i < 4; i++) {

		printf("obs[%d].get_x(): %d \n", i, get_x(&obs[i]));

	}
}