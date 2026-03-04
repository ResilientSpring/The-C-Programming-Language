#include <stdlib.h>
#include "MyClass.h"

struct MyClass {
    int x; // Truly hidden from main.c!
};

MyClass* create_obj() {
    return malloc(sizeof(struct MyClass));
}

void set_x(MyClass* obj, int val) { obj->x = val; }
int get_x(MyClass* obj) { return obj->x; }