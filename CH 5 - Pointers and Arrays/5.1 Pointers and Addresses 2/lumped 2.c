int x = 1, y = 2, z[10];

int* ip;  // ip is a pointer to int.     ip is a pointer that contains the memory address of an int.

ip = &x;  // ip now points to x.   ip now contains the memory address of x.
y = *ip;  // y is now 1.
*ip = 0;  // x is now 0.
ip = &z[0];  // ip now points to z[0].    ip now holds the memory address of &z[0].