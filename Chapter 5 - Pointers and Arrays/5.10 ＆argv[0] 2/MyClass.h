#pragma once
#ifndef MYCLASS_H
#define MYCLASS_H

// 👤 Forward declaration: 
// This tells the compiler "There is a struct called MyClass, 
// but I'm not telling you what's inside it yet!"
typedef struct MyClass MyClass;

// 🛠️ The "Constructor"
// Returns a pointer because the compiler doesn't know 
// how big MyClass is to put it on the stack.
MyClass* create_obj();

// 🧹 The "Destructor"
void destroy_obj(MyClass* obj);

// 🔧 Public Methods
void set_x(MyClass* obj, int val);
int get_x(MyClass* obj);

#endif