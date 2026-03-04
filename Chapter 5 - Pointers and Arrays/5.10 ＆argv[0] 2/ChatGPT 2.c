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
	char * i = "Hello";

	char * j = "What is this?";

	char k[] = "An array of characters.";

	char * arr[] = { i, j, k };


}